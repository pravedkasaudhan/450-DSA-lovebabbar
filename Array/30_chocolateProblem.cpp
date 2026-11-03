class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    
    // sort the array and then form the window of m size
    sort(a.begin(),a.end());
    long long mini=INT_MAX;
    for(long long i=0;i<=n-m;i++){
        // a[i+m-1]-a[i] for the diff in m size window and then keep on moving one step for n-m times and then find the min diff

        mini=min(mini,a[i+m-1]-a[i]);
    }
    return mini;
    }   
};