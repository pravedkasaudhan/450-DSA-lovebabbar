class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
        //here we use the KADANE's Algorithm in which we drop then sum to 0 when it goes -ve as it will be reducing the overall sum thus we start for next subarray with initial sum=0.
        int i;
        long long cf=0,max_sum=INT_MIN;
        for(i=0;i<n;i++){
            cf=cf+arr[i];
            max_sum=max(max_sum,cf);
            if(cf<0){
                cf=0;
            }
            
        }
        return max_sum;
    }
};