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
void merge(vector<int> &arr, vector<int> &left_arr, vector<int> &right_arr)
{
    int n1 = left_arr.size();
    int n2 = right_arr.size();
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2)
    {
        if (left_arr[i] <= right_arr[j])
        {
            arr[k] = left_arr[i];
            i++;
        }
        else
        {
            arr[k] = right_arr[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = left_arr[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = right_arr[j];
        j++;
        k++;
    }
}
void merge_sort(vector<int> &arr)
{
    int size = arr.size();
    int mid = size / 2;
    if (size < 2)
    {
        return;
    }
    vector<int> left_arr;
    vector<int> right_arr;
    for (int i = 0; i < mid; i++)
    {
        left_arr.push_back(arr[i]);
    }
    for (int i = mid; i < size; i++)
    {
        right_arr.push_back(arr[i]);
    }
    merge_sort(left_arr);
    merge_sort(right_arr);
    merge(arr, left_arr, right_arr);
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
    merge_sort(arr);
    cout << "After sorting: " << endl;
    print_array(arr);
    return 0;
}