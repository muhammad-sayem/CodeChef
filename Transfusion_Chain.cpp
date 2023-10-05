#include<bits/stdc++.h>
#define      endl            '\n'
#define      yes             cout << "YES" << endl
#define      no              cout << "NO" << endl
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
        int a = 0, b = 0, o = 0, ab = 0; 

        while(n--){
            string s;
            cin >> s;

            if(s == "A") a++;
            else if(s == "B") b++;
            else if(s == "O") o++;
            else if(s == "AB") ab++;
        }
        
        ll ans = max({a, b, o+a, o+b, o+a+ab, o+b+ab});

        cout << ans << endl;

    }

    return 0;
}
