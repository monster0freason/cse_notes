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
    
    ll a[4];
    ll sum=0;
    forn(i, 4)
    {
        cin >> a[i];
       sum+=a[i];
    }
    ll total=0,diff=0,diff2=0;
    if(a[0]>0){
        total+=a[0];
        
    }
    diff=min(a[1],a[2]);
    total+=2*min(a[1],a[2]);
    a[1]-=diff;
    a[2]-=diff;
    if(a[0]>=max(a[1],a[2])){
        total+=max(a[1],a[2]);
        diff2=a[0]-(a[1],a[2]);
        if(diff2!=0){
            a[0]=diff2;
            if(a[0]>=a[3]){
                total+=a[3];
            }
            else{
                total+=a[0];
            }
        }
    }
    else{
        total+=a[0];
    }
if(total==sum){
    cout<<total<<endl;
}
else if(sum==0){
    cout<<0<<endl;
}
else{
    cout<<total+1<<endl;
}


    
    
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
