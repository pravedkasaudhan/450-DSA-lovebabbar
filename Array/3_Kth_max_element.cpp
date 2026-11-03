// using Quick Sort for sorting

class Solution {
    private:
    int partition(vector<int>& nums,int s,int e){
        int p=nums[s];
        int i,count=0;
        for(i=s+1;i<=e;i++){
            if(nums[i]<=p){
                count++;
            }
        }
        int pivotIndex=s+count;
        swap(nums[s],nums[pivotIndex]);
         
        i=s;int j=e;
        while(i<pivotIndex && j>pivotIndex){
            while(nums[i]<=nums[pivotIndex]){
                i++;
            }
              while(nums[j]>nums[pivotIndex]){
                j--;
            }
            if(i<pivotIndex &&j>pivotIndex){
                swap(nums[i++],nums[j--]);
            }
            
        }
        return pivotIndex;
    }
    public:
    void sorting(vector<int>& nums,int s,int e){
        if(s>=e){
            return;
        }
        int p=partition(nums,s,e);
        sorting(nums,s,p-1);
        sorting(nums,p+1,e);
    }
public:
    int findKthLargest(vector<int>& nums, int k) {
        int s=0,end=nums.size();
        sorting(nums,s,end-1);
        return nums[end-k];
    }
};