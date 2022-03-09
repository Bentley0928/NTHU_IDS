#include <bits/stdc++.h>
using namespace std;
long long int cal(vector <long long int> &nums,int f, int l,int k){
    priority_queue <long long int, vector <long long int>, greater <long long int>> pq;
    for(int i=0;i<=l;i++){
        pq.push(nums[i]);
    }
    for(int i=0;i<k-1;i++){
        pq.pop();
    }
    return pq.top();
}
int main(){
    int n,k;
    cin >> n >> k;
    
    vector <long long int> nums;
    for(int i=0;i<n;i++){
        long long int tmp;
        cin >> tmp;
        nums.push_back(tmp);
    }
    for(int i=k-1;i<n;i++){
        cout << cal(nums, 0, i,k) << " ";
    }
    cout << endl;
    return 0;
}
