string isSubset(int a1[], int a2[], int n, int m) {
    
    set<int> s;
    //insert the element of first array in set for non repeating nature
    for(int i=0;i<n;i++){
        s.insert(a1[i]);
    }

    //check for its availablity in set ,if not instantly return NO
    for(int j=0;j<m;j++){
        if(!s.count(a2[j])){
            return "No";
        }
    }
    return "Yes";
}