#include <iostream>
#include <algorithm>

using namespace std;
void Sort(int array[],int arraysize)
{
    for(int i=0; i<arraysize -1; i++)
    {
        for(int j=i+1; j < arraysize; j++)
        {
            if(array[i] >array[j])
            {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }

    }

     for(int i=0; i<arraysize; i++)
        {

            cout<<array[i]<<" ";
        }



}
int main()
{
    int n,res;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }

int arraysize = sizeof(array) / sizeof(array[0]);
Sort(array,arraysize);


    return 0;
}

