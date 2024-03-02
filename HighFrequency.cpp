#include<iostream>
#include<vector>
using namespace std;

int FindFrequency(vector<int>& nums){
    int ans=nums[0];
    int count=1;
    for(int i=1;i<nums.size();i++){
        if(nums[i]==ans)count++;
        else if(nums[i]!=ans && count>0) count--;
        else{
            ans=nums[i];
            count++;
        }
    }
    return ans;
}
int main(){
    vector<int> ans={2,4,2,5,3,3,2};
    cout<<FindFrequency(ans);
    return 0;
}