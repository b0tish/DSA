#include <stdio.h>
#include <stdlib.h>

int main(){
  int array[] = {56,21,34,79,1,68};
  int number;

  for (int i=0;i<sizeof(array)/sizeof(array[0]);i++){
    printf("|%d|\t",array[i]);
  }

  printf("\nEnter the number to be searched: ");
  scanf("%d",&number);
  for (int i=0;i<=sizeof(array)/sizeof(array[0]);i++){
    if (array[i] == number){
      printf("Found at index: %d\n",i+1);
      exit(0);
    }
  }
  printf("Element not found.\n");
}
