#include <bits/stdc++.h>
using namespace std;

int main(){
    string a;
    cout << "Enter a string: ";
    cin >> a;

    cout <<"Enter string to be searched: ";
    string b;
    cin >> b;
    if(a.find(b) != string::npos){
        cout << "Found";
    }
    else{
        cout << "Not Found";
    }
}