#include<iostream>

using namespace std;

int main()
{
    int i, j, temp, size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int arr[size];
    cout<<"Enter the elements in the array:\n";
    for(i = 0; i < size; i++)
        cin>>arr[i];
    for(i = 1; i < size; i++)
    {
        temp = arr[i];
        for(j = i-1; j >= 0 && arr[j] > temp; j--)
            arr[j+1] = arr[j];
        arr[j+1] = temp;
        cout<<temp<<" is inserted at "<<j+1<<"location\n";
    }
    cout<<"Array after sorting the elements are:\n";
    for(i = 0; i < size; i++)
        cout<<arr[i]<<"\t";
    return 0;
}