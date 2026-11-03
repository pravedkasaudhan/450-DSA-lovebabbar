class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int i=0;
     for(int x=0;x<nums.size();x++)
            if(nums[x]!=0){
                swap(nums[i],nums[x]);
                i++;
            }
        }

};