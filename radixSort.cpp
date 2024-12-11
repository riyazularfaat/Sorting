#include<bits/stdc++.h>
using namespace std;

void countingSort(vector<int> &arr, int exp)
{
    int n = arr.size();
    vector<int> output(n);
    vector<int> count(10, 0);

    for (int i = 0; i < n; i++)
    {
        count[(arr[i] / exp) % 10]++;
    }

    for (int i = 1; i < 10; i++)
    {
        count[i] += count[i - 1];
    }

    for (int i = n - 1; i >= 0; i--)
    {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = output[i];
    }
}

void digitWiseSort(vector<int> &arr)
{
    int maxVal = *max_element(arr.begin(), arr.end());
    for (int exp = 1; maxVal / exp > 0; exp *= 10)
    {
        countingSort(arr, exp);
    }
}

void print_array(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int N;
    cout << "Enter the number of elements in the array: ";
    cin >> N;
    vector<int> arr(N);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    digitWiseSort(arr);

    print_array(arr);

    return 0;
}