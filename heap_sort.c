#include <stdio.h>

void max_hepify(int a[],int n,int i){
  int largest = i;
  int l = 2*i;
  int r = (2*i)+1;

  if (l< n && a[l] > a[largest]){
    largest = l;
  }

  if (r<n && a[r] > a[largest]){
    largest = r;
  }

  if (largest != i) {
    int temp = a[largest];
    a[largest] = a[i];
    a[i] = temp;

    max_hepify(a,n,largest);
  }
}


void heapsort(int a[],int n){
  for (int i=n/2;i>=0;i--)
    max_hepify(a,n,i);
  
  for (int i=n-1;i>=0;i--){
    int temp = a[0];
    a[0] = a[i];
    a[i] = temp;

    max_hepify(a,i,0);
  }
}

int main(){
  int a[] = {30,20,57,8,25,19,36,72};
  int n = sizeof(a)/sizeof(a[0]);

  heapsort(a,n);

  for (int i=0;i<n;i++){
    printf("%d\n",a[i]);
  }

  return 0;
}

