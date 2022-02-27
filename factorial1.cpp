#include<bits/stdc++.h>
using namespace std;

int print(int a, int ans){
    if(a==1){
        // cout<<a<<endl;
        return ans;
    }
    
    ans*=a;
    return print(a-1, ans);
}

int main(){

int a=5;
cout<<print(a, 1)<<endl;

return 0;
}