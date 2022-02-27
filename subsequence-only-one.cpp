#include<bits/stdc++.h>
using namespace std;

int subsequences(vector<int> &arr, int index, int sum, int s){
    if(index==arr.size()){
        if(sum==2)
        return 1;
        else
        return 0;
        }
    
    // temp.push_back(arr[index]);//take the elemenr arr[index]
    sum+=arr[index];
    int l = subsequences(arr, index+1, sum, s);

    // temp.pop_back();//not take the element at arr[index](ie-restore it to its original form)
    sum-=arr[index];
    int r = subsequences(arr, index+1, sum, s);
    return l+r;
}

int main(){

vector<int> arr = {1,2,1};
// vector<int> temp;
int n=arr.size();
cout<<subsequences(arr,  0, 0, 2)<<endl;


return 0;
}