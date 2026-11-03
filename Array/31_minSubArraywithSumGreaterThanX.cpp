Approach 1- Bruteforce -TC :- O(N^2)
simple find the all sub array and keep on maintaining the min sub array length for sum x while traversing all subarray.

Approach 2- Use two pointer apporach to find the min subarray length


class Solution{
  public:

    int smallestSubWithSum(int a[], int n, int x)
    {
        
        int mini=INT_MAX;
        int subSum=0,counter=0,start=0,end=0;
        while(start<=end && end<n){

            //keep on adding until we get the sum greater than x
            while(subSum<=x && end<n){
                subSum+=a[end];
                end++;
            }

            // remove the element from start to maintain the sum greater than x and maintain the min length of sub array
           while(subSum>x && start<end){
               mini=min(mini,end-start);
               subSum=subSum-a[start];
                start++;
           }
        }
        
        return mini;
    }
};