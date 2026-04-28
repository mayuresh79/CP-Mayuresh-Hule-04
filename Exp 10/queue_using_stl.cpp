#include <bits/stdc++.h> 
using namespace std;

void display(queue<int> q) {
    if (q.empty()) {
        cout << "Queue is empty\n";
        return;
    }
    
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << "\n";
}

int main() {
   
    queue<int> q;

    q.push(10);
    q.push(20);
  
        q.pop();

    q.push(30);

    display(q);

    return 0;
}