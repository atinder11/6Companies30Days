//Problem Link: https://leetcode.com/problems/count-the-number-of-incremovable-subarrays-i/


class Solution {
public:
bool check(vector<int>temp){
    for(int i=1;i<temp.size();i++){
        if(temp[i]<=temp[i-1]) return false;}
        return true;



    }


    int incremovableSubarrayCount(vector<int>& nums) {
        int res=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i;j<nums.size();j++){
                vector<int>tmp;
                for(int k=0;k<i;k++){
                    tmp.push_back(nums[k]);
                }
                for(int k=j+1;k<nums.size();k++){
                    tmp.push_back(nums[k]);
                }
                if(check(tmp)) res++;

            }
        }
        return res;
        
        
    }
};