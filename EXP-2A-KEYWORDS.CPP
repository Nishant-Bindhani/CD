#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
    // Define a set of C++ keywords
    set<string> cppKeywords = {
        "auto", "break", "case", "char", "const", "continue", "default",
        "do", "double", "else", "enum", "extern", "float", "for", "goto",
        "if", "int", "long", "register", "return", "short", "signed", "sizeof",
        "static", "struct", "switch", "typedef", "union", "unsigned", "void",
        "volatile", "while"
    };

    string userInput;

    cout << "Enter a string: ";
    getline(cin, userInput);

    bool containsKeyword = false;

    // Check if any C++ keyword is present in the input string
    for (const string& keyword : cppKeywords) {
        if (userInput.find(keyword) != string::npos) {
            containsKeyword = true;
            cout << "The String contains the  keyword: " << keyword << endl;
        }
    }

    if (!containsKeyword) {
        cout << "The input does not contain keywords." << endl;
    }

    return 0;
}
