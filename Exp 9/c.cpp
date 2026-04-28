#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* next;
};
node* top = NULL;

void push(int x){
    node* temp = new node();
    temp->data = x;
    temp->next = top; 
    top = temp;
}
void pop(){
    if(top == NULL){
        cout << "Stack underflow" << endl;
        return;
    }
    node* temp = top;
    top = top->next;
    delete temp;
}
void display(){
    node* temp = top;
    cout << "Stack elements: ";
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main(){
    int n;
    cout << "Enter size: ";
    cin >> n;

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        push(x);
    }
    display();
}