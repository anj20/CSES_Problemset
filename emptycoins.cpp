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
using namespace std;

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

void soln()
{
    cint(a);
    cint(b);
    int max1 = max(a, b);
    int min1 = min(a, b);
    if (max1 > 2 * min1)
        cout << "NO";
    else
    {
        if ((a + b) % 3 == 0)
            cout << "YES";
        else
            cout << "NO";
    }
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
    // tt=1;
    cin >> tt;
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