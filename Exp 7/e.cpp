#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;

   vector<int> arr = {7, 10, 4, 3, 20, 15};
    
    sort(arr.begin(),arr.end());
    cout<<"Enter the value of k: ";
    cin>>k;

    cout<<"kth smallest element is: "<<arr[k-1]<<endl;
}