#include <iostream>
#include <string>
using namespace std;

int main() {
    // variables
    string word,reversed;

    // input
    cout << "Enter a string: ";
    getline(cin, word);

    // reverse the string
    for (int i=word.length()-1; i>=0; i--) 
        reversed += word[i];

    // check for palindrome
    if (reversed == word) 
        cout << word << " is a palindrome";
    else
        cout << word << " is not a palindrome";
    
    return 0;
}
