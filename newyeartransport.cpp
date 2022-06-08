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

vi arr[N + 1];
int t, n;
bool dfs(int v)
{
    if (v > n)
        return false;
    if (v == t)
        return true;
    for (int child : arr[v])
    {
        if (child > t)
            return false;
        if (dfs(child))
            return true;
    }
    return false;
}

void soln()
{
    cin >> n;
    cin >> t;

    vi v1(n + 1, 0);
    v1[0] = 0;
    for (int i = 1; i <= n; i++)
        cin >> v1[i];

    for (int i = 1; i <= n; i++)
        arr[i].pb(i + v1[i]);

    if (dfs(1))
        cout << "YES";
    else
        cout << "NO";
    cout << '\n';
}

signed main()
{
    int tt;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    tt = 1;
    // cin>>tt;
    // int p=1;
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