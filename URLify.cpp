#include <iostream>
#include <string>

using namespace std;

string URLify(string s){
    string result;
    string token = "%20";

    for(int i = 0; i < s.length(); i++){
        char curr = s[i];
        if(curr == ' '){
            result = result + token;
        }
        else{
            result = result + curr;
        }
    }
    return result;
}

int main(){
    cout << URLify("bob says hi") << endl;
}
