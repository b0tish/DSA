#include <stdio.h>

int product(int a,int b){
  if (b==0)
    return 0;
  return a+product(a,b-1);
}

int main(){
  int a,b;
  printf("Enter the two numbers:");
  scanf("%d %d",&a,&b);
  printf("Product:%d\n",product(a,b));
  return 0;
}
