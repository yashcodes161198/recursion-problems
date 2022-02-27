#include<bits/stdc++.h>
using namespace std;

void subsequences(vector<int> &arr, vector<int> &temp, int n, int index, int sum){
    if(index==n){
        if(sum==2){
        if(temp.size()){
            for(int i=0; i<temp.size(); i++){
                cout<<temp[i]<<' ';
            }
            cout<<endl;
        }
        else
            cout<<' '<<endl;
            // return;
        }
        return;
    }
    
    temp.push_back(arr[index]);//take the elemenr arr[index]
    sum+=arr[index];
    subsequences(arr, temp, n, index+1, sum);
    temp.pop_back();//not take the element at arr[index](ie-restore it to its original form)
    sum-=arr[index];
    subsequences(arr, temp, n, index+1, sum);
    
}

int main(){

vector<int> arr = {1,2,1};
vector<int> temp;
int n=arr.size();
subsequences(arr, temp, arr.size(), 0, 0);


return 0;
}