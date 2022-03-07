#include <bits/stdc++.h>
using namespace std;
int n;
int main(){
    cin >> n;
    vector <int> a;
    for(int i=0;i<n;i++){
        int temp;
        cin >> temp;
        a.push_back(temp);
    }
    sort(a.begin(),a.end());
    int m;
    cin >> m;
    for(int i=0;i<m;i++){
        int tp,key;
        cin >> tp >> key;
        if(tp==1){
            //cout << Search(a,key) << endl;
            if (binary_search(a.begin(), a.end(), key)) {
            cout << 1 << '\n';
            }
            else {
                cout << "0\n";
            }
        }
        else if(tp==2){
            auto it = lower_bound(a.begin(), a.end(), key);
            if(it==a.begin()) cout << 0 << endl;
            else cout << *prev(it) << endl;
        }
        else if(tp==3){
            auto it = upper_bound(a.begin(), a.end(), key);
            if(it == a.end()) cout << 0 << endl;
            else cout << *it << endl;
        }

    }
    return 0;
}