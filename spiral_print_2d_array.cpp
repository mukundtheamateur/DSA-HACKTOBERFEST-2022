#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[4][3]={{1,4,3},{4,23,1},{9,0,12},{8,13,11}};
    int row=sizeof(arr)/sizeof(arr[0]);
    int col=sizeof(arr[0])/sizeof(int);
    int starting_col=0;
    int starting_row=0;
    int Ending_col=col-1;
    int Ending_row=row-1;
    int total=row*col-1;
    int count = 0;
    vector<int>ans;
    while(total>count){
        //print starting row
        for (int index = starting_col;total < count && index <= Ending_col; index++)
        {
            cout << arr[starting_row][index] << " ";
            count++;
        }
        starting_row++;
        //print ending column
        for ( int index = starting_row ;total < count && index <= Ending_row; index++)
        {
            cout << arr[index][Ending_col]<<" ";
            count++;
        }
        Ending_col--;
        //print ending row
        for(int index = Ending_col;total < count && index >= starting_col ;index--){
            cout << arr[Ending_row][index] << " ";
            count++;
        }
        Ending_row--;
        //print starting column
        for (int index = Ending_row;total < count && index >= starting_row;index--){
            cout << arr[index][starting_col] << " ";
            count++;
        }
        starting_col++;
    }
    return 0;
}