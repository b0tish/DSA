#include <stdio.h>

void towerofhanoi(int n,char source,char target,char aux){
  if (n==0)
    return;
  towerofhanoi(n-1,source,aux,target);
  printf("Move disk %d from %c to %c\n",n,source,target);
  towerofhanoi(n-1,aux,target,source);
}


int main(){
  int n;
  printf("Enter the number of disks:");
  scanf("%d",&n);
  towerofhanoi(n,'A','C','B');
  return 0;
}
