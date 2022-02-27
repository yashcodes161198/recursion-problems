#include<bits/stdc++.h>
using namespace std;

void subsequences(vector<int> &arr, vector<int> &temp, int n, int index){
    if(index==3){
        if(temp.size()){
            for(int i=0; i<temp.size(); i++){
                cout<<temp[i]<<' ';
            }
            cout<<endl;
        }
        else
            cout<<' '<<endl;
        return;
    }
    
    temp.push_back(arr[index]);//take the elemenr arr[index]
    subsequences(arr, temp, n, index+1);
    temp.pop_back();//not take the element at arr[index](ie-restore it to its original form)
    subsequences(arr, temp, n, index+1);
    
}

int main(){

vector<int> arr = {3,1,2};
vector<int> temp;
int n=arr.size();
subsequences(arr, temp, 3, 0);


return 0;
}