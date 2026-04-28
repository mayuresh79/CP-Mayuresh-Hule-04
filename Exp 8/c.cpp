#include <bits/stdc++.h>
using namespace std;

int main(){
    string a = "abc";
    string b = "bca";

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    if(a == b){
        cout << "Anagrams";
    }
    else{
        cout << "Not Anagrams";
    }
}