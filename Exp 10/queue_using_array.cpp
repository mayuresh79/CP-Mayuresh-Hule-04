#include <bits/stdc++.h>
using namespace std;

void enqueue(int arr[], int &rear, int x, int n) {
    if (rear == n - 1) {
        cout << "Queue is full\n";
        return;
    }
    rear++;
    arr[rear] = x;
}
void dequeue(int arr[], int &front, int rear) {
    if (front > rear) {
        cout << "Queue is empty\n";
        return;
    }
    front++;
}
void display(int arr[], int front, int rear) {
    if (front > rear) {
        cout << "Queue is empty\n";
        return;
    }
    for (int i = front; i <= rear; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}
int main() {

    int n = 5;
    int arr[n];
    int front = 0, rear = -1;

    enqueue(arr, rear, 10, n);
    enqueue(arr, rear, 20, n);
    dequeue(arr, front, rear);
    enqueue(arr, rear, 30, n);
    display(arr, front, rear);
}
