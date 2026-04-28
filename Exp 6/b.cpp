
#include <bits/stdc++.h>
using namespace std;

void recursive_binary_search(int arr[], int low, int high, int key) {
    if (low > high) {
        cout << "Element not found in the array." << endl;
        return;
    }
    int mid = low + (high - low) / 2;
    if (arr[mid] == key) {
        cout << "Element found at index: " << mid << endl;
        return;
    } else if (arr[mid] < key) {
        recursive_binary_search(arr, mid + 1, high, key);
    } else {
        recursive_binary_search(arr, low, mid - 1, key);
    }
}   
int main() {
    int n, key;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter the key to search: ";
    cin >> key;
    
    recursive_binary_search(arr, 0, n - 1, key);
    
    return 0;
}
