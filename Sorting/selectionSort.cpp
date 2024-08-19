#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void selectionSort(int arr[], int n)
{
    for(int i = 0; i < n-1; i++)
    {
        int min_i = i;
        for(int j = i; j < n; j++)
        {
            if(arr[j] < arr[min_i]) min_i = j;
        }
        
        int temp = arr[min_i];
        arr[min_i] = arr[i];
        arr[i] = temp;
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

    selectionSort(arr, n);

    cout << "Sorted array" << endl;
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}