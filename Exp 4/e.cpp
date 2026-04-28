#include <bits/stdc++.h>
using namespace std;

void leaders_problem(vector<int> &arr){
    vector<int> leaders;

    int max_right = arr[arr.size() - 1];
    leaders.push_back(max_right);

    for(int i = arr.size() - 2; i >= 0; i--){
        if(arr[i] > max_right){
            max_right = arr[i];
            leaders.push_back(max_right);
        }
    }
    
   cout << "Leaders in the array are: ";
   for(int i = leaders.size() - 1; i >= 0; i--){
       cout << leaders[i] << " ";
   }
   cout << endl;
}

int main(){
    vector<int>arr = {1,2,4,0,1};
    
    leaders_problem(arr);
    return 0;   
}