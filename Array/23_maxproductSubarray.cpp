class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(vector<int> arr, int n) {
	    // code here
	    long long ans=arr[0];
	    long long maxi=ans,mini=ans;
	    
	    for(int i=0;i<n;i++){
            //when product element goes in -ve then it reverse the value of max and min so swp them
	        if(arr[i]<0){
	            swap(maxi,mini);
	        }
            //get the max from the curr eleemt or curr element * previous max
	        maxi=max(arr[i],maxi*arr[i]);
            //same for min either curr or prev min * curr
	        mini=min(arr[i],mini*arr[i]);

            //keep updating the max product in each iteration
	        ans=max(ans,maxi);
	    }
	    return ans;
	}
};