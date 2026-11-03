// this is solved using tortoise apporach or floyd cycle approach

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
    int slow=0;
    int fast=0;
    //we move slow by 1 step and fast by 2nd step until we find the that there is a cycle
        do{
            slow=nums[slow];
            fast=nums[nums[fast]];
        }while(slow!=fast);
        //when point is found we put thw fast to zero and then move slow and fast by 1 step as they need equal steps to reach the point of cycle.
        fast=0;
        while(slow!=fast){
            slow=nums[slow];
            fast=nums[fast];
        }
        return slow;
    }
};