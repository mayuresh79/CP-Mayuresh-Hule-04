#include <bits/stdc++.h>
using namespace std;

void findTriplets(vector<int> &v) {
    int n = v.size();
    
    sort(v.begin(), v.end());  

    for (int i = 0; i < n - 2; i++) {
        int left = i + 1;
        int right = n - 1;
        
        while (left < right) {
            int sum = v[i] + v[left] + v[right];
            if (sum == 0) {
                cout << v[i] << " " << v[left] << " " << v[right] << endl;
                left++;
                right--;
            }
            else if (sum < 0) {
                left++;
            }
            else {
                right--;
            }
        }
    }
}


int main() {
    vector<int> v = {-1 , 0, 1, 2, -1, -4};
    
    findTriplets(v);
    
    return 0;
}