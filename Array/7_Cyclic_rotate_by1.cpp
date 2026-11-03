void rotate(int arr[], int n)
{
    
    int i,res[n];
    for(i=0;i<n;i++){
        // cout<<i<<" "<<(i+1)%n<<endl;
        res[(i+1)%n]=arr[i];
    }
     for(i=0;i<n;i++){
       arr[i]=res[i];
    }
    
}