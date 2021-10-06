#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

bool checkPermutations(string s1, string s2){
    //length must be same
    if(s1.length() != s2.length()){
        return false;
    }
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    
    if(s1 == s2){
        return true;
    }
    else{
        return false;
    }


}

int main(){

    cout << checkPermutations("string", "gnirst") << endl;
    return 0;
}
