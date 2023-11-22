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
        int n, i;
        cin >> n;
        int a[n+5];
        map<int, int> mp;

        for(i=0; i<n; i++){
            cin >> a[i];
        }

        int cnt = 0, maxx = -1e9;

        for(i=0; i<n; i++){
            mp[a[i]]++;
            if(mp[a[i]]%2 != 0){
                cnt++;
                maxx = max(maxx, cnt);
            }
            else{
                cnt--;
            }
        }
        cout << maxx << nl;
    }

    return 0;
}