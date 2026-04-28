#include <iostream>
#include <vector>
using namespace std;

bool isSorted(vector<int> &arr){
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] > arr[i + 1]){
            return false;
        }
    }
    return true;
}
int main(){
    vector<int>arr = {10, 5, 30, 40, 50};
    if(isSorted(arr)){
        cout << "The array is sorted." << endl;
    } else {
        cout << "The array is not sorted." << endl;
    }
    return 0;   
}