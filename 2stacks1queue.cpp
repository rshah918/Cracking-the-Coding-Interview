#include <iostream>
#include <stack>

using namespace std;

class Queue{
    stack<int> stack1;
    stack<int> stack2;

    public:
        void enqueue(int val){
            stack2.push(val);
        }

        int dequeue(){
            //if stack1 is empty, pop everything from stack 2 and push it into stack 1
            if(stack1.empty()){
                while(!stack2.empty()){
                    stack1.push(stack2.top());
                    stack2.pop();
                }
            }
            int result = stack1.top();
            stack1.pop();
            cout << result << endl;
            return result;
        }
};

int main(){
    Queue queue = Queue();
    queue.enqueue(1);
    queue.enqueue(2);
    queue.enqueue(3);
    queue.enqueue(4);
    queue.dequeue();
    queue.dequeue();
    queue.dequeue();
    queue.dequeue();

    return 0;
}
