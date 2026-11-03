Approach 1:- 
by following the preprocessing data TC-O(N),SC-O(N)
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        // code here
        
    vector<int> left(n);
    vector<int> right(n);
    int leftMax=arr[0];
    int rightMax=arr[n-1];
    
    //calculate the array with max height from left side
    for(int i=0;i<n;i++){
         leftMax=max(leftMax,arr[i]);
        left[i]=leftMax;
       
    }
    //calculate the array with max height from right
    for(int i=n-1;i>=0;i--){
        rightMax=max(rightMax,arr[i]);
        right[i]=rightMax;
        
    }
    long long res=0;
    for(int i=0;i<n;i++){

        // for filling the water at i we take min height that is possible by left or right side and decrease height of [pillar]
        int tobeFilled=min(left[i],right[i])-arr[i];
        res+=tobeFilled;
    }
    return res;
    }
    
};

Approach 2:- By 2 pointer approach to do inconstant space,  TC_O(N),SC_O(1)


class Solution {
public:
    int trap(vector<int>& height) {
        int left=0,right=height.size()-1;
        int leftMax=0,rightMax=0;
        int res=0;
        while(left<=right){
            
            //ther will be two condition like when height[left]is less than or gretaer than height[right]
            if(height[left]<=height[right]){
                
                // as if height at left index is greater than left Max then we update the leftMax
                if(height[left]>leftMax){
                    leftMax=height[left];
                }
                //update the res with max it can fill by max-initial height
                else{
                    //here we just take leftMax instead of min of leftMax and leftMin bcz we initally checked height[left]<=height[right]
                    // this means like at left index it have at least same height available in right
                    res+=leftMax-height[left];
                }
                
                left++;
            }
            
            //same condition when we get the right side smaller than the left
            else{
                  if(height[right]>rightMax){
                    rightMax=height[right];
                }
                else{
                    res+=rightMax-height[right];
                }
                right--;
            }
        }
        return res;
    }
};
