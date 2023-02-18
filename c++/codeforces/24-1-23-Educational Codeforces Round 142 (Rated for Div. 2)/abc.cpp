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
        ll n, total = 0;
        cin >> n;
        ll a[n];
        for(ll i=0;i<n;i++){
            cin >> a[i];
            if (a[i] == 1)
            {
                total++;
            }
        }
        cout << n - (total / 2) << endl;
    }
    return 0;
}
