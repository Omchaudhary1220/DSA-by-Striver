void swap(int* p,int* q){
    int temp=*p;
    *p=*q;
    *q=temp;
}
//time complexity O(n^2) and space complexity O(n).
void bubblesort(int arr[],int s,int e){
    if(s>=e){
        return;
    }
    int l=s;
    while(l<e){
        if(arr[l]>arr[e]){
            swap(&arr[l],&arr[e]);
        }
        l++;
    }
    bubblesort(arr,s,e-1);
}
