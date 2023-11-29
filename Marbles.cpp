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
        ll a, b, i;
        cin >> a >> b;

        if(a%b == 0) cout << 0 << nl;
        else{

            ll x = a, y = b;

            if(x<y){
                ll cnt = 0;

                while(x%y != 0){
                    cnt++;
                    x++;
                    y--;
                }
                cout << cnt << nl;
            }

            else{
                ll cnt1 = 0, cnt2 = 0, ans = 1e9+5;
                while(x%y != 0){
                    cnt1++;
                    x--;
                    y++;
                }

                ans = min(cnt1, ans);
                
                x = a, y = b;

                while(x%y != 0){
                    cnt2++;
                    x++;
                    y--;
                }
                ans = min(cnt2, ans);
                
                cout << ans  << nl;
            }
        }
    }

    return 0;
}