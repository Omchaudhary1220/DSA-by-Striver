problem link:-https://www.codingninjas.com/studio/problems/superior-elements_6783446?utm_source=striver&utm_medium=website&utm_campaign=codestudio_a_zcourse&leftPanelTab=1
//brute force solution.
vector<int> superiorElements(vector<int>&a) {
    vector<int>Superior;
    int n=a.size();
    int isSuperior;
    int flag=0;
    for(int i=0;i<n-1;i++){
        isSuperior=1;
        if(a[i+1]==a[i]){
            continue; // for duplicate value.
        }
        for(int j=i+1;j<n;j++){
            if(a[j]>a[i]){
                isSuperior=0;
                break;
            }
        }
        if(isSuperior==1){
            if(a[i]==a[n-1]){
                flag=1; //when last element is havig duplicate.
            }
            Superior.push_back(a[i]);
        }
    }
    if(flag==0){
        Superior.push_back(a[n-1]);
    }
    sort(Superior.begin(),Superior.end());
    return Superior;
}
vector<int> superiorElements(vector<int>&a) {
    vector<int>Superior;
    int n=a.size();
    int max=a[n-1];
    Superior.push_back(max);
    for(int i=n-2;i>=0;i--){
        if(a[i]>max){
            max=a[i];
            Superior.push_back(a[i]);
        }
    }
    sort(Superior.begin(),Superior.end());
    return Superior;
}
