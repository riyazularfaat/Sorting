#include<bits/stdc++.h>
using namespace std;

void print_array(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void selection_sort(vector<int> &arr)
{
    int size = arr.size();
    for (int i = 0; i < size - 1; i++)
    {
        int min_element = i;
        for (int j = i + 1; j < size; j++)
        {
            if(arr[j]<arr[min_element])
            {
                min_element = j;
            }
        }
        swap(arr[i],arr[min_element]);
    }
    print_array(arr);
}
int main()
{
    vector<int> arr;
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    cout << "Enter the elements of the array: "<<endl;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    selection_sort(arr);
    return 0;
}