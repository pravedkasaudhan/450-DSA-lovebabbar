TC-O(N)+O(nlogn)
SC-O(N)

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> ans;
        int size=intervals.size();
        for(int i=0;i<intervals.size();i++){
            //we take the first interval start and end.
          int start=intervals[i][0];
            int end=intervals[i][1];
            //we keep on updateing the max end which we can get in interval when the start of next interval is less than tha last intervl's end
            while(i<size-1 && end>=intervals[i+1][0]){
                end=max(end,intervals[i+1][1]);
                i++;
            }
            //push the individual end with start we have in answer vector
            ans.push_back({start,end});
        }
        return ans;
    }
};

//other than this we also have approach usign stack TC-O(nlogn),SC-0(N)
//other than this we also have approach usign alteration in same vector TC-O(nlogn),SC-0(1)




class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> ans;
     
        int i=0;
        while(i<intervals.size()){
            //we get the first and second of respective iteration
            int first=intervals[i][0];
            int second=intervals[i][1];
            
            //keep on moving ahead till first ele of following elements is less than second
            while(i<intervals.size()-1 && second>=intervals[i+1][0]){
                //get the max of second and element whose first is less than second of current one started 
                second=max(second,intervals[i+1][1]);
                //move to next iteration for furthur check of bpunds
                i++;
            }
            //push the curr first and second bound in answer
            ans.push_back({first,second});
            // upadte i with new range after the previos one set in previos element
            i++;
        }
        return ans;
    }
};