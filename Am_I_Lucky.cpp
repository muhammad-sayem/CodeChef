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
        ll n, x, k;
        cin >> n >> x >> k;

        ll boys = x;
        ll girls = n - x;

        ll bGrp = boys/k;
        ll gGrp = girls/k;

        ll bRem = boys%k;
        ll gRem = girls%k;

        if(bRem == 0) cout << gRem << nl;
        else if(gRem == 0) cout << bRem << nl;
        else if(bRem == 0 && gRem == 0) cout << 0 << nl;
        else cout << max(bRem, gRem) - min(bRem, gRem) << nl;
    }

    return 0;
}