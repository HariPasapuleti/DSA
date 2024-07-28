#include <iostream>
#include <vector>

using namespace std;

int partition(vector<int>& vec, int low, int high)
{
    int i = low, j = high;
    int pivot = low;

    while(i < j)
    {
        while(vec[pivot] >= vec[i] && i < high)
        {
            i++;
        }
        while(vec[pivot] < vec[j] && j > low)
        {
            j--;
        }
        if(i < j) {
            swap(vec[i], vec[j]);
        }
        
    }
    swap(vec[pivot], vec[j]);

    return j;
}

void quickSort(vector<int>& vec, int low, int high)
{
    if(low < high) {
        int partition_index = partition(vec, low, high);
        quickSort(vec, low, partition_index - 1);
        quickSort(vec, partition_index + 1, high);
    }
}

int main()
{
    vector<int> vec = {9, 1, 4, 3, 6, 9, 7, 2, 4};
    quickSort(vec, 0, vec.size() - 1);

    for(int i = 0; i < vec.size(); i++)
    {
        cout << vec[i];
    }
 
    return 0;
}