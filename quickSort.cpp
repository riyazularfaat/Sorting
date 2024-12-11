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
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
int partition(vector<int> &arr, int low, int high)
{
    int i = low - 1;
    int pivot = arr[high];
    for (int j = low; j < high; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}
void quick_sort(vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        int j = partition(arr, low, high);
        quick_sort(arr, low, j-1);
        quick_sort(arr, j + 1, high);
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
    
    quick_sort(arr, 0, n - 1);
    print_array(arr);
    return 0;
}