#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    priority_queue <long long int, vector <long long int> ,greater<long long int> > pq2;
    priority_queue <long long int > pq1;
    for(int i=0;i<n;i++){
        int tmp;
        cin >> tmp;
        pq1.push(tmp);
    }
    for(int i=0;i<n;i++){
        int tmp;
        cin >> tmp;
        pq2.push(tmp);
    }
    for(int i=0;i<n;i++){
        long long int a = pq1.top();
        long long int b = pq2.top();
        long long int add = a/2;
        long long int fir=a-add;
        long long int sec=b+add;
        pq1.pop(),pq2.pop();
        pq1.push(fir);
        pq2.push(sec);
    }
    cout << abs(pq1.top()-pq2.top()) << endl;
    return 0;
}