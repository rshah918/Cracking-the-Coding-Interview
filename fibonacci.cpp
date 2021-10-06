#include <iostream>

using namespace std;

int fibonacci(int n){
    //base cases
    if(n == 1){
        return 1;
    }
    else if(n <= 0){
        return 0;
    }
    
    else{
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main(){
    //print the nth fibonacci number
    int n = 8
    cout <<  fibonacci(n) << endl;
    return 0;
}
