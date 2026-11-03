class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        long long ct=0;
        long long maxi=INT_MIN;
        for(int i=0;i<n;i++){
            //we keep the cf of elements
           ct=ct+arr[i];
            // and keep the track ok max cf we calculated
           maxi=max(ct,maxi);
           
           //when the cf goes below 0 then we ignore it as it result in degardation of the sum so it will not be halpful in getting max so we ignore and start as a new subarray
            if(ct<0){
                ct=0;
            }
             
        }
        
        return maxi;
    }
};
