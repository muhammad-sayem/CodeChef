#include<bits/stdc++.h>
#define      nl              '\n'
#define      yes             (cout << "YES\n")
#define      no              (cout << "NO\n")
#define      yy              (cout << "Yes\n")
#define      nn              (cout << "No\n")
#define      ll              long long
#define      pb              push_back
#define      pii             pair <int,int>
#define      pll             pair <long long,long long>
#define      rev(a)          reverse(a, a+n);
#define      Srev(s)         reverse(s.begin(), s.end());
#define      sz(s)           s.size()
#define      gcd(a,b)        __gcd(a,b)
#define      lcm(a,b)        (a*b)/gcd(a,b)
#define      fastIO          ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    fastIO;

    int test;
    cin >> test;

    while(test--){
        ll n, i;
        cin >> n;
        ll a[n+5];
        ll b[n+5];

        for(i=0; i<n; i++){
            cin >> a[i];
        }

        for(i=0; i<n; i++){
            cin >> b[i];
        }

        ll cnt = 0;

        for(i=0; i<n; i++) {
            if((a[i] <= (2*b[i])) && (b[i] <= (2*a[i]))){
                cnt++;
            }
        }
        cout << cnt << nl;   
    }

    return 0;
}