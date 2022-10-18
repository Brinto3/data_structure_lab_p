#include<iostream>
using namespace std;
int main()
{
    int n, i, arr[50], j, temp;
    cout<<"Enter the Size: ";
    cin>>n;
    cout<<"Enter Numbers: "<<n;
    for(i=0; i<n; i++)
        cin>>arr[i];
    for(i=0; i<(n-1); i++)
    {
        for(j=0; j<(n-i-1); j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    cout<<"\nThe New Array: \n";
    for(i=0; i<n; i++)
        cout<<arr[i]<<" "<<endl;
    return 0;
}
