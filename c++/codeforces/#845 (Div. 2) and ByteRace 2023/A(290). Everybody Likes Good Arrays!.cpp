// name:A. Everybody Likes Good Arrays!

// An array a
//  is good if for all pairs of adjacent elements, ai
//  and ai+1
//  (1≤i<n
// ) are of different parity. Note that an array of size 1
//  is trivially good.

// You are given an array of size n
// .

// In one operation you can select any pair of adjacent elements in which both elements are of the same parity, delete them, and insert their product in the same position.

// Find the minimum number of operations to form a good array.

// Input
// Each test contains multiple test cases. The first line contains the number of test cases t
//  (1≤t≤500
// ). The description of the test cases follows.

// The first line of each test case contains an integer n
//  (1≤n≤100
// ).

// The second line of each test case contains n
//  integers a1,a2,…,an
//  (1≤ai≤109
// ).

// Output
// For each test case print an integer, the minimum number of operations required to form a good array.

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
    ll n, e = 0, o = 0, total = 0;
    cin >> n;
    ll a[n];
    forn(i, n)
    {
        cin >> a[i];
    }
    if (n == 1)
    {
        total = 0;
    }
    else
    {
        
        forn(i, n - 1)
        {
            if (a[i]%2 == a[i + 1]%2)
            {
                total++;
            }
            else{
                total+=0;
            }
        }
    }

    cout << total << endl; 
    
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

// //test cases
// 3
// 5
// 1 7 11 2 13
// 4
// 1 2 3 4
// 6
// 1 1 1 2 2 3

// //expected output
// 2
// 0
// 3