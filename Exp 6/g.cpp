#include <bits/stdc++.h>
using namespace std;

void two_pointers(vector<int>& arr, int target) {
    int left = 0, right = arr.size() - 1;

    while (left < right) {
        int sum = arr[left] + arr[right];

        if (sum == target) {
            cout << "Pair found: (" << arr[left] << ", " << arr[right] << ")" << endl;
            return;
        } else if (sum < target) {
            left++;
        } else {
            right--;
        }
    }

    cout << "No pair found that sums to " << target << "." << endl;
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
    
    sort(arr.begin(), arr.end());
    
    cout << "Enter the target sum: ";
    cin >> key;
    
    two_pointers(arr, key);
    
    return 0;
}