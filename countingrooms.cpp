//....................AUTHOR:-Anurag
// DISCLAIMER:DON'T COPY THE CODE!!!!
// Computers are fast; programmers keep it slow

// Pragmas
#pragma GCC target("avx2")
#pragma GCC optimization("O3")
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds; // find_by_order, order_of_key
// bultin functions
#define setbits(x) __builtin_popcountll(x) /// No of set bits
#define tzrobits(x) __builtin_ctz(x)       /// Trailing zeros
#define lzrobits(x) __builtin_clz(x)       /// Leading zeros
#define lastset(x) __builtin_ffs(x)        // last set bit position(1-based)

#define coti cout << endl \
                  << flush
#define len(x) (int)(x).size()
#define pb push_back
#define eb emplace_back
#define all(x) x.begin(), x.end()
#define int long long int
#define rep(x, start, end) for (auto x = (start) - ((start) > (end)); x != (end) - ((start) > (end)); ((start) < (end) ? x++ : x--))
#define cint(n) \
    int n;      \
    cin >> n;
#define mp make_pair
#define pii pair<int, int>
#define input(v1, n)            \
    for (int i = 0; i < n; i++) \
    {                           \
        cint(x);                \
        v1.emplace_back(x);     \
    }
#define strline(s)            \
    string s;                 \
    getline(cin, s);          \
    if (s == "" || s == "\n") \
        getline(cin, s);
#define ft first
#define sc second
#define precise(digits) fixed << setprecision(digits)
#define cot(t) \
    cout << t << "\n";

typedef vector<int> vi;
int mod = 1e9 + 7; // 1e9-7
const int inf = 1e18;
const int MX = 1e6 + 1;
const int N = 1000000;
const double PI = acos(-1.0);

int n, m;
int grid[2000][2000];
int vis[2000][2000];
bool isValid(int x, int y)
{
    if (x < 1 || x >= n+1 || y < 1 || y >= m+1 || vis[x][y] == 1 || grid[x][y] == 1)
        return false;

    return true;
}
void dfs(int i, int j)
{
    vis[i][j] = 1;
    if (isValid(i - 1, j))
        dfs(i - 1, j);
    if (isValid(i, j + 1))
        dfs(i, j + 1);
    if (isValid(i + 1, j))
        dfs(i + 1, j);
    if (isValid(i, j - 1))
        dfs(i, j - 1);
}
void soln()
{
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
        {
            char ch;
            cin >> ch;
            if (ch == '#')
                grid[i][j] = 1;
        }

    int ans = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            if (grid[i][j] == 0 && !vis[i][j])
            {
                dfs(i, j);
                ans++;
            }

    cout << ans;
    cout << '\n';
}

signed main()
{
    int tt;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //#ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // freopen("error.txt", "w", stderr);
    //#endif
    tt = 1;
    auto start = chrono::system_clock::now();
    {
        while (tt--)
        {
            // cout<<"Case #"<<p<<": ";
            soln();
            // p++;
        }
    }
    auto end = chrono::system_clock::now();
    chrono::duration<double> elapsed = end - start;
    // cout << "Time taken: " << elapsed.count() << " sec";
    return 0;
}
// Remember that there is no code faster than no code.