#include <bits/stdc++.h>
using namespace std;

int main(){
    int hashSize = 10;
    list <int> _Hashtable[10];
    int arr[] = {12, 22, 32, 42};

    for (int i=0; i<4; i++){
        int index = arr[i] % hashSize;
        _Hashtable[index].push_back(arr[i]);
    }
    for(int i=0; i<4; i++){
        cout<< i << "->";
    
    for (list<int> :: iterator it = _Hashtable[i].begin(); it != _Hashtable[i].end(); it++){
        cout<< *it << "->";
    }
    cout<<endl;
}
return 0;
}