#include <iostream>

using namespace std;

class Node{
    public:
        int data;
        Node* leftChild;
        Node* rightChild;
        Node(int val){
            data = val;
            leftChild = nullptr;
            rightChild = nullptr;
        }
        void insertLeft(int val){
            Node* newNode = new Node(val);
            if(leftChild == nullptr){
                leftChild = newNode;
            }
            else{
                newNode->leftChild = leftChild;
                leftChild = newNode;
            }
        }
        void insertRight(int val){
            Node* newNode = new Node(val);
            if(rightChild == nullptr){
                rightChild = newNode;
            }
            else{
                newNode->rightChild = rightChild;
                rightChild = newNode;
            }
        }
};

void inorderTraversal(Node* node){
    //vist left child, then the current node, then the right child
    if(node != nullptr){
        inorderTraversal(node->leftChild);
        cout << node->data << endl;
        inorderTraversal(node->rightChild);
    }

}

void preorderTraversal(Node* node){
    //vist the current node, then the left child, then the right child
    if(node != nullptr){
        cout << node->data << endl;
        preorderTraversal(node->leftChild);
        preorderTraversal(node->rightChild);
    }
}

void postorderTraversal(Node* node){
    //vist the left child, then the right child, then the current node
    if(node != nullptr){
        preorderTraversal(node->leftChild);
        preorderTraversal(node->rightChild);
        cout << node->data << endl;
    }
}

int main(){
  Node test = Node(4);
  test.insertLeft(2);
  test.insertLeft(3);
  test.insertRight(6);
  test.insertRight(5);
  inorderTraversal(&test);
  //preorderTraversal(&test);
  //postorderTraversal(&test);
  cout << test.data << test.leftChild->data << test.rightChild->data  << endl;
  return 1;
}
