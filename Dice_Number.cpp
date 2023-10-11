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
        int a, b, c, d, e, f;
        cin >> a >> b >> c >> d >> e >> f;

        string s1;
        string s2;

        s1 += a+'0';
        s1 += b+'0';
        s1 += c+'0';

        s2 += d+'0';
        s2 += e+'0';
        s2 += f+'0';

        sort(s1.begin(), s1.end());
        reverse(s1.begin(), s1.end());

        sort(s2.begin(), s2.end());
        reverse(s2.begin(), s2.end());

        int val1 = stoi(s1);
        int val2 = stoi(s2);

        if(val1 > val2) cout << "Alice" << endl; 
        else if(val1 < val2) cout << "Bob" << endl; 
        else cout << "Tie" << endl;

    }

    return 0;
}