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
        string s;
        cin >> s;

        if(s == "CODETOWN") yes;
        else{
            bool flag = true;

            if(s[1] != 'A' && s[1] != 'E' &&s[1] != 'I' &&s[1] != 'O' &&s[1] != 'U'){
                flag = false;
            }

            if(s[3] != 'A' && s[3] != 'E' &&s[3] != 'I' &&s[3] != 'O' &&s[3] != 'U'){
                flag = false;
            }

            if(s[5] != 'A' && s[5] != 'E' &&s[5] != 'I' &&s[5] != 'O' &&s[5] != 'U'){
                flag = false;
            }

            // ---------------------------- // 

            if(s[0] == 'A' || s[0] == 'E' ||s[0] == 'I' ||s[0] == 'O' ||s[0] == 'U'){
                flag = false;
            }

            if(s[2] == 'A' || s[2] == 'E' ||s[2] == 'I' ||s[2] == 'O' ||s[2] == 'U'){
                flag = false;
            }

            if(s[4] == 'A' || s[4] == 'E' ||s[4] == 'I' ||s[4] == 'O' ||s[4] == 'U'){
                flag = false;
            }

            if(s[6] == 'A' || s[6] == 'E' ||s[6] == 'I' ||s[6] == 'O' ||s[6] == 'U'){
                flag = false;
            }

            if(s[7] == 'A' || s[7] == 'E' ||s[7] == 'I' ||s[7] == 'O' ||s[7] == 'U'){
                flag = false;
            }

            if(flag) yes;
            else no;

        }
    }


    return 0;
}