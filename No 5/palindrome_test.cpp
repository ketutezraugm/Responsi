#include <iostream>
#include <string>
using namespace std;

int main() {
    string word="hellolleh",reversed;
    
    for (int i=word.length()-1; i>=0; i--) 
        reversed += word[i];
    
    cout << "String: " << word << endl;
    
    if (reversed == word) 
        cout << word << " is a palindrome";
    else
        cout << word << " is not a palindrome";
    
    return 0;
}
