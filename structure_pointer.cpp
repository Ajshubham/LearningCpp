#include<iostream>

using namespace std;

struct odd
{
    int arr[50];
}*p;

int main()
{
    int j = 0;
    p = new odd[50];
    for(int i = 1; i<=100; i++)
    {
        if(i % 2 != 0)
        {  
            p->arr[j] = i;
            j++;
        }
        else
            continue;
    }

    for (int i = 0; i < 50; i++)
    {
        cout<<p->arr[i]<<" ";
    }

    delete [] p;
    // cout<<p->arr[0];
}