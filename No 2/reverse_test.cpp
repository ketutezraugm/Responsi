#include <iostream>
#include <string>
using namespace std;

int main() {
    string word="hello world",reversed;
    
    for (int i=word.length()-1; i>=0; i--) 
        reversed += word[i];
        
    cout << "String: " << word << endl;
    cout << "Reversed String: " << reversed;
    
    return 0;
}
