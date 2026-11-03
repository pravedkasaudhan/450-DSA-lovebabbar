class Solution {
public:
    void reverse(vector<int> & nums,int start,int end){
        while(start<=end){
            swap(nums[start++],nums[end--]);
        }
    }
    void nextPermutation(vector<int>& nums) {
        
        int n=nums.size();
        int i=n-2,j=n-1;

        //find index of first element where element[i]<element[i+1]
       while(i>=0 && nums[i]>=nums[i+1]){
           i--;
       }
    
        //when element found is at 0 or more than find the first element from last which is greater than element at element[i]
        if(i>=0){
            

            while(j>i && nums[j]<=nums[i]){
                
                j--;
            }
            
            swap(nums[i],nums[j]);
                      
            reverse(nums,i+1,nums.size()-1);
        }
        else{
            
        
            reverse(nums,0,nums.size()-1);
        }