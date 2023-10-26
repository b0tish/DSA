#include <stdio.h>
#include <stdlib.h>

int main(){
  int array[] = {45,23,12,78,20,95};
  int number;

  printf("Enter the number to be searched: ");
  scanf("%d",&number);
  for (int i=0;i<=sizeof(array)/sizeof(array[0]);i++){
    if (array[i] == number){
      printf("Found at index: %d\n",i+1);
      exit(0);
    }
  }
  printf("Element not found.\n");
}
