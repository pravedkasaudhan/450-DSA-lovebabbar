class Solution{   
public:
    map<int,int> mapEle;
    int count=0;
    int getPairsCount(int arr[], int n, int k) {
        // code here
        for(int i=0;i<n;i++){
            //we take the rest num after reducing arr[i] from sum then search it in mapp
            int leftSum=k-arr[i];
            if(mapEle[leftSum]){
                // if form pair with all time /index it occur in arr previously
                count+=mapEle[leftSum];
            }
            
            mapEle[arr[i]]++;
        }
        return count;
    }
};