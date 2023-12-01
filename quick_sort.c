#include <stdio.h>

int partition(int a[],int lb,int ub){
  int pivot = a[lb];
  int start = lb;
  int end = ub;

  while (start<end){
    while (a[start] <= pivot)
      start++;
    
    while (a[end] > pivot)
      end--;
  
    if (start < end){
      int temp = a[start];
      a[start] = a[end];
      a[end] = temp;
    }
  }

  int temp = a[lb];
  a[lb] = a[end];
  a[end] = temp;

  return end;
}

void quick_sort(int a[],int lb,int ub){
  if (lb<ub){
    int loc = partition(a,lb,ub);
    quick_sort(a,lb,loc-1);
    quick_sort(a,loc+1,ub);
  }
}

int main(){
  int a[] = {36,90,23,45,62,78,12};
  int n = sizeof(a)/sizeof(a[0]);

  printf("Before sorting:\n");
  for (int i = 0; i < n; i++) {
    printf("%d ", a[i]);
  }


  quick_sort(a,0,n-1);

  printf("\nAfter sorting:\n");
  for (int i = 0; i < n; i++) {
    printf("%d ", a[i]);
  }
  printf("\n");
  return 0;
}
