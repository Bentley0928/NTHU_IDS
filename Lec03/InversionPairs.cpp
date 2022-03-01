#include <bits/stdc++.h>
using namespace std;
int arr[200001];
long long int sort_and_inv(int f,int l){
    if(f>=l) return 0;
    int mid=(f+l)/2;
    long long int first=sort_and_inv(f,mid);
    long long int second=sort_and_inv(mid+1,l);
    int i=f;
    int j=mid+1;
    int k=0;
    long long int count = 0;
    int temp[200001];
    while(i<=mid && j<=l){
        if(arr[i]<arr[j]){
            temp[k++]=arr[i++];
        }
        else{
            temp[k++]=arr[j++];
            count += mid-i+1;
        }
    }
    while(i<=mid){
        temp[k++]=arr[i++];
    }
    while(j<=l){
        temp[k++]=arr[j++];
    }
    for(int z=f, k=0;z<=l;z++,k++){
        arr[z]=temp[k];
    }
    return count+first+second;
}
int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    long long int ans = sort_and_inv(0,n-1);
    cout << ans << endl;
    return 0;
}