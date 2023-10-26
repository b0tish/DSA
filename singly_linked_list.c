#include <stdio.h>
#include <stdlib.h>

struct Node{
  int data;
  struct Node *next;
}*head;

void insert(){  
  int new_data;
  printf("Enter the number:");
  scanf("%d",&new_data);
  struct Node *new_node = (struct Node*)malloc(sizeof(struct Node));
  new_node -> data = new_data;
  new_node -> next = NULL;
  if (head == NULL){
    head = new_node;
  }else{
    new_node -> next = head;
    head = new_node;
  }
}

void insert_end(){
  int new_data;
  printf("Enter the number:");
  scanf("%d",&new_data);
  struct Node *new_node = (struct Node*)malloc(sizeof(struct Node));
  new_node -> data = new_data;
  new_node -> next = NULL;
  if (head == NULL){
    head = new_node;
  }else{
    struct Node *temp = head;
    while (temp -> next != NULL)
      temp = temp->next;
    temp -> next = new_node;
  }
}

void insert_at_x(){
  int pos;
  int new_data;
  printf("Enter the number:");
  scanf("%d",&new_data);
  printf("Enter the pos:");
  scanf("%d",&pos);
  struct Node *new_node = (struct Node*)malloc(sizeof(struct Node));
  new_node -> data = new_data;
  if (head == NULL){
    head = new_node;
  }else{
    struct Node *temp = head;
    for (int i=0;i<pos-1;i++){
      temp = temp->next;
    }
    new_node -> next = temp -> next;
    temp -> next = new_node;
  }
}

void display(){
  if (head == NULL){
    printf("List doesnt exist.");
    return;
  }
  struct Node *temp = head;
  while (temp!= NULL){
    printf("|%d|",temp->data);
    temp = temp -> next;
  }
}

void delete(){
  if (head == NULL){
    printf("List doesnt exist.\n");
    return;
  }
  struct Node *temp = head;
  head = head -> next;
  printf("Removed:|%d|",temp->data);
  free(temp); 
}

void delete_end(){
  if (head == NULL){
    printf("List doesnt exist.\n");
    return;
  }
  struct Node *temp1;
  struct Node *temp = head;
  while (temp -> next != NULL){
    temp1 = temp;
    temp = temp -> next;
  }
  temp1 -> next = NULL;
  printf("Removed:|%d|",temp->data);
  free(temp);
}

void delete_at_x(){
  if (head == NULL){
    printf("List doesnt exist.\n");
    return;
  }
  struct Node *temp1;
  int pos;
  printf("Enter the pos:");
  scanf("%d",&pos);
    struct Node *temp = head;
  for (int i=0;i<pos;i++){
    temp1 = temp;
    temp = temp -> next;
  }
  temp1 -> next = temp -> next;
  printf("Removed:|%d|",temp->data);
  free(temp);
}

void count(){
  if (head == NULL){
    printf("List doesnt exist.\n");
    return;
  }
  int count = 0;
  struct Node *temp = head;
  while (temp!= NULL){
    count++;
    temp = temp -> next;
  }
  printf("Count:%d\n",count);
}


int main(){
  head = NULL;

  int choice;
  while(1){
    printf("\n1)Insert\n");
    printf("2)Insert at end\n");
    printf("3)Insert at x\n");
    printf("4)Display\n");
    printf("5)Delete\n");
    printf("6)Delete from end\n");
    printf("7)Delete from x\n");
    printf("8)Exit\n");
    printf("Enter your choice:");
    scanf("%d",&choice);
    switch (choice) {
      case 1:
        insert();
        break;

      case 2:
        insert_end();
        break;

      case 3:
        insert_at_x();
        break;
      case 4:
        display();
        break;
      case 5:
        delete();
        break;
      case 6:
        delete_end();
        break;
      case 7:
        delete_at_x();
        break;
      case 8:
        exit(0);
        break;
    }
  }
  return 0;
}
