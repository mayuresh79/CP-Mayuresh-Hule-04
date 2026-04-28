#include <iostream>
#include <vector>
using namespace std;

void a(vector<int> &arr){
    int count = 0;
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] != 0){
            swap(arr[count], arr[i]);
            count++;
        }
    }
}   
int main(){
    vector<int>arr = {0, 10, 0, 5, 0, 15};

    a(arr);
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}