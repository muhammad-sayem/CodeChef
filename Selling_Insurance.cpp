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
        double n, i, cnt = 0;
        cin >> n;

        if(n == 1) cout << 500 << endl;
        else if(n == 2) cout << 250 << endl;
        else if(n == 3) cout << 167 << endl;
        else if(n == 4) cout << 125 << endl;
        else{
            double val = (20*n)/100;        
            double ans = 100/val;

            if(ans == (int)ans) cout << int(ans) << endl;
            else cout << int(ans)+1 << endl;
        }
    }

    return 0;
}