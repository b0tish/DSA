#include <iostream>
#define SIZE 5

using namespace std;

class stack {
int item[SIZE];
int top = -1;

  public:
    void push(int num){
      if (top == SIZE -1){
        cout << "Stack Overflow" << endl;
      }else{
        top++;
        item[top] = num;
      }
    }

    void pop(){
      int dt;
      if (top == -1){
        cout << "Stack Underflow." << endl;
      } else{
        dt = item[top];
        cout << "Poppped item:" << dt << endl;
        top--;
      }
    }

    void display(){
      if (top == -1) {
        cout << "Stack is empty."  << endl;
      }else{
        cout << "Content of stack:" << endl;
        for (int i = top; i >=0; i--) {
          cout << "|" << item[i] << "|" << endl;
        }
      }
    }
};

int main()
{
  stack s;
  int num,choice;

  cout << "***** Stack operation *****" << endl;
  cout << "1.Push\n2.Pop\n3.Display\n4.Exit" << endl;
  cout << "===== Made by Saugat Maharjan =====" << endl;
  while (1)
  {
    cout << "Enter your choice:";
    cin >> choice;
    switch (choice) {
      case 1:
        cout << "Enter the number you want to push:";
        cin >> num;
        s.push(num);
        break;

      case 2:
        s.pop();
        break;

      case 3:
        s.display();
        break;

      case 4:
        exit(0);
    }
  }
  return 0;
}
