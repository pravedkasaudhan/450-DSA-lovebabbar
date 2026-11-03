class Solution{
    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n)
    {
        //Your code here
        map<int,int> track;
        int cf=0;
        for(int i=0;i<n;i++){
            //find the cf for every element
            cf+=arr[i];
            // if cf at any point itself becomes zero then we have definately  subarray 
            if(cf==0){
                return true;
            }
            // if we reach certain cf again it means we got a subarray with sum zero .
            if(track.find(cf)!=track.end()){
                return true;
            }
            //map the cf with its index 
            else{
            track[cf]=i;
            }
        }
        return false;
    }
};