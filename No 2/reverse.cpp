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

    // output the reversed string
    cout << "Reversed String: " << reversed;
    
    return 0;
}
