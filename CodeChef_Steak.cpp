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

        ll maxx1 = -1, maxx2 = -1, cnt = 0;

        for(i=0; i<n; i++){
            if(a[i] != 0){
                cnt++;
                maxx1 = max(maxx1, cnt);
            }
            else{
                cnt = 0;
            }
        }

        cnt = 0;

        for(i=0; i<n; i++){
            if(b[i] != 0){
                cnt++;
                maxx2 = max(maxx2, cnt);
            }
            else{
                cnt = 0;
            }
        }
        // cout << maxx1  << " " << maxx2 << endl;

        if(maxx1 > maxx2) cout << "Om" << endl;
        else if(maxx1 < maxx2) cout << "Addy" << endl;
        else cout << "Draw" << endl;
    }

    return 0;
}