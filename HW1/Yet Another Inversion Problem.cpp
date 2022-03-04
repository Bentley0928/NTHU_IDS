#include <bits/stdc++.h>
using namespace std;
bool cmp(int x,int y)
{
	return x > y;
}
int main(){
    int a,b,c;
    cin >> a >> b >> c;
    vector<int> A,B,C;
    for(int i=0;i<a;i++){
        int temp;
        cin >> temp;
        A.push_back(temp);
    }
    for(int i=0;i<b;i++){
        int temp;
        cin >> temp;
        B.push_back(temp);
    }
    for(int i=0;i<c;i++){
        int temp;
        cin >> temp;
        C.push_back(temp);
    }
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    sort(C.begin(),C.end());
    long long int count = 0;
    for(auto i:B){
        auto it1 = upper_bound(A.begin(),A.end(),i);
        long long int x = A.end()-it1;
        auto it2 = upper_bound(C.begin(),C.end(),i);
        long long int y = C.end()-it2;
        count += x*y;
    }
    cout << count << endl;
    return 0;
}