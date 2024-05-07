#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int *a = new int[n];
    int *b = new int[n];
    int c = 0;

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        c = 1;
        if (a[i] != -1) {
            for (int j = i + 1; j < n; j++) {
                if (a[i] == a[j]) {
                    c = c + 1;
                    a[j] = -1;
                }
            }
            b[i] = c;
        }
    }

    cout << "Output:\n";
    for (int i = 0; i < n; i++) {
        if (a[i] != -1) {
            cout << a[i] << ":" << b[i] << endl;
        }
    }

    delete[] a;
    delete[] b;

    return 0;
}
