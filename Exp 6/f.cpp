#include <bits/stdc++.h>
using namespace std;

void peak_element(vector<int>& arr) {
    int low = 0, high = arr.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if ((mid == 0 || arr[mid] >= arr[mid - 1]) && 
            (mid == arr.size() - 1 || arr[mid] >= arr[mid + 1])) {
            cout << "Peak element found at index: " << mid << " with value: " << arr[mid] << endl;
            return;
        } else if (mid > 0 && arr[mid] < arr[mid - 1]) {
            high = mid - 1; 
        } else {
            low = mid + 1; 
        }
    }

    cout << "No peak element found." << endl;
}
int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    
    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    peak_element(arr);
    
    return 0;
}