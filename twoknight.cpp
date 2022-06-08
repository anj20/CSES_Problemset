//阿努拉格 那罗延天
#include <bits/stdc++.h>
using namespace std;
#define setbits(x) __builtin_popcount(x) /// No of set bits
#define tzrobits(x) __builtin_ctz(x)     /// Trailing zeros
#define lzrobits(x) __builtin_clz(x)     /// Leading zeros
#define len(x) (int)(x).size()
#define pb emplace_back
typedef vector<int> vi;
#define int long long int
#define rep(x, start, end) for (auto x = (start) - ((start) > (end)); x != (end) - ((start) > (end)); ((start) < (end) ? x++ : x--))
#define cint(n) \
    int n;      \
    cin >> n;
#define mp make_pair
#define input(v1, n)            \
    for (int i = 0; i < n; i++) \
    {                           \
        cint(x);                \
        v1.emplace_back(x);     \
    }
#define ft first
#define sc second
#define precise(digits) fixed << setprecision(digits)
#define cot(t) \
    cout << t << "\n";
// Pragmas
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
const int mod = 1e9 + 7;
const int inf = 1e18;
const int MX = 1e6 + 1;
const int N = 1000000;
const double PI = 3.141592653589793238;
// int swap(int &a, int &b)
//{
//     a=a^b;
//     b=a^b;
//     a=a^b;
// }
// bool sieve[N + 1];
// void createSieve()
//{
//    for (int i = 2; i < N + 1; i++)
//        sieve[i] = true;
//    for (int i = 2; i * i <= N; i++)
//        if (sieve[i] == true)
//            for (int j = i * i; j <= N; j += i)
//                 sieve[j] = false;
// }
int pow(int a, int b)
{
    int ans = 1;
    if (b == 0)
        return 1;
    int x = pow(a, b / 2);
    if (b % 2)
    {
        ans = (x * x) % mod;
        ans = (ans * a) % mod;
    }
    else
        ans = (x * x) % mod;
    return ans;
}

// int factorial[N];
// int precompute_factorial()
//{
//     factorial[0] = 1;
//     for (int i = 1; i < N; i++)
//         factorial[i] = (factorial[i - 1] * i) % mod;
// }
// int gcd(int a, int b)
//{
//     if (b == 0)
//         return a;
//     else
//         return gcd(b, a % b);
// }
void soln()
{
    cint(n);
    for (int i = 1; i <= n; i++)
    {
        int k = pow(i, 2);
        cout << k * (k - 1) / 2 - 4 * (i - 1) * (i - 2) << "\n";
    }
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
    // cin >> tt;
    auto start = chrono::system_clock::now();
    {
        while (tt--)
        {
            soln();
        }
    }
    auto end = chrono::system_clock::now();
    chrono::duration<double> elapsed = end - start;
    // cout << "Time taken: " << elapsed.count() << " sec";
    return 0;
}