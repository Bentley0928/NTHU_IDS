#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector <vector <int> > gph(n+1);
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        gph[a].push_back(b);
        gph[b].push_back(a);
    }
    int maxx=INT_MIN;
    for(int i=1;i<=n;i++){
        int sum=0;
        bool check[501];
        for(int l=1;l<=500;l++){
            check[l]=0;
        }
        for(auto j:gph[i]){
            for(auto k:gph[j]){
                if(k!=i) check[k]=1;
            }
        }
        for(int a=1;a<n+1;a++){
            if(check[a]) sum+=a;
        }
        maxx=max(sum,maxx);
    }
    cout << maxx << endl;
    return 0;
}