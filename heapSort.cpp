#include<bits/stdc++.h>
using namespace std;

void heapify(vector<int> &arr, int n, int curr)
{
    int maxIdx = curr;
    int l = 2 * curr + 1;
    int r = 2 * curr + 2;

    if (l < n && arr[l] > arr[maxIdx])
        maxIdx = l;

    if (r < n && arr[r] > arr[maxIdx])
        maxIdx = r;

    if (maxIdx != curr)
    {
        int temp = arr[curr];
        arr[curr] = arr[maxIdx];
        arr[maxIdx] = temp;      
        heapify(arr, n, maxIdx);
    }
}
void heapSort(vector<int> &arr)
{
    int n = arr.size();
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        heapify(arr, n, i);
    }

    for (int i = n - 1; i > 0; i--)
    {
        int temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;
        heapify(arr, i, 0);
    }
}

int main()
{
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    vector<int> arr;
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        arr.push_back(x);
    }
    heapSort(arr);
    cout<<"Sorted array is: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}