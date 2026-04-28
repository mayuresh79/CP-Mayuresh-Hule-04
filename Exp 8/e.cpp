#include <bits/stdc++.h>
using namespace std;
void reverse_words(string s){
    stack<string> st;
    string word = "";
    for(int i = 0; i < s.length(); i++){
        if(s[i] == ' '){
            st.push(word);
            word = "";
        }
        else{
            word += s[i];
        }
    }
    st.push(word);
    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
}
int main(){
    string s;
    cout << "Enter a string: ";
    getline(cin, s);
    reverse_words(s);
    return 0;
}