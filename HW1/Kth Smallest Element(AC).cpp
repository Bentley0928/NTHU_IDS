#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin >> n >> k;
    priority_queue <long long int> pq;
    queue <long long int> buff;
    vector <long long int> nums;
    for(int i=0;i<k;i++){
        long long int tmp;
        cin >> tmp;
        pq.push(tmp);
    }
    cout << pq.top() << " ";
    for(int i=k;i<n;i++){
        int tmp;
        cin >> tmp;
        if(tmp<pq.top()){//如果比top小，換掉
            pq.pop();
            pq.push(tmp);
        }
        cout << pq.top() << " ";
    }
    cout << endl;
    return 0;
}
