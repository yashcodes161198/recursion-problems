#include<bits/stdc++.h>
using namespace std;

int print(int a){
    if(a==1 || a==0){
        // cout<<a<<endl;
        return 1;
    }
    
    return a*print(a-1);
}

int main(){

int a=5;
cout<<print(a)<<endl;

return 0;
}