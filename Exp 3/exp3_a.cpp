#include <iostream>
using namespace std;

void reverse_print(int n)
{
    if(n == 0)
        return;
    cout << n << " ";
    reverse_print(n - 1);
}
int main() {
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Numbers are: ";
    reverse_print(n);
    cout<<endl;
    return 0;
}