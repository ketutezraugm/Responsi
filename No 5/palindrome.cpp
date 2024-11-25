#include <iostream>
#include <string>
using namespace std;

int main() {
    string word,reversed;
    
    cout << "Enter a string: ";
    getline(cin, word);
    
    for (int i=word.length()-1; i>=0; i--) 
        reversed += word[i];
    
    if (reversed == word) 
        cout << word << " is a palindrome";
    else
        cout << word << " is not a palindrome";
    
    return 0;
}
