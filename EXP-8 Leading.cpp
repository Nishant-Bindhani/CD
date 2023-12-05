#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char a[10], b[10];
    int pos1, pos2, len1, len2, i;
    cout<<"Nishant Bindhani IT-B-102";
    cout << "\nEnter the first string: ";
    cin >> a;
    len1 = strlen(a);

    for (i = 1; i < len1; i++) {
        if ((a[i] > 64 && a[i] < 92) && (a[i + 1] > 64 && a[i + 1] < 92)) {
            cout << "\n\nTwo consecutive non-terminals not allowed";
        }
    }

f:
    cout << "\nEnter the second string: ";
    cin >> b;
    len2 = strlen(b);

    for (i = 1; i < len2; i++) {
        if (b[i] > 64 && b[i] < 92) {
            cout << "\nSecond string should be terminals" << endl;

        }
    }

    len1 = strlen(a);

    for (i = 0; i < len1; i++) {
        if (a[i] == '/')
            pos1 = i;
    }

    if (a[3] > 96 && a[3] < 123)
        cout << "\nLeading of " << a[0] << " = " << a[3] << endl;
    else if (a[3] > 64 && a[3] < 92) {
        for (i = 0; i < len2; i++) {
            if (b[i] == '/')
                pos2 = i;
        }
        if (b[3] > 96 && b[3] < 123)
            cout << "\nLeading of " << a[0] << " = " << b[3] << endl;
        else if (b[pos2 + 1] > 64 && b[pos2 + 1] < 123)
            cout << "\nLeading of " << a[0] << " = " << b[pos2 + 1] << endl;
    }

    if (a[pos1 + 1] > 96 && a[pos1 + 1] < 123)
        cout << "\nLeading of " << a[0] << " = " << a[pos1 + 1] << endl;
    else if (a[pos1 + 1] > 64 && a[pos1 + 1] < 92) {
        for (i = 0; i < len2; i++) {
            if (b[i] == '/')
                pos2 = i;
        }
        if (b[3] > 96 && b[3] < 123)
            cout << "\nLeading of " << a[0] << " = " << b[3] << endl;
    }

    if (b[pos2 + 1] > 96 && b[pos2 + 1] < 123)
        cout << "\nLeading of " << a[0] << " = " << b[pos2 + 1] << endl;

    return 0;
}
/*Nishant Bindhani IT-B-102
Enter the first string: A->aB/bD
Enter the second string: B->cd
Leading of A = a

Leading of A = b*/