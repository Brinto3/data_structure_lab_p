#include<iostream>
using namespace std;

int main(){

int arr_one[]={1,2,3,4,5};
int arr_two[]={6,7,8,9,10,11,12,13};
int MergeArray[13];
int i;
for(i=0;i<5;i++)
{
    MergeArray[i]=arr_one[i];
}
for(i=0; i<8;i++)
{
    MergeArray[i+5]=arr_two[i];
}
for(i=12;i>=0;i--){
        cout<<MergeArray[i]<<"  ";
}
return 0;
}
