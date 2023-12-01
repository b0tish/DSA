#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

struct cqueue{
  int item[SIZE];
  int front,rear;
}q;

void enqueue(struct cqueue *q, int num){
  if ((q->rear+1)%SIZE == q->front){
    printf("Queue Overflow\n");
  }else{
    q -> rear = (q->rear+1) % SIZE;
    q -> item[q->rear] = num;
  }
}

void dequeue(struct cqueue *q){
  if (q->rear == q->front){
    printf("Queue underflow\n");
  }else{
    q -> front = (q->front+1)%SIZE;
    int x = q -> item[q->front];
    printf("Dequeued Item: %d\n",x);
  }
}



void display(struct cqueue *q){
  if (q->rear == q->front){
    printf("Queue is empty.\n");
  } else {
    printf("Content of the queue:");
    int i = (q->front + 1) % SIZE; 
    while (i != (q->rear + 1) % SIZE) { 
      printf("|%d|", q->item[i]);
      i = (i + 1) % SIZE;
    }
    printf("\n");
  }
}

int main()
{
  int num,choice;
  q.front = SIZE-1;
  q.rear = SIZE-1;

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


