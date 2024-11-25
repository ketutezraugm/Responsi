#include <iostream>
#include <string>
using namespace std;

int main() {
    // variables
    string word="hello world",reversed;

    // reverse the string
    for (int i=word.length()-1; i>=0; i--) 
        reversed += word[i];

    // output the original and reversed string
    cout << "String: " << word << endl;
    cout << "Reversed String: " << reversed;
    
    return 0;
}
