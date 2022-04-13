#include <bits/stdc++.h>
using namespace std;
# define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);


class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int len = nums.size();
        vector<int> v;
        int s=0;   int e =len - 1;  int m;
        //vector<int>::iterator it;
        vector<int>::iterator it1;
        vector<int>::iterator it2;
       
        if(!nums.empty()){
            it1 = lower_bound(nums.begin(), nums.end(), target);
            if(it1!=nums.end()){
                it2 = upper_bound(nums.begin(), nums.end(), target);
                int ind2=distance(nums.begin(), it2) - 1;
                int ind1 = distance(nums.begin(), it1) - 1;
                int con=ind1-ind2;
                if(con>1){
                    v = {ind1,ind2};
                    return v ;
                }
                else{
                    return {-1,-1};
                }
            }
        }
        else{
            return {-1,-1};
        }

        
    }

};

int main(){
    vector<int>nums;
    int size;
    cin>>size;
    while(size--){
        int num;
        cin>>num;
        nums.push_back(num);
    }

    int target;
    cin>>target;
    Solution obj;
    vector<int> ans = obj.searchRange(nums,target) ;
    for (auto x : ans){
        cout<<x<<" ";
    }

}