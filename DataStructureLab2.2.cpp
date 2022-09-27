#include<iostream>

using namespace std;

int main()
{
   int arr_one[5], arr_two[5], arr_three[5], i, j, k=0, x, c;
   cout<<"Enter 5 Elements for First Array: ";
   for(i=0; i<5; i++)
      cin>>arr_one[i];
   cout<<"Enter 5 Elements for Second Array: ";
   for(i=0; i<5; i++)
      cin>>arr_two[i];

   for(i=0; i<5; i++)
   {
      for(j=0; j<5; j++)
      {
         if(arr_one[i]==arr_two[j])
         {
            c = 0;
            for(x=0; x<k; x++)
            {
               if(arr_one[i]==arr_three[x])
                  c++;
            }
            if(c==0)
            {
               arr_three[k] = arr_one[i];
               k++;
            }
         }
      }
   }


   cout<<"Common Elements are:";
   for(i=0; i<k; i++)
      cout<<arr_three[i]<<" ";

   cout<<endl;
   return 0;
}
