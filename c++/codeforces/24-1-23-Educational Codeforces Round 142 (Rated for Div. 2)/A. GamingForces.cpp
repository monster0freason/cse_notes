// A. GamingForces
// time limit per test2 seconds
// memory limit per test256 megabytes
// inputstandard input
// outputstandard output
// Monocarp is playing a computer game. He's going to kill n
//  monsters, the i
// -th of them has hi
//  health.

// Monocarp's character has two spells, either of which he can cast an arbitrary number of times (possibly, zero) and in an arbitrary order:

// choose exactly two alive monsters and decrease their health by 1
// ;
// choose a single monster and kill it.
// When a monster's health becomes 0
// , it dies.

// What's the minimum number of spell casts Monocarp should perform in order to kill all monsters?

// Input
// The first line contains a single integer t
//  (1≤t≤104
// ) — the number of testcases.

// The first line of each testcase contains a single integer n
//  (1≤n≤100
// ) — the number of monsters.

// The second line contains n
//  integers h1,h2,…,hn
//  (1≤hi≤100
// ) — the health of each monster.

// The sum of n
//  over all testcases doesn't exceed 2⋅104
// .

// Output
// For each testcase, print a single integer — the minimum number of spell casts Monocarp should perform in order to kill all monsters.



#include <bits/stdc++.h>
using namespace std;
 
typedef long long int ll;
typedef long double ld;
typedef vector < int > vi;
typedef vector < ll > vl;
typedef pair < int, int > pii;       typedef vector <vi> vvi;
typedef pair < ll, ll > pll;         typedef vector <vl> vvl;
typedef vector < pii > vpii;         typedef map <ll, ll> mll;
typedef vector < pll > vpll;         typedef map <int,int> mii;
#define endl '\n'
#define forn(i,n) for(ll i=0; i<n; i++)
#define rforn(i,n) for(ll i=n-1; i>=0; i--)
#define forab(i,a,b) for(ll i=a; i<b; i++)
#define rforab(i,a,b) for(ll i=b-1; i>=a; i--)
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define sz(x) (ll)x.size()
#define pr(x) cout << #x << " = " << x << endl
#define F first
#define S second
#define pb push_back
#define mp(x,y) make_pair(x,y)
#define in insert

const ld eps=1e-7;
const ll MOD=1e9+7;
 
ll div_floor (const ll &a,const ll &b) { return a / b - (((a ^ b) < 0) and a % b);}
ll div_ceil (const ll &a,const ll &b) { return a / b + (((a ^ b) >= 0) and a % b);}
ll binpow (ll a, ll b) { ll res = 1;  while (b > 0) {  if (b & 1)   res = (res * a);   a = (a * a);   b >>= 1;  }    return res;} 
ll binpow (ll a, ll b, ll p){ ll res = 1; a %= p; while(b > 0) { if (b & 1)    res = (res * a) % p;  a = (a * a) % p;  b >>= 1;    }return res;}

void solve(){
    ll n,  total = 0;
    cin >> n;
    ll a[n];
    forn(i, n)
    {
        cin >> a[i];
        if(a[i]==1){
            total++;
        }
    }
   cout<<n-(total/2)<<endl;
    
    
}
int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
int t;
cin>>t;
while(t--)
{
solve();
}

    return 0;
}



// input
// 3
// 4
// 1 2 1 2
// 3
// 2 4 2
// 5
// 1 2 3 4 5

// output
// 3
// 3
// 5



