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
  int a[] = {36,10,45,20,82,7,68,25};
  int n = sizeof(a)/sizeof(a[0]);

  quick_sort(a,0,n-1);

  for (int i=0;i<n;i++){
    printf("%d\n",a[i]);
  }

  return 0;
}
