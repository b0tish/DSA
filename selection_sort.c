#include <stdio.h>

int main(){
  int a[] = {5,3,2,4,1};
  int n = sizeof(a)/sizeof(a[0]);
  for (int i=0;i<n-1;i++){
    for (int j=i+1;j<n;j++){
      if (a[i] > a[j]){
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
      }
    }
  }

  for (int i=0;i<=n-1;i++){
    printf("%d\n",a[i]);
  }
  return 0;
}


