#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    cin.ignore();

    while(test--){
        string s1, s2;
        cin >> s1 >> s2;
        int i, j;
        
        bool flag = false;

        for(i=0; i<s1.size(); i++){
            for(j=0; j<s2.size(); j++){
                if(s1[i] == s2[j]){
                  flag = true;
                  break;
                }
            }
        }

        if(flag) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
  
    return 0;
}