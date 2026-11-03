class Solution {
public:
    vector<int> majorityElement(vector<int>& arr) {
        map<int,int> mapping;
        vector<int> ans;
        int num=arr.size()/3,count=0;

        for(int i=0;i<arr.size();i++){
            //update the frequency in map and then check
            mapping[arr[i]]++;

            //when frquency becomes more than n/k we add it in ans and make it freuqncy to INT_MIN
            //such that a kind to store the frquency so it again wont add in ans array
            if(mapping[arr[i]]>num){
                ans.push_back(arr[i]);
                mapping[arr[i]]=INT_MIN;
            }
           
        }
        
        return ans;
    }
};