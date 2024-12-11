#include <bits/stdc++.h>
using namespace std;

void print_array(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void insertion_sort(vector<int> &arr, int n)
{
    for (int i = 1; i < n; ++i)
    {
        int value = arr[i];
        int hole = i-1;
        while(hole>=0 && arr[hole]>value)
        {
            arr[hole+1] = arr[hole];
            hole--;
        }
        arr[hole+1] = value;
    }
}

int main()
{
    vector<int> arr;
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    cout << "Before sorting: " << endl;
    print_array(arr);
    insertion_sort(arr, n);
    cout << "After sorting: " << endl;
    print_array(arr);
    return 0;
}