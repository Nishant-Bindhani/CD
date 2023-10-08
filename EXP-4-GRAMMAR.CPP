#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main() {
    int numRules;
    cout << "Enter the number of grammar rules: ";
    cin >> numRules;

    string a[numRules]; // Use an array of strings to store grammar rules

    cout << "Enter the grammar rules:" << endl;
    for (int i = 0; i < numRules; i++) {
        cin >> a[i];
    }

    char b[10];
    int noa = 0, nob = 0;
    char str[10] = { "AB" };

    cout << "\nThe grammar is" << endl;
    for (int i = 0; i < numRules; i++) {
        cout << a[i] << endl;
    }

    cout << "\nEnter the string: ";
    cin >> b;

    for (int i = 0; i < strlen(b); i++) {
        char temp = b[i];
        if ((temp != 'a') && (temp != 'b')) {
            cout << "\nSTRING DOES NOT BELONG TO GRAMMAR" << endl;
            return 0;
        }
    }

    for (int i = 0; i < strlen(b); i++) {
        if (b[i] == 'a')
            noa++;
        else if (b[i] == 'b')
            nob++;
    }

    cout << "S->" << str;

    for (int i = 0; i < noa; i++) {
        if (i < noa - 1) {
            str[i] = 'a';
            str[i + 1] = 'A';
            str[i + 2] = 'B';
        }
        else {
            str[i] = 'a';
            str[i + 1] = 'B';
        }
        cout << "->" << str;

        for (int j = 0; j <= i; j++) {
            if (b[j] != str[j]) {
                cout << "\nSTRING DOES NOT BELONG TO GRAMMAR" << endl;
                return 0;
            }
        }
    }

    for (int i = noa; i < noa + nob; i++) {
        if (i < noa + nob - 1) {
            str[i] = 'b';
            str[i + 1] = 'B';
        }
        else {
            str[i] = 'b';
        }
        cout << "->" << str;
    }

    if (strcmp(b, str) == 0)
        cout << "\nSTRING BELONGS TO GRAMMAR" << endl;
    else
        cout << "\nSTRING DOES NOT BELONG TO GRAMMAR" << endl;

    return 0;
}
