#include <iostream>
#include<unordered_map>
#include<string>
#include<vector>
#include<set>
using namespace std;
void printing_vectors(vector<int>v){
        for(auto i:v){
            cout<<i<<" ";
        }
        cout<<endl;
    }
vector<vector<int> > stockBuySell(vector<int> A, int n){
        vector<int> v1,v2;
        vector<vector<int>>res;
        
        if(A[0]<A[1]){
            v1.push_back(A[0]);
        }
        for(int i=1;i<n-1;i++){
            if(A[i]<=A[i+1] && A[i]<A[i-1] ){
                v1.push_back(A[i]);
            }
            else if(A[i]>A[i-1] && A[i]>A[i+1]){
                v2.push_back(A[i]);
            }
            
        }
        if(A[n-1]>A[n-2]){
                v2.push_back(A[n-1]);
        }
        
        int j=0;
        for(int i=0;i<v1.size()&& j<v2.size();i++){
            vector<int>v;
            v.push_back(v1[i]);
            v.push_back(v2[j]);
            res.push_back(v);
            j++;
        }

        return res;
    }

int main(){
    vector<int>v;
    int arr[18]={11,42,49,96,23,20,49,26,26,18,73,2,53,59,34,99,25,2};
    for(int i=0;i<18;i++){
        v.push_back(arr[i]);
    }
    vector<vector<int>>ans=stockBuySell(v,18);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[0].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    

}

// this program fails for some test cases for correct program refer to gfg array problem 