#include <iostream>

using namespace std;

void insertionSort(int arr[], int n)
{
    for(int i = 1; i < n; i++)
    {
        int j = i;
        while(j > 0 && arr[j] < arr[j-1])
        {
            int temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
            j--;
        }
    }
}

void insertionSort_rec(int arr[], int n, int size) {
    if(n == size) return;
    int temp = n;
    while(temp > 0 && arr[temp] < arr[temp - 1]) {
        swap(arr[temp], arr[temp - 1]);
        temp--;
    }
    insertionSort_rec(arr, n + 1, size);
}

int main() 
{
    int n;
    cout << "Enter the size of an array: ";
    cin >> n;
    int arr[n];

    cout << "Enter an array" << endl;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // insertionSort(arr, n);
    insertionSort_rec(arr, 1, n);

    cout << "Sorted array" << endl;
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}