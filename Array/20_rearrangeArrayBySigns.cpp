Approach 1:- Using Vector TC-O(N) SC-O(N)

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos;
        vector<int> neg;
        
        int size=nums.size();
        for(int i=0;i<size;i++){
            //put -ve num in pos arr
            if(nums[i]>0){
                pos.push_back(nums[i]);
            }
            //put +ve num in neg arr
            else{
                neg.push_back(nums[i]);
            }
        }
        int i=0,j=0;
        vector<int> res;
        // iterate both arr and push the element alternate order
        while(i<pos.size() && j<neg.size()){
            res.push_back(pos[i++]);
            res.push_back(neg[j++]);
        }
        return res;
    }
};


Approach 2:- SC-O(1)

