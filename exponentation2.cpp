//Link:-
//....................AUTHOR:-Anurag
//DISCLAIMER:DON'T COPY THE CODE!!!!
//Computers are fast; programmers keep it slow
 
// Pragmas
#pragma GCC target("avx2")
#pragma GCC optimization("O3")
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
 
#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;
 
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds; // find_by_order, order_of_key
//bultin functions
#define setbits(x) __builtin_popcountll(x) ///No of set bits 
#define tzrobits(x) __builtin_ctz(x) ///Trailing zeros 
#define lzrobits(x) __builtin_clz(x) ///Leading zeros 
#define lastset(x)   __builtin_ffs(x) //last set bit position(1-based)
 
 
#define coti cout<<endl<<flush
#define len(x) (int) (x).size()
#define pb push_back
#define eb emplace_back
#define all(x) x.begin(),x.end()
#define allr(x) x.rbegin(),x.rend()
#define rep(x,start,end) for(auto x=(start)-((start)>(end));x!=(end)-((start)>(end));((start)<(end)?x++:x--))
#define cint(n) \
    int n;   	\
    cin >> n;
#define mp make_pair
#define pii pair<int,int>
#define input(v1,n) \
    for(int i=0;i<n;i++) 	\
    { 	\
        cint(x); 	\
        v1.emplace_back(x); 	\
    }
#define strline(s)               \
    string s;                      \
    getline(cin, s);               \
    if (s == "" || s == "\n") \
      getline(cin, s);
#define ft first
#define sc second
#define int long long int
#define line cout<<'\n'
#define precise(digits) fixed << setprecision(digits)
#define cot(t) \
    cout << t <<"\n";
 
typedef vector<int> vi;
 
int mod = 1e9 + 7;//1e9-7
const int inf = 1e18;
const int MX = 1e6 + 1;
const int N = 1000000;
const double PI =  acos(-1.0);
 
#ifndef ONLINE_JUDGE
#define debug(x)cerr << #x << " ";_print(x);cerr << endl;
#else
#define debug(x)
#endif
 
void _print(unsigned t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
 void _print(char t) {cerr << t;}
void _print(long double t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(unsigned long long t) {cerr << t;}
 
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
//********************************************😎😎****************************************************
 
 
int binpow(int a, int b, int mod) {int res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}
int invprime(int a, int b) {return binpow(a, b - 2, b);}
int mod_add(int a, int b, int m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
int mod_mul(int a, int b, int m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
int mod_sub(int a, int b, int m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
int mod_div(int a, int b, int m) {a = a % m; b = b % m; return (mod_mul(a, invprime(b, m), m) + m) % m;} 
int phin(int n) {int number = n; if (n % 2 == 0) {number /= 2; while (n % 2 == 0) n /= 2;} for (int i = 3; i <= sqrt(n); i += 2) {if (n % i == 0) {while (n % i == 0)n /= i; number = (number / i * (i - 1));}} if (n > 1)number = (number / n * (n - 1)) ; return number;} //O(sqrt(N))
int lcm(int a,int b){return a*b/(__gcd(a,b));}
//Maths👀
 
 
void soln()
{
    cint(a);
    cint(b);
    cint(c);
    int t=binpow(b,c,mod-1);
    int ans=binpow(a,t,mod);
    cout<<ans;
}
 
signed main()
{
    int tt;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    freopen("Error.txt", "w", stderr);
    #endif
    // tt=1;
    cin>>tt;
    //int p=1;
    auto start = chrono::system_clock::now();
    {
        while(tt--)
        {
            //cout<<"Case #"<<p<<": ";
            soln();
            //p++;
            line;
        }
    }
    auto end = chrono::system_clock::now();
    chrono::duration<double> elapsed = end - start;
    //cout << "Time taken: " << elapsed.count() << " sec";
    return 0;
}
//Remember that there is no code faster than no code.