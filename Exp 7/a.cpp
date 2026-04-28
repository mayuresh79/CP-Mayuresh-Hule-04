#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> a;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    a.resize(n);
    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    cout << "Sorted elements: ";
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}