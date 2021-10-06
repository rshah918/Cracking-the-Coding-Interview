#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

bool uniqueChar(string s){
    unordered_map<char,bool> char_map;
    for(int i = 0; i < s.length(); i++){
        char curr = s[i];
        //do a hash lookup
        if(char_map.find(curr) != char_map.end()){
            return false;
        }
        //add char to hash table
        char_map[curr] = true;
    }
    return true;
}

int main(){


    cout << uniqueChar("helo") << endl;
}
