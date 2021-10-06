#include <iostream>

using namespace std;

class Node{
    public:
        int value;
        Node * next;
        Node(int n){
            value = n;
            next = nullptr;
        }
};

class LinkedList{
    Node* head;
    Node* tail;
    public:
        void addNode(int n){
            Node* newNode = new Node(n);

            if(head == nullptr){
                head = newNode;
                tail = newNode;
            }
            else{
                tail->next = newNode;
                tail = newNode;
            }
        }

        void insertNode(int n, int index){
            Node* curr = head;
            int i = 0;
            while(curr != nullptr){
                if(i == index){
                    Node* newNode = new Node(n);
                    newNode->next = curr->next;
                    curr->next = newNode;
                    break;
                }
                curr = curr->next;
                i = i+1;
            }
        }

        void deleteNode(int index){
            Node* prev = head;
            Node* curr = head->next;
            int i = 0;
            while(curr != nullptr){
                if(i == index){
                    prev->next = curr->next;
                    delete curr;
                    break;
                }
                curr = prev->next;
                i = i+1;
            }
        }

        int getKthToLastNode(int k){
            Node* p1 = head;
            Node* p2 = head;
            //interate p2 k times
            for(int i = 0; i < k; i++){
                if(p2 != nullptr){
                    p2 = p2->next;
                }
            }
            //iterate both pointers until you get to the end
            while(p2 != nullptr){
                p1 = p1->next;
                p2 = p2->next;
            }
            //p1 is the kth to last Node
            return p1->value;
        }

        void displayLinkedList(){
            Node* curr = head;
            while(curr != nullptr){
                cout << curr->value << endl;
                curr = curr->next;
            }
        }
};

int main(){
    LinkedList ll;
    ll.addNode(5);
    ll.addNode(7);
    ll.addNode(8);
    ll.insertNode(6, 0);
    ll.insertNode(6, 0);
    ll.deleteNode(1);
    cout << "kth to last node is: " << ll.getKthToLastNode(3) << endl;;
    ll.displayLinkedList();

    return 0;
}
