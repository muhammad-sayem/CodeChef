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
        ll w1, w2, x1, x2, m, i;
        cin >> w1 >> w2 >> x1 >> x2 >> m;

        ll diff = w2-w1;

        ll minn = min(x1, x2);
        ll maxx = max(x1, x2);

        ll val1 = m*minn;
        ll val2 = m*maxx;

        bool flag = false;

        for(i=val1; i<=val2; i++){
            if(i == diff){
                flag = true;
                break;
            }
        }

        if(flag) cout << 1 << endl;
        else cout << 0 << endl;

    }

    return 0;
}
