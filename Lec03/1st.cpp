#include <bits/stdc++.h>
using namespace std;
int main(){
    int n=0;
    cin >> n;
    vector<int> arr;
    for(auto i = 0;i<n;i++){
        int a;
        cin >> a;
        arr.push_back(a);
    }
    int count = 0;
    for(int i=0;i<n;i++){
        for(int j = i+1;j<n;j++){
            if(arr[i]>arr[j]) count++;
        }
    }
    cout << count << endl;
    return 0;
}