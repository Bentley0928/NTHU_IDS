#include <bits/stdc++.h>
using namespace std;
int n;
int Search(vector <int> a, int key){
    int f=0,l=n;
    int mid;
    while(f<=l){
        mid = (f+l)/2;
        if(a[mid]==key){
            return 1;
        }
        else if(key>=a[mid]){
            f=mid+1;
        }
        else l=mid-1;
    }
    return 0;
}
int Find(vector <int> a, int key){
    int mid;
    int f=0,l=n;
    while(f<=l){
        mid = (f+l)/2;
        if(a[mid]==key){
            return mid;
        }
        else if(key>=a[mid]){
            f=mid+1;
        }
        else l=mid-1;
    }
    return mid;
}
int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);
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
        else if(tp==3){
            int check = Find(a,key);
            if(key>=a[n-1]){
                cout << 0 << endl;
            }
            else{
                if(a[check]<=key){
                    cout << a[check+1] << endl;
                }
                else cout << a[check] << endl;
            }
        }
        else if(tp==2){
            int check = Find(a,key);
            if(key<=a[0]){
                cout << 0 << endl;
            }
            else{
                if(a[check]>=key){
                    cout << a[check-1] << endl;
                }
                else cout << a[check] << endl;
            }
        }
    }
    return 0;
}
