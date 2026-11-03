class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0,j=0;int k=m;
        while(i<m+n && j<n){
//when the element at second array at j is smaller than first array at index i then or when the index of first array the index of element and reach the 0 as empty space
            if(nums2[j]<nums1[i] || i>=m+j){
                //store the current last index where element is present
                int c=k;
                //we shift right side element by one step right
                while(k>i){
                    nums1[k]=nums1[k-1];
                    k--;
                }
                //update the last index of nums1 array element
                k=c+1;
                //put the value in nums1
                nums1[i]=nums2[j];
                //update bot
                i++;
                j++;
            }
            else{
                i++;
            }
        }
    }
};




Approach 2: -

class Solution{
public:
	void merge(int arr1[], int arr2[], int n, int m) {
	    
	    int i=n-1,j=0;
        //we iterate the arr1 from back to front and arr2 from front to back
        // here main motive is to divide the smaller one in 1st array and larger one in 2nd one such that
	    while(i>=0 && j<m){
	        
	       if(arr1[i]>arr2[j]){
	           swap(arr1[i],arr2[j]);
	       }
	        i--;
	        j++;
	    }
	    sort(arr1,arr1+n);
	    sort(arr2,arr2+m);
	}
};


Approach 2: -

 int i=m-1,j=n-1,k=m+n-1;
        while(j>=0){

            //i>=0 is the edge case for when no . of lement in num1 is zero. so i=-1 thus we need to put condition
            if(i>=0 && nums1[i]>=nums2[j]){
                nums1[k]=nums1[i];
                k--;
                i--;
            }
            else {
                nums1[k]=nums2[j];
                j--;
                k--;
            }
        }