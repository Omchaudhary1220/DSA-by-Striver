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
            swap(&arr[l],&arr[e]);   // we cannot optimise this code using flag because in this code we are just finding largest element and putting at last.
        }
        l++;
    }
    bubblesort(arr,s,e-1);
}
//optimising buuble sort by using a swapped flag variable.
void bubblesort(int arr[],int n){
   int swapped_flag=0;
   if(n==1){
       return;
   }
   for(int i=0;i<n-1;i++){
       if(arr[i]>arr[i+1]){
           swap(&arr[i],&arr[i+1]);
           swapped_flag=1;
       }
   }
   if(swapped_flag==0){
       return;
   }
   bubblesort(arr,n-1);
}
