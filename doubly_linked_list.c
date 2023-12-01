#include <stdio.h>
#include <stdlib.h>

struct Node{
  int data;
  struct Node *prev;
  struct Node *next;
}*head;

void insert(){  
  int new_data;
  printf("Enter the number:");
  scanf("%d",&new_data);
  struct Node *new_node = (struct Node*)malloc(sizeof(struct Node));
  new_node -> data = new_data;
  new_node -> next = NULL;
  new_node -> prev = NULL;
  if (head == NULL){
    head = new_node;
  }else{
    head -> prev = new_node;
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
  new_node -> prev = NULL;
  if (head == NULL){
    head = new_node;
  }else{
    struct Node *temp = head;
    while (temp -> next != NULL)
      temp = temp->next;
    temp -> next = new_node;
    new_node -> prev = temp;
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
  head -> prev = NULL;
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
    temp = temp -> next;
  }
  temp1 -> prev -> next = NULL;
  printf("Removed:|%d|",temp->data);
  free(temp);
}

int main(){
  head = NULL;

  int choice;
  printf("\n1)Insert\n");
  printf("2)Insert at end\n");
  printf("3)Display\n");
  printf("4)Delete\n");
  printf("5)Delete from end\n");
  printf("6)Exit\n");

  while(1){ 
    printf("\nEnter your choice:");
    scanf("%d",&choice);
    switch (choice) {
      case 1:
        insert();
        break;

      case 2:
        insert_end();
        break;

      case 3:
        display();
        break;

      case 4:
        delete();
        break;

      case 5:
        delete_end();
        break;

      case 6:
        exit(0);
        break;
    }
  }
  return 0;
}
