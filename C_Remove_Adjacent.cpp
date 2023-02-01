#include <bits/stdc++.h>
using namespace std;

namespace IO
{
    //Helper functions

    const int BUFFER_SIZE = 1 << 15;

    char input_buffer[BUFFER_SIZE];
    int input_pos = 0, input_len = 0;

    char output_buffer[BUFFER_SIZE];
    int output_pos = 0;

    char number_buffer[100];
    uint8_t lookup[100];

    void _update_input_buffer()
    {
        input_len = fread(input_buffer, sizeof(char), BUFFER_SIZE, stdin);
        input_pos = 0;

        if (input_len == 0)
            input_buffer[0] = EOF;
    }

    inline char next_char(bool advance = true)
    {
        if (input_pos >= input_len)
            _update_input_buffer();

        return input_buffer[advance ? input_pos++ : input_pos];
    }

    //Read functions

    template <typename T>
    inline void read_int(T &number)
    {
        bool negative = false;
        number = 0;

        while (!isdigit(next_char(false)))
            if (next_char() == '-')
                negative = true;

        do
        {
            number = 10 * number + (next_char() - '0');
        } while (isdigit(next_char(false)));

        if (negative)
            number = -number;
    }

    template <typename T, typename... Args>
    inline void read_int(T &number, Args &...args)
    {
        read_int(number);
        read_int(args...);
    }

    inline bool read_line(string &s)
    {
        s.clear();
        int c = next_char();
        while (c != '\n' && c != -1)
            s += c, c = next_char();
        return c != -1;
    }

    inline int read_char()
    {
        int c = next_char();
        while (c != -1 && c <= 32)
            c = next_char();
        return c;
    }

    inline void read_string(string &x)
    {
        char ch;
        while (isspace(ch = next_char()))
            ;
        do
        {
            x += ch;
        } while (!isspace(ch = next_char()) && ch != EOF);
    }

    template <typename T>
    inline void read_double(T &x)
    {
        int s = 1, c = read_char();
        x = 0;
        if (c == '-')
            s = -1, c = next_char();
        while ('0' <= c && c <= '9')
            x = x * 10 + c - '0', c = next_char();
        if (c == '.')
        {
            c = next_char();
            double coef = 1;
            while ('0' <= c && c <= '9')
                x += (c - '0') * (coef *= 1e-1), c = next_char();
        }
        s == 1 ? x : -x;
    }

    template <typename T, typename... Args>
    inline void read_double(T &number, Args &...args)
    {
        read_double(number);
        read_double(args...);
    }

    void _flush_output()
    {
        fwrite(output_buffer, sizeof(char), output_pos, stdout);
        output_pos = 0;
    }

    //Write functions

    inline void write_char(char c)
    {
        if (output_pos == BUFFER_SIZE)
            _flush_output();

        output_buffer[output_pos++] = c;
    }

    template <typename T>
    inline void write_int(T number, char after = '\0')
    {
        if (number < 0)
        {
            write_char('-');
            number = -number;
        }

        int length = 0;

        while (number >= 10)
        {
            uint8_t lookup_value = lookup[number % 100];
            number /= 100;
            number_buffer[length++] = (lookup_value & 15) + '0';
            number_buffer[length++] = (lookup_value >> 4) + '0';
        }

        if (number != 0 || length == 0)
            write_char(number + '0');

        for (int i = length - 1; i >= 0; i--)
            write_char(number_buffer[i]);

        if (after)
            write_char(after);
    }

    inline void write_string(string s)
    {
        for (auto &c : s)
            write_char(c);
    }

    inline void write_double(double x, char after = '\0', int output_len = 11) // 3rd arg tell no digits after decimal
    {
        if (x < 0)
            write_char('-'), x = -x;
        int t = (int)x;
        write_int(t), x -= t;
        write_char('.');
        for (int i = output_len - 1; i > 0; i--)
        {
            x *= 10;
            t = min(9, (int)x);
            write_char('0' + t), x -= t;
        }
        x *= 10;
        t = min(9, (int)(x + 0.5));
        write_char('0' + t);
        if (after)
            write_char(after);
    }

    void init()
    {
        // Make sure _flush_output() is called at the end of the program.
        bool exit_success = atexit(_flush_output) == 0;
        assert(exit_success);

        for (int i = 0; i < 100; i++)
            lookup[i] = (i / 10 << 4) + i % 10;
    }
}

typedef long long ll;
typedef long double lld;
typedef unsigned long long ull;
typedef vector<ll> vi;
typedef pair<ll, ll> pii;

#define pb emplace_back
#define mp make_pair
#define F first
#define Endl "\n"
#define endl "\n"
#define S second
#define all(c) (c).begin(), (c).end()

#ifndef ONLINE_JUDGE
#define debug(x)         \
    cerr << #x << " : "; \
    _print(x);           \
    cerr << endl;
#else
#define debug(x)
#pragma GCC optimize("Ofast")
#endif
using namespace IO;
signed main()
{

#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    init();
    int n;
    read_int(n);
    string a;
    read_string(a);
    int ans = 0;
    for (int i = 25; i > -1; i--)
    {
        for (int j = 0; j < a.size(); j++)
        {
            if (a[j] == i + 97 and a[j - 1] == i + 96 and j != 0)
            {
                a.erase(a.begin() + j);
                j--;
                ans++;
            }
            else if (a[j] == i + 97 and a[j + 1] == i + 96 and j != a.size() - 1)
            {
                a.erase(a.begin() + j);
                j--;
                ans++;
            }
        }
        for (int j = a.size() - 1; j > -1; j--)
        {
            if (a[j] == i + 97 and a[j - 1] == i + 96 and j != 0)
            {
                a.erase(a.begin() + j);
                j++;
                ans++;
            }
            else if (a[j] == i + 97 and a[j + 1] == i + 96 and j != a.size() - 1)
            {
                a.erase(a.begin() + j);
                j++;
                ans++;
            }
        }
    }
    write_int(ans);
}