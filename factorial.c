#include <stdio.h>

int factorial(int n){
  if (n == 0)
    return 1;
  return n*factorial(n-1);
}

int main(){
  int n;
  printf("\n\nEnter the limit:");
  scanf("%d",&n);
  printf("Factorial:%d\n",factorial(n));
  return 0;
}
