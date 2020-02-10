#include<iostream>
using namespace std;

void solutions(int arr[], int start ,int last, int c)
{        
        int sum=0;
        if(start>last)
        {
           for(int i=start;i<=last;i++)
         sum+=arr[i];
         
         if(sum==c)
         {
             for(int i=0;i<last;i++) 
             cout<<arr[i]<<" ";
             cout<<endl;
         }

        }
           
           else
           {
               for(arr[start]=c; arr[start]>=0; arr[start]--)
                 {
                      
                    solutions(arr, start+1 , last , c-arr[start]);
                 }
           }
           
     
}

int main()
{
    int n,c;
    cout<<"\n Enter the number of terms ";
    cin>>n;
    cout<<"\n Enter the constant ";
    cin>>c;
    int *arr;
    arr= new int[n];
  solutions(arr,0, n-1,c);
    return 0;
}