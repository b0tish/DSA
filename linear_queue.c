#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

struct queue{
  int item[SIZE];
  int front,rear;
}q;

void enqueue(struct queue *q, int num){
  if (q -> rear == SIZE-1){
    printf("Queue Overflow\n");
  }else{
    q -> rear++;
    q -> item[q->rear] = num;
  }
}

void dequeue(struct queue *q){
  if (q->rear < q->front){
    printf("Queue underflow\n");
  }else{
    int x = q -> item[q->front];
    printf("Dequeued Item: %d\n",x);
    q -> front++;
  }
}


void display(struct queue *q){
  if (q->rear < q->front){
    printf("Queue is empty.\n");
  }else{
    printf("Content of the queue:");
    for (int i=q->front;i<=q->rear;i++){
      printf("|%d|",q->item[i]);
    }
    printf("\n");
  }
}

int main()
{
  int num,choice;
  q.front = 0;
  q.rear = -1;

  printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit");
  while (1)
  {
    printf("\nEnter your choice:");
    scanf("%d",&choice);
    switch (choice) {
      case 1:
        printf("\nEnter the number you want to enqueue:");
        scanf("%d",&num);
        enqueue(&q,num);
        break;
      case 2:
        dequeue(&q);
        break;
      case 3:
        display(&q);
        break;
      case 4:
        exit(0);
    }
  }
  return 0;
}


