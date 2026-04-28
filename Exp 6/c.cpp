#include <bits/stdc++.h>
using namespace std;

int rbs(vector<int>& arr, int low, int high, int key) {
    if (low > high) {
        return -1;
    }
    int mid = low + (high - low) / 2;
    if (arr[mid] == key) {
        cout << "Found " << key << " at index: " << mid << endl;
        int c = arr[mid] * 3;
        cout << "After tripling the element: " << c << endl;
        return rbs(arr, 0, arr.size() - 1, c);
    } else if (arr[mid] < key) {
        return rbs(arr, mid + 1, high, key);
    } else {
        return rbs(arr, low, mid - 1, key);
    }
}

int main() {
    int n, key;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
   sort (arr.begin(), arr.end());
    cout << "Enter the key to search: ";
    cin >> key;
    
    int result = rbs(arr, 0, n - 1, key);
    if (result == -1) {
        cout << "No more occurrences found." << endl;
    }
    
    return 0;
}