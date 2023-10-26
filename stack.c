#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

struct stack{
  int item[SIZE];
  int top;
}s;

void push(struct stack *s, int num){

  if (s->top == SIZE-1){
    printf("Stack Overflow\n");
  }else{
    s -> top++;
    s -> item[s->top] = num;
  }
}

void pop(struct stack *s){
  int dt;
  if (s -> top == -1){
    printf("Stack underflow\n");
  }else{
    dt = s -> item[s -> top];
    printf("Popped item:%d\n",dt);
    s -> top--;
  }
}

void display(struct stack *s){
  if (s -> top == -1){
    printf("Stack is empty\n");
  }else{
    printf("Content of the stack:\n");
    for (int i = s -> top; i >= 0; i--){
      printf("|%d|\n", s -> item[i]);
    }
  }
}

int main(){
  int num, choice;
  s.top = -1;
  printf("1.Push\n2.Pop\n3.Display\n4.Exit\n");
  while (1){
    printf("Enter the choice:");
    scanf("%d", &choice);
    switch(choice){
      case 1:
        printf("\nEnter the number you want to push:");
        scanf("%d", &num);
        push(&s, num);
        break;
      case 2:
        pop(&s);
        break;
      case 3:
        display(&s);
        break;
      case 4:
        exit(0);
    } 
  }
  return 0;
}
