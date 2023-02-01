#include <bits/stdc++.h>
using namespace std;

#define int long long
using ll = long long;
typedef vector<int> vi;
typedef pair<int, int> pii;

#define pb emplace_back
#define mp make_pair
#define F first
#define endl '\n'
#define Endl '\n'
#define S second
#define all(c) (c).begin(), (c).end()
int const MOD = 1000000007;

struct TrieNode
{
    struct TrieNode *children[26];
    bool isEndOfWord;
};

struct TrieNode *getNode()
{
    struct TrieNode *pNode = new TrieNode;
    pNode->isEndOfWord = false;
    for (int i = 0; i < 26; i++)
        pNode->children[i] = NULL;

    return pNode;
};

void insert(struct TrieNode *root, const string &key)
{
    struct TrieNode *pCrawl = root;

    for (int i = 0; i < key.length(); i++)
    {
        int index = key[i] - 'a';
        if (!pCrawl->children[index])
            pCrawl->children[index] = getNode();

        pCrawl = pCrawl->children[index];
    }
    pCrawl->isEndOfWord = true;
}

bool isEmpty(TrieNode *root)
{
    for (int i = 0; i < 26; i++)
        if (root->children[i])
            return false;
    return true;
}

TrieNode *remove(TrieNode *root, string key, int depth = 0)
{
    if (!root)
        return NULL;

    if (depth == key.size())
    {
        if (root->isEndOfWord)
            root->isEndOfWord = false;

        if (isEmpty(root))
        {
            delete (root);
            root = NULL;
        }

        return root;
    }

    int index = key[depth] - 'a';
    root->children[index] =
        remove(root->children[index], key, depth + 1);

    if (isEmpty(root) && root->isEndOfWord == false)
    {
        delete (root);
        root = NULL;
    }

    return root;
}

bool search(struct TrieNode *root, char key)
{
    if (root->children[key - 'a'])
        return true;
    return false;
}
vector<string> ans;
bool solve(struct TrieNode *root, const string &key)
{
    struct TrieNode *pCrawl = root;
    int n = key.size();
    for (int i = 0; i < n; i++)
    {
        int index = key[i] - 'a';
        if (!pCrawl->children[index])
        {
            return false;
        }
        else
        {
            pCrawl = pCrawl->children[index];
            if (pCrawl->isEndOfWord)
            {
                if (solve(root, key.substr(i + 1, n - i - 1)))
                {
                    return true;
                }
            }
        }
    }
    return false;
}

set<string> s;
vector<string> findAllConcatenatedWordsInADict(vector<string> words)
{
    TrieNode *root = new TrieNode();
    for (string &it : words)
    {
        insert(root, it);
        s.emplace(it);
    }
    for (string &it : words)
    {
        s.erase(it);
        remove(root, it);
        if (solve(root, it))
        {
            ans.push_back(it);
        }
        insert(root, it);
        s.emplace(it);
    }
    return ans;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    findAllConcatenatedWordsInADict({"cat", "cats", "catsdogcats", "dog", "dogcatsdog", "hippopotamuses", "rat", "ratcatdogcat"});
}