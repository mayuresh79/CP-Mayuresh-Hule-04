#include <bits/stdc++.h>
using namespace std;
int main(){
    string a = "samarth";

    for(int i = 0; i < a.length(); i++){
        for(int j = i + 1; j < a.length(); j++){
            if(a[i] == a[j]){
                cout << "Duplicate character: " << a[i]<<endl <<"At index: "<<i<< endl;
            }
        }
    }
    return 0;
}
 
