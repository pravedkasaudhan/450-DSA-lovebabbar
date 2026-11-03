Approach 1 :- With STL unordered map

class Solution{
    public:
    //here we use map to store the unique key as it forms the union of both the arrays
    int doUnion(int a[], int n, int b[], int m)  {
        //code here
        unordered_map<int,int> map;
        int i;
        for(i=0;i<n;i++){
            map[a[i]];
        }
        for(i=0;i<m;i++){
            map[b[i]];
        }
        return map.size();
    }
};

Approach 2 :- With 2 Pointers

class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        //code here
        int i=0,j=0,count=0;
        
        //sort both the array
        sort(a,a+n);
        sort(b,b+m);
        while(i<n && j<m){
            if(a[i]<b[j]){
                //to check for duplicates as we need distinct elements
               if(i!=0 && a[i]==a[i-1]){
                i++;
                
               }
               else{
                   i++;
                   count++;
               }
            }
            else if(a[i]>b[j]){
                
                if (j!=0 && b[j]==b[j-1]){
                j++;
                
                }
                else{
                    j++;
                    count++;
                }
            }
            else {
                if(i!=0 && a[i]==a[i-1]){
                i++;j++;
                }
                else{
                    i++;j++;count++;
                }
            }
        }
        while(i<n){
              
               if(i!=0 && a[i]==a[i-1]){
                i++;
                
               }
               else{
                   i++;
                   count++;
               }
        }
        while(j<m){
              if (j!=0 && b[j]==b[j-1]){
                j++;
                
                }
                else{
                    j++;
                    count++;
                }
        }
        return count;
    }
};