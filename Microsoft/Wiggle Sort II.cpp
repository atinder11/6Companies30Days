//problem link:https://leetcode.com/problems/wiggle-sort-ii/description/

class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>ans(nums.size());
        int i=1;
        int j=nums.size()-1;
        while(i<nums.size()){
            ans[i]=nums[j];
            j--;
            i+=2;


        }
        i=0;
        while(i<nums.size()){
            ans[i]=nums[j];
            j--;
            i+=2;

        }
        for(int i=0;i<nums.size();i++){
            nums[i]=ans[i];

        }

        
    }
};