#include<bits/stdc++.h>
#define      endl            '\n'
#define      yes             (cout << "YES\n")
#define      no              (cout << "NO\n")
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
        ll n, k;
        cin >> n >> k;
        ll a[n+5];

        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        int i = 0;
        int j = 0;
        int odd = 0;
        int ans = 0;
        int windows = 0;

        while(j<n){
            if(a[j]%2 != 0) {
                odd++;
            }

            windows++;

            if(windows >= k){
                if(odd > 0) ans++;
                if(a[i]%2 != 0) odd--;
                i++;
            }
            j++;
        }

        cout << ans << endl;
    }

    return 0;
}