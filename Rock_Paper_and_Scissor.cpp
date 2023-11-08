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
        ll n, i, c1 = 0, c2 = 0;
        cin >> n;

        string s1;
        string s2;

        cin >> s1;
        cin >> s2;

        for(i=0; i<s1.size(); i++){
            if(s1[i] == 'R' && s2[i] == 'S') c1++;
            else if(s1[i] == 'S' && s2[i] == 'P') c1++;
            else if(s1[i] == 'P' && s2[i] == 'R') c1++;

            else if(s1[i] == 'S' && s2[i] == 'R') c2++;
            else if(s1[i] == 'P' && s2[i] == 'S') c2++;
            else if(s1[i] == 'R' && s2[i] == 'P') c2++;
        }

        if(c1 > c2) cout << 0 << endl;
        else if(c1 == c2) cout << 1 << endl;
        else{
            ll cnt = 0;

            while(1){
                c1++;
                c2--;
                cnt++;
                if(c1 > c2) break;
            }

            cout << cnt << endl;
        }
    }

    return 0;
}