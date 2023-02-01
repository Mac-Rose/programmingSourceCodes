#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;

#define pb emplace_back
#define mp make_pair
#define F first
#define S second

struct node
{
    int data;                           //This is the part that will store the data of the node.
    struct node* left;                  //This stores the pointer to another node name left.
    struct node* right;                 //This stores the pointer to another node name right.
    node (int val)
    {
        data=val;
        left = NULL;
        right = NULL;
    }
};

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int 
}