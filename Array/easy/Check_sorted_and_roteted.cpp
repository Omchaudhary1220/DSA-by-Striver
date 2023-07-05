int isSorted(int n, vector<int> a) {
    int i;
    for(i=1;i<n;i++){
        if(a[i-1]>a[i]){
            return 0;
        }
    }
    return 1;
}
