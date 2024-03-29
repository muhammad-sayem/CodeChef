
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
        ll n, i;
        cin >> n;
        ll a[n+5];
        set<ll> s;

        for(i=0; i<n; i++){
            cin >> a[i];
            s.insert(a[i]);
        }

        int cnt = 0, sum = 0;

        for(auto it = s.rbegin(); ; it++){
            sum += *it;
            cnt++;
            if(cnt == 2) break;
        }
        cout << sum << endl;
    }

    return 0;
}
// ---------------------------------------------------------------------- //

/*
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
        ll n, i;
        cin >> n;
        ll a[n+5];

        for(i=0; i<n; i++){
            cin >> a[i];
        }
        sort(a, a+n);

        int cnt = 0, sum = a[n-1];

        for(i=n-2; i>=0; i--){
            if(a[i] != a[n-1]){
                sum += a[i];
                break;
            }
        }
        cout << sum << endl;
    }

    return 0;
}
*/