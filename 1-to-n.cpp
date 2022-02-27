#include<bits/stdc++.h>
using namespace std;

void print(int a){
    if(a==0){
        // cout<<a<<endl;
        return;
    }
    
    cout<<a<<endl;
    print(a-1);
}

int main(){

int a=5;
print(a);

return 0;
}