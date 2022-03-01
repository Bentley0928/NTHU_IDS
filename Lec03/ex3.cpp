#include <bits/stdc++.h>
using namespace std;
int num[10000010];
int a[10000010];
int b[10000010];
int n;
long long int ans;

void merge(int s,int m,int e){
    int i,j;
    for(i=s;i<=m;++i)a[i] = num[i];
    for(j=m+1;j<=e;++j)b[j] = num[j];
    for(i=s,j=m+1;i<=m&&j<=e;){
        if(a[i]<=b[j])num[s++] = a[i++];
        else {
            num[s++] = b[j++];
            ans += m-i+1;
        }
    }
    while(i<=m) num[s++] = a[i++];
    while(j<=e) num[s++] = b[j++];
}

void mergeSort(int s,int e){
    if(s>=e)return ;
    int m = (s+e)/2;
    mergeSort(s,m);
    mergeSort(m+1,e);
    merge(s,m,e);
}

int main(){
    int i;
    while(scanf("%d",&n)!=EOF){
        for(i=0;i<n;++i){
            scanf("%d",&num[i]);
        }
        ans = 0;
        mergeSort(0,n-1);
        printf("%lld\n",ans);
    }
}