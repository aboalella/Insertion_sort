#include <iostream>

using namespace std;

template <typename T>
void insertion_sort(T *arr, int _size)
{
    for(int i = 0; i < _size; i++)
        for(int j = i; j > 0; j--)
            if(arr[j] < arr[j - 1])
                swap(arr[j],arr[j-1]);
            else
                break;
}

int main(){
    int arr[] = {4,3,2,10,12,1,5,6};
    int _size = sizeof(arr)/sizeof(arr[0]);
    insertion_sort(arr,_size);
    for(int i = 0; i < _size; i++)
        cout<<"arr["<<i<<"] = "<<arr[i]<<endl;
    return 0;
}