#include <bits/stdc++.h>
using namespace std;

void bubble_sort(vector<int> &a){
    int n = a.size();
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            if(a[j] > a[j+1]){
                swap(a[j], a[j+1]);
            }
        }
    }
}

int main(){
    vector<int> a;
    cout << "Enter the number of elements: ";
    int n;
    cin >> n;
    a.resize(n);
    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    bubble_sort(a);
    cout << "Sorted elements: ";
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";                 
    }
    cout << endl;
}