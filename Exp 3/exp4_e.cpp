#include <iostream>
using namespace std;

int countSubsets(int arr[], int n, int sum)
{
    if(sum == 0)
        return 1;

    if(n == 0)
        return 0;

    return countSubsets(arr, n-1, sum) +
           countSubsets(arr, n-1, sum - arr[n-1]);
}

int main()
{
    int arr[] = {1, 2, 3};
    int sum = 3;
    int n = 3;

    cout << "Number of subsets = "
         << countSubsets(arr, n, sum);

    return 0;
}
