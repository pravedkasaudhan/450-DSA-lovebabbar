struct pair getMinMax(long long int arr[], long long int n) {
    
   
    long long int i;
    struct pair result;
    if(arr[0]>arr[1]){
        result.min=arr[1];
        result.max=arr[0];
    }
    else{
        result.min=arr[0];
        result.max=arr[1];
    }
    
    for(i=2;i<n;i++){
        if(arr[i]>result.max){
            result.max=arr[i];
        }
        if(arr[i]<result.min){
            result.min=arr[i];
        }
    }
    return result;
}