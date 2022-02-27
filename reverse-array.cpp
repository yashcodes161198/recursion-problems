#include<bits/stdc++.h>
using namespace std;

void reversearray(vector<int> &arr, int l, int r){
    if(l>=r){
        return;
    }
    swap(arr[l++], arr[r--]);
    reversearray(arr, l, r);
}

int main(){

vector<int> arr={5,7,8,4,1,2,6};
reversearray(arr, 0, arr.size()-1);
for(int i=0; i<arr.size(); i++){
    cout<<arr[i]<<' ';
}

return 0;
}