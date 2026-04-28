#include <bits/stdc++.h>
using namespace std;

void intersection(vector<int> &arr1, vector<int> &arr2)
{
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());
    int n = arr1.size();
    int m = arr2.size();

    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (arr1[i] == arr2[j])
        {
            cout << arr1[i] << " ";
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
}
int main()
{
    vector<int> arr1 = {1, 2, 2, 4, 5, 6};
    vector<int> arr2 = {2, 3, 5, 7};

    cout << "Intersection of the two arrays is: ";
    intersection(arr1, arr2);
    cout << endl;

    return 0;
}

