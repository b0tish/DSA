#include <stdio.h>

int main(){
  int a[] = {35,21,7,82,12,8};
  int n = sizeof(a)/sizeof(a[0]);
  
  printf("Before sorting:\n");
  for (int i=0;i<n;i++){
    printf("%d ",a[i]);
  }

  for (int i=0;i<n-1;i++){
    for (int j=i+1;j<n;j++){
      if (a[i] > a[j]){
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
      }
    }
  }

  printf("\nAfter sorting:\n");
  for (int i=0;i<=n-1;i++){
    printf("%d ",a[i]);
  }
  printf("\n");
  return 0;
}


