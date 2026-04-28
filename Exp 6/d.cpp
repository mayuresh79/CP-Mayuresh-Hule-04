#include <bits/stdc++.h>
using namespace std;

void first_occurance(vector<int>& arr, int target){
    int low = 0, high = arr.size() - 1;
    int result = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            result = mid; 
            high = mid - 1; 
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
 
    if (result != -1) {
        cout << "First occurrence of " << target << " found at index: " << result << endl;
    } else {
        cout << "Element " << target << " not found in the array." << endl;
    }
}
int main() {
    int n, key;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    
    vector<int> arr(n);
    cout << "Enter the elements of the array (sorted): ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    sort(arr.begin(), arr.end());
    
    cout << "Enter the element to search: ";
    cin >> key;
    
    first_occurance(arr, key);
    
    return 0;
}