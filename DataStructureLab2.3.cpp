#include<iostream>
using namespace std;

int main(){

int arr[8]={1,2,3,4,4,5,7,8};
int Unique_arr[8];

int i,j,k=0;
for(i=0; i<0; i++)
{
    for(j=0; j<0; j++){
        if(arr[i]==arr[j]){
            break;
            k++;
            cout<<arr[i]<<" ";
        }

    }
}
if(k==0){
    cout<<"Array already unique";
}
return 0;
}
