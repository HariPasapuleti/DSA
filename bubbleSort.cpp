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

    bubbleSort(arr, n);

    cout << "Sorted array" << endl;
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}