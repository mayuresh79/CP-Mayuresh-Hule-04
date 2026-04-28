#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    int arr[n];
    int top = -1;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if (top < n - 1) {
            top++;
            arr[top] = x;
        } else {
            cout << "Stack overflow" << endl;
        }
    }

    cout << "Stack elements: ";
    while (top >= 0) {
        cout << arr[top] << " ";
        top--;
    }

    cout << endl;
}