Link:- https://www.codingninjas.com/studio/problems/stack-implementation-using-array_3210209
// Stack class.
class Stack {
private:
    int *arr;
    int n=0;
    int t=-1;
public:
    
    Stack(int capacity) {
        arr=new int[capacity];
        n=capacity;
    }

    void push(int num) {
       if(t<n-1){
           arr[++t]=num;
       }
    }

    int pop() {
        if(t>=0){
            int temp=arr[t];
            arr[t--]=0;
            return temp;
        }
        else{
            return -1;
        }
    }
    
    int top() {
        if(t>=0){
            return arr[t];
        }
        else{
            return -1;
        }
    }
    
    int isEmpty() {
        if(t==-1) return 1;
        else
        return 0;
    }
    
    int isFull() {
        if(t==n-1) return 1;
        else 
        return 0;
    }
    
};
