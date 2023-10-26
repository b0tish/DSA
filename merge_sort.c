#include <stdio.h>


void merge(int a[],int l,int m,int h){
  int i,j,k,temp[100];
  i=l;
  j=m;
  k=l;

  while (i<=m && j<=h){
    if (a[i] < a[j])
      temp[k++] = a[i++];
    else
      temp[k++] = a[j++];
  }

  while (i<=m)
    temp[k++] = a[i++];
  
  while (j<=h)
      temp[k++] = a[j++];

  for (i=l;i<=h;i++){
      a[i] = temp[i];
    }  
}


void merge_sort(int a[],int l,int h){
  int m;
  if (l<h){
    m = (l+h)/2;
    merge_sort(a,l,m);
    merge_sort(a,m+1,h);
    merge(a,l,m+1,h);
  }
}



int main(){
  int a[] = {45,30,11,74,55,92,20,84,66,15,8};
  int n = sizeof(a)/sizeof(a[0]);

  merge_sort(a,0,n);

  for (int i=0;i<n;i++){
    printf("%d\n",a[i]);
  }

  return 0;
}

