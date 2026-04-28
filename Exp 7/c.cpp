using namespace std;
#include <bits/stdc++.h>

void insertion_sort(vector<int> &a){
    int n = a.size();
    for(int i = 1; i < n; i++){
        int key = a[i];

        int j = i - 1;
        
        while(j >= 0 && a[j] > key){
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
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
    insertion_sort(a);
    cout << "Sorted elements: ";
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}