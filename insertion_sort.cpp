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
void insertion_sort(vector<int> &arr)
{
    int size = arr.size();
    for (int i = 1; i < size - 1; i++)
    {
        int value = arr[i];
        int hole = i;
        while(hole>0 && arr[hole-1]>value)
        {
            arr[hole] = arr[hole-1];
            hole--;
        }
        arr[hole] = value;
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
    insertion_sort(arr);
    cout << "After sorting: " << endl;
    print_array(arr);
    return 0;
}