#include <bits/stdc++.h>
using namespace std;

int main(){
    int hashSize = 10;
    int _Hashtable[10];
   
    for(int i=0; i<10; i++){
        _Hashtable[i] = -1;
    }
    int arr[] = {12, 22, 32, 42};
    for (int i=0; i<4; i++){
        int index = arr[i] % hashSize;
        while(_Hashtable[index] != -1){
            index = (index + 1) % hashSize;
        }
        _Hashtable[index] = arr[i];
    }
    for(int i=0; i<10; i++){
        cout<< i << "->";
        if(_Hashtable[i] != -1){
            cout<< _Hashtable[i] << "->";
        }
        cout<<endl;
    }
}