class Solution {
public:
    int longestConsecutive(vector<int>& arr) {
        set<int> s;
        int maxi=0;
        //put all the element in set for diteinct element
        for(int i=0;i<arr.size();i++){
            s.insert(arr[i]);
        }
        //iterate the array for each element
        for(int i=0;i<arr.size();i++){
            //pick only if that elemnt is the first element of subsequence suh that num-1 is not existed in map
            if(!s.count(arr[i]-1)){
                int curr=arr[i];
                int streak=1;
                //increase the streak until the following nums are present in set
                while(s.count(curr+1)){
                    curr++;
                    streak++;
                }
                //get the max from all the streaks
                 maxi=max(maxi,streak);
            }
           
        }
        return maxi;
    }
};