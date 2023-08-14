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
        string str;
        cin >> str;
        int i;

        for(i=0; i<str.size()-4; i++){
            if(str[i] == 'p' && str[i+1] == 'a' && str[i+2] == 'r' && str[i+3] == 't' && str[i+4] == 'y'){
                str[i] = 'p';
                str[i+1] = 'a';
                str[i+2] = 'w';
                str[i+3] = 'r';
                str[i+4] = 'i';
            }

        } 
        cout << str << endl;
    }

    return 0;
}