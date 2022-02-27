#include<bits/stdc++.h>
using namespace std;

bool checkpalindrome(string &str, int l, int r){
    if(l>=r){
        return true;
    }
    if(str[l]!=str[r]){
        return false;
    }
    return checkpalindrome(str, ++l, --r);
}

int main(){

string str = "madamo";
cout<<checkpalindrome(str,0 ,str.length()-1)<<endl;
// for(int i=0; i<arr.size(); i++){
//     cout<<arr[i]<<' ';
// }

return 0;
}