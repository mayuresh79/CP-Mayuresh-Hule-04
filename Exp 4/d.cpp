#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void rotate(vector<int> &arr){
   rotate(arr.begin(), arr.begin() + 1, arr.end());
}
int main(){
    vector<int>arr = {10, 20, 30, 40, 50};

    rotate(arr);
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;   
}

