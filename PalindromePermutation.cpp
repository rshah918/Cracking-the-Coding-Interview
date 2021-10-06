#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

bool palindromePermutation(string s){
    unordered_map<char, int> char_count;
    int num_odd_chars = 0;
    for(int i = 0; i < s.length(); i++){
        char curr = s[i];
        //increment character count in hash table
        if(char_count.find(curr) == char_count.end()){
            char_count[curr] = 1;
        }
        else{
            char_count[curr] = char_count[curr] + 1;
        }
        //update the number of odd characters
        if(char_count[curr] % 2 != 0){
            num_odd_chars += 1;
        }
        else{
            num_odd_chars -= 1;
        }
    }
    //not a palindrome unless there is either 1 or 0 characters with an odd char_count.
    if(num_odd_chars <= 1){
        return true;
    }
    else{
        return false;
    }

}

int main(){
    cout << palindromePermutation("tactcoa") << endl;
}
