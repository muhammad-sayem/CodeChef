#include<bits/stdc++.h>
#define      endl            '\n'
#define      yes             "YES"
#define      no              "NO"
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
        ll n, i, j, k, cnt = 0, sum = 0, mult = 1;
        cin >> n;
        ll a[n+5];

        for(i=0; i<n; i++){
            cin >> a[i];
        }

        for(i=0; i<n-1; i++){

            bool flag = false;
            for(j=i+1; j<n; j++){
                if(flag == false){
                    sum += a[i]+a[j];
                    mult *= a[i]*a[j];
                }
                else{
                    sum += a[j];
                    mult *= a[j];
                }
                if(sum == mult) cnt++;
                flag = true;
            }

            sum = 0;
            mult = 1;
        }

        cout << cnt+n << endl;
    }       

    return 0;
}


