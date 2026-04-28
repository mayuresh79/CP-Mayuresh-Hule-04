#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void second_largest(vector<int> &arr){
    sort(arr.begin(), arr.end());
    cout << "Second largest element is: " << arr[arr.size() - 2] << endl;
}
int main(){
    vector<int>arr = {10, 20, 5, 15, 25};
    
    second_largest(arr);
    return 0;   
}


