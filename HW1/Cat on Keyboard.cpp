#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string input;
        cin >> input;
        string buff,ans="";
        bool pla=0;
        for(auto i:input){
            if(i=='['){
                if(pla){
                    ans=buff+ans;
                }
                else ans=ans+buff;
                buff.clear();
                pla=1;
            }
            else if(i==']'){
                if(pla){
                    ans=buff+ans;
                }
                else ans=ans+buff;
                buff.clear();
                pla=0;
            }
            else
                buff.push_back(i);
        }
        if(pla){
            ans=buff+ans;
        }
        else ans=ans+buff;
        cout << ans << endl;
    }
    return 0;
}