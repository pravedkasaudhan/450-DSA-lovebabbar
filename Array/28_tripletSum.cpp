Approach 1: BRUTEFOrCE -simple create 3 nested loop for triplet and find it
    TC-O(N^3)
    SC-O(1)

Apporach 2:
TC-O(n^2)
Sc-O(N)
in this we traverse one outer loop for traversal and inner loop to find like pair sum using set or map


Appraoch 3:
TC-O(N^2)
SC-O(1)

 for(int i=0;i<n-2;i++){
        int curr=X-A[i];
        
        int l=i+1;
        int r=n-1;
        while(l<r){
            if(A[i]+A[l]+A[r]==X){
                return true;
            }
            else if(A[i]+A[l]+A[r]<X){
                l++;
            }
            else{
                r--;
            }
        }
    }
    return false;