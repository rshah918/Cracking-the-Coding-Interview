#include <iostream>

using namespace std;

class Node{
  public:
    int data;
    Node * next;
  public:
    Node(int val){
      data = val;
      next = NULL;
  }
};
class Stack{
  Node * top;
  public:
    Stack(){
      top = NULL;
    }
    void push(int val){
        Node* newNode = new Node(val);
        if(top == nullptr){
            top = newNode;
        }
        else{
            newNode->next = top;
            top = newNode;
        }
    }
    void show(){
        Node* curr = top;
        while(curr != nullptr){
            cout << curr->data << endl;
            curr = curr->next;
        }
    }
    int pop(){
        Node* curr = top;
        top = top->next;
        return curr->data;
    }
};


int main(){
  Stack teststack = Stack();
  teststack.push(1);
  teststack.push(2);
  teststack.push(3);
  teststack.push(4);
  //teststack.show();
  cout << teststack.pop() << endl;
  cout << teststack.pop() << endl;
  cout << teststack.pop() << endl;
  cout << teststack.pop() << endl;

}
