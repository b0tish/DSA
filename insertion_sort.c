#include <stdio.h>

int main(){
  int a[] = {89,9,12,4,1};
  int n = sizeof(a)/sizeof(a[0]);
  
  for (int i=1;i<n;i++){
    int temp = a[i];
    int j = i-1;
    while (j>=0 && a[j]>temp){
      a[j+1] = a[j];
      j--;
    }
    a[j+1] = temp;
  }

  for (int i=0;i<=n-1;i++){
    printf("%d\n",a[i]);
  }
  return 0;
}


