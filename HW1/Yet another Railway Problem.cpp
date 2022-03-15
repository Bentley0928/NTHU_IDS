#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        queue <int> station;
        queue <int> final,init;
        int t;
        cin >> t;
        for(int j=1;j<=t;j++){
            init.push(j);
        }
        for(int k=0;k<t;k++){
            int tmp;
            cin >> tmp;
            final.push(tmp);
        }
        while(!init.empty()){
            if(init.front()==final.front()){
                init.pop();
                final.pop();
                while(!station.empty() && station.front()==final.front()){
                    station.pop();
                    final.pop();
                }
            }
            else{
                station.push(init.front());
                init.pop();
            }
        }
        while(!station.empty() && station.front()==final.front()){
            station.pop();
            final.pop();
        }
        if(station.empty())cout << "YES\n";
        else{
            cout << "NO\n";
        } 
    }
    return 0;
}