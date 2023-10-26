#include <stdio.h>

int search(int a[],int key,int l,int h){
  if (h >= l){
    int mid = (l+h)/2;

    if (key == a[mid])
      return mid+1;

    if (key < a[mid])
      return search(a,key,l,mid-1);

    return search(a,key,mid+1,h);
  }
  return -1;
}

int main(){
  int a[] = {10,25,30,41,52,60,65,78,80,93};
  int key;
  printf("Enter the number to be searched:");
  scanf("%d",&key);
  int index = search(a,key,0,(sizeof(a)/sizeof(a[0]))-1);

  if (index == -1)
    printf("Element not found\n");
  else
    printf("Found at index: %d\n",index);
  return 0;
}
