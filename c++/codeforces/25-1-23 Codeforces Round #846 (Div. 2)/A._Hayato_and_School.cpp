#include <climits>
#include <iostream>
#include <string>
#include <cmath>
#include <math.h>
#include <algorithm>
#include <vector>
typedef long long int ll;

using namespace std;

int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        ll n,j=0,count=0,c2=0,k=0 ;cin>>n;
        ll a[n],b[3],c[n-3];
        for(ll i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2!=0){
                b[j]=i+1;
                j++;
                count++;
            }
            else{
                c[k]=i+1;
                c2++;
                k++;
            }
            if(count==3){
                break;
            }
            if(c2==2&&count>=1){
                break;
            }
        }
        if(count==3){
            cout<<"YES"<<endl<<b[0]<<" "<<b[1]<<" "<<b[2]<<endl;
        }
        else if(c2==2&&count>=1){
            cout<<"YES"<<endl<<c[0]<<" "<<c[1]<<" "<<b[0]<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
    }
    return 0;
}


// inputCopy
// 6
// 3
// 1 1 1
// 4
// 1 1 2 2
// 3
// 1 2 3
// 5
// 1 4 5 1 2
// 4
// 2 6 2 4
// 5
// 5 6 3 2 1
// outputCopy
// YES
// 1 2 3
// YES
// 3 4 1
// NO
// YES
// 1 3 4
// NO
// YES
// 1 3 5