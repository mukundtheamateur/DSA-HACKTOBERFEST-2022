#include"bits/stdc++.h"
using namespace std;


int main()
{

    int arr[]={1000,11,445,1,334,5556};
    int n=sizeof(arr)/sizeof(arr[0]);
    int m=n;
   int max=arr[0];
    for(int i=1;i<n;i++)
    {

        if(arr[i]>max)
            max=arr[i];

    }

 int min=arr[0];
for(int i=1;i<m;i++)
    {

        if(arr[i]<min)
            min=arr[i];

    }
 cout<<min<<endl;
  cout<<max;

    return 0;
}
