#include <stdio.h>

int search(int a[],int key,int l,int h){
  if (h >= l){
    int mid = l+(h-l)/2;

    if (key == a[mid])
      return mid;

    if (key < a[mid])
      return search(a,key,l,mid-1);

    return search(a,key,mid+1,h);
  }
  return -1;
}

int main(){
  int a[] = {3,4,5,6,7,8,9,10};
  int key;
  
  for (int i=0;i<sizeof(a)/sizeof(a[0]);i++){
    printf(" |%d| ",a[i]);
  }
  
  printf("\nEnter the number to be searched:");
  scanf("%d",&key);
  int index = search(a,key,0,(sizeof(a)/sizeof(a[0]))-1);

  if (index == -1)
    printf("Element not found\n");
  else
    printf("Found at index: %d\n",index);
  return 0;
}
