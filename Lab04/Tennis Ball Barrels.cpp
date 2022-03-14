#include <bits/stdc++.h>
using namespace std;
int main(){
    int n=0;
    cin >> n;
    int t;
    vector <list<int>> lis(21);
    cin >> t;
    for(int z=0;z<t;z++){
        int l,i,j,k=0;
        cin >> l;
        if(l==0){
            cin >> i >> j >> k;
            if(j==0){
                lis[k].push_front(i);
            }
            else{
                lis[k].push_back(i);
            }
        }
        else{
            cin >> i >> k;
            if(i==0){
                cout << lis[k].front() << endl;
                lis[k].pop_front();
            }
            else{
                cout << lis[k].back() << endl;
                lis[k].pop_back();
            }
        }
    }
    return 0;
}