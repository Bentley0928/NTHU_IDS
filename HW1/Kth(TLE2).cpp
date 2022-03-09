#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin >> n >> k;
    priority_queue <long long int, vector <long long int>, greater <long long int>> pq;
    queue <long long int> buff;
    vector <long long int> nums;
    for(int i=0;i<k-1;i++){
        long long int tmp;
        cin >> tmp;
        pq.push(tmp);
    }
    for(int i=k-1;i<n;i++){
        int tmp;
        cin >> tmp;
        pq.push(tmp);
        for(int j=0;j<k-1;j++){
            buff.push(pq.top());
            pq.pop();
        }
        cout << pq.top() << " ";
        while(!buff.empty()){
            pq.push(buff.front());
            buff.pop();
        }
    }
    return 0;
}
