#include<iostream>
using namespace std;
bool Search(int target,int arr[][4],int m,int n){
    int s=0;
    int e=n*m-1;
    int mid = s + (e-s)/2;
    while (s<=e)
    {
        int element = arr[mid/n][mid%n];
        if (target==element)
        {
            return 1;
        }
        if (target > element)
        {
            s=mid+1;
        }
        if (target<element)
        {
            e=mid-1;
        }
        
    }
    return 0;
    
}
int main(){
    cout << " finding the target element is present or not"<<endl;
    int arr[3][4]={{1,2,7,8},{4,11,88,21},{12,18,6,5}};
    cout << Search(5,arr,3,4);

}