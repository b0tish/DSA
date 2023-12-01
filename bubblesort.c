#include <stdio.h>

int main(){
  int a[] = {25,6,4,2,1,77,9};
  int n = sizeof(a)/sizeof(a[0]);

  printf("Before sorting:\n");
  for (int i=0;i<n;i++){
    printf("%d ",a[i]);
  }

  for (int i=0;i<n-1;i++){
    for (int j=0;j<n-1-i;j++){
      if (a[j] > a[j+1]){
        int temp = a[j];
        a[j] = a[j+1];
        a[j+1] = temp;
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

