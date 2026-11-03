
Approach 1:-
class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //code here.
       
            vector<int> ans;
            unordered_map<int,int> mapping1;
            unordered_map<int,int> mapping2;
            unordered_map<int,int> mapping3;
            //map all the element of array in different maps
            for(int i=0;i<n1;i++){
                mapping1[A[i]]++;
            }
            for(int i=0;i<n2;i++){
                mapping2[B[i]]++;
            }
            for(int i=0;i<n3;i++){
                mapping3[C[i]]++;
            }
            
            //now iterate for any araray and check its availability in all hash maps
            for(int i=0;i<n1;i++){
                
                if(mapping1[A[i]] && mapping2[A[i]] && mapping3[A[i]]){
                 //if frequency of specific element is more than 00 zero then is added in vector
                    ans.push_back(A[i]);
                    //set the map of that element to zero to avoiud repeated entry in vector
                    mapping1[A[i]]=0;
                }
            }
            return ans;
        }

};

Approach 2:- 

class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
          
              
            int i=0,j=0,k=0;
            vector<int> ans;
            while(i<n1 && j<n2 && k<n3){
                //when its equal push in vector and increase all pointer of all 3 arrays
                if(A[i]==B[j] && B[j]==C[k]){
                    ans.push_back(A[i]);
                    i++;j++;k++;
                }
                // increase pointer for 1st array until its less than element at pointer on 2nd array
                else if(A[i]<B[j]){
                    i++;
                }
                //same do for the 2nd array
                else if(B[j]<C[k]){
                    j++;
                }
                //then third array
                else{
                    k++;
                }
                // increase until we get the repeating element for all arrays
                int a=A[i-1];
                while(A[i]==a) i++;
                int b=B[j-1];
                while(B[j]==b) j++;
                int c=C[k-1];
                while(C[k]==c) k++;
                
            }
            
            if(ans.size()==0){
                return {-1};
            }
            return ans;
        }

};