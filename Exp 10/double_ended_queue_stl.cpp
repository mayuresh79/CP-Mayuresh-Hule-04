#include <bits/stdc++.h>
using namespace std;

void display(deque<int> dq) {
    if (dq.empty()) {
        cout << "Deque is empty" << endl;
        return;
    }
    for (int x : dq) {
        cout << x << " ";
    }
    cout << endl;
}

int main() {
    deque<int> dq;
    dq.push_back(10);
    dq.push_back(20);

    dq.push_front(5);
    dq.push_front(1);

    display(dq); 

    dq.pop_front();

    dq.pop_back();

    display(dq);

    return 0;
}