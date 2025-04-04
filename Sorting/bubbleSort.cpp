#include <iostream>

using namespace std;

void bubbleSort(int arr[], int n)
{
    for(int i = n-1; i >= 0; i--)
    {
        int swaps = 0; // Used for best case
        for(int j = 0; j < i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swaps = 1; 
                // int temp = arr[j];
                // arr[j] = arr[j+1];
                // arr[j+1] = temp;
                arr[j] = arr[j] ^ arr[j+1];
                arr[j+1] = arr[j] ^ arr[j+1];
                arr[j] = arr[j] ^ arr[j+1];                
            }
        }
        // cout << swaps << endl;
        if(swaps == 0) return;
    }
}

void bubbleSort_rec(int arr[], int n) {
    if(n==0) return;
    for(int i=0;i<n-1;i++) {
        if(arr[i]>arr[i+1]) {
            swap(arr[i], arr[i+1]);
        }
    }
    bubbleSort_rec(arr, n-1);
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

    // bubbleSort(arr, n);
    bubbleSort_rec(arr, n);

    cout << "Sorted array" << endl;
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}