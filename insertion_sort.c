#include <stdio.h>

int main(){
  int a[] = {65,72,55,23,90,13};
  int n = sizeof(a)/sizeof(a[0]);

  printf("Before sorting:\n");
  for (int i=0;i<n;i++){
    printf("%d ",a[i]);
  }

  
  for (int i=1;i<n;i++){
    int temp = a[i];
    int j = i-1;
    while (j>=0 && a[j]>temp){
      a[j+1] = a[j];
      j--;
    }
    a[j+1] = temp;
  }

  printf("\nAfter sorting:\n");
  for (int i=0;i<=n-1;i++){
    printf("%d ",a[i]);
  }
  printf("\n");
  return 0;
}


