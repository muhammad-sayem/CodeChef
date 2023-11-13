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

ll getSum(ll n){
    return (n*(n+1))/2;
}

int main()
{
    fastIO;

    int test;
    cin >> test;

    while(test--){
        ll n, m, i;
        cin >> n >> m;
        ll a[m+5];
        ll totalSum = getSum(n);
        map<ll, bool> mp;

        for(i=0; i<m; i++){
            cin >> a[i];
            mp[a[i]] = true;
        }

        ll sum = 0;

        for(auto it = mp.begin(); it != mp.end(); it++){
            if(it->second){
                sum += it->first;
            }
        }
        cout << totalSum - sum << endl;

        // for(auto it = mp.begin(); it != mp.end(); it++){
        //     if(it->second) cout << it->first << endl;
        // }
    }

    return 0;
}