#include <bits/stdc++.h>
using namespace std;
int sort_and_count(int a[], int l, int r) {
  if (l == r) {
    return 0; 
  } else {
    int mid = (l+r)/2;
    int first = sort_and_count(a, l, mid);
    int second = sort_and_count(a, mid+1, r);

    int i=l;
    int j=mid+1;
    int k=0;
    int output[r-l+1];
    int inversion=0;

    while (i <= mid && j <= r) {
       if (a[i] <= a[j]) {
         output[k++] = a[i++];
       } else {
         output[k++] = a[j++];
         inversion += (mid-i)+1;
       }
    }
    while (i <= mid) {
       output[k++] = a[i++];
    }
    while (j <= r) {
       output[k++] = a[j++];
    }

    k=0;
    for (int i = l; i <= r; i++) {
      a[i] = output[k++];
    }
    return inversion + first + second;
  }
}

int main(int argc, const char *argv[])
{
  int a[200001];
  int n;
  cin >> n;
  for(int i=0;i<n;i++){
      cin >> a[i];
  }
  int in = sort_and_count(a, 0, n-1);
  printf("%d\n", in);
  return 0;
}