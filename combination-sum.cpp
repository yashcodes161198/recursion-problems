#include<bits/stdc++.h>
using namespace std;

    void subsequences(vector<int> &arr, vector<int> &temp, vector<vector<int>> &ans, int &index, int target, int sum){
        if(sum>target){
            return;
        }
        if(sum==target){
            // if(sum==target){
                ans.push_back(temp);
            // }
            // else
                return;
        }
        sum+=arr[index];
        temp.push_back(arr[index]);
        subsequences(arr, temp, ans, index, target, sum);
        sum-=arr[index];
        temp.pop_back();
        subsequences(arr, temp, ans, index+1, target, sum);
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> temp;
        vector<vector<int>> ans;
        int index=0;
        // int x=0, y=0;
        // for(int i=0; i<candidates.size(); i++){
        //     x=candidates[i];
        //     y+=
        // }
        subsequences(candidates, temp, ans, index, target, 0);
        return ans;
    }

int main(){
vector<int> candidates={2,3,6,7};
int target=7;

vector<vector<int>> ans=combinationSum(candidates, target);
for(int i=0; i<ans.size(); i++){
    for(int j=0; j<ans[i].size(); j++){
        cout<<ans[i][j]<<' ';
    }
    cout<<endl;
}

return 0;
}