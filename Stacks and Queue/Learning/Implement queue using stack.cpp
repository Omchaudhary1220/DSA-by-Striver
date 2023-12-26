// Brute force with t.c=0(n) s.c=0(2n)
class MyQueue {
private:
    stack<int>st1,st2;
public:    
    void push(int x) {
       if(st1.empty()){
           st1.push(x);
           return;
       } 
       while(!st1.empty()){
           st2.push(st1.top());
           st1.pop();
       }
       st1.push(x);
       while(!st2.empty()){
           st1.push(st2.top());
           st2.pop();
       }
    }

    
    int pop() {
       if(!st1.empty()){
           int val=st1.top();
           st1.pop();
           return val;
       }
       return -1;
    }
    
    int peek() {
        if(!st1.empty()){
            return st1.top();
        }
        return -1;
    }
    
    bool empty() {
      return st1.empty();  
    }
};
// with t.c=0(1) Amortized( average) s.c=0(2n)
class MyQueue {
private:
    stack<int>input,output;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        input.push(x);
    }
    
    int pop() {
        if(output.empty()){
            while(input.size()){
                output.push(input.top());
                input.pop();
            }
        }
        int val=output.top();
        output.pop();
        return val;
    }
    
    int peek() {
       if(output.empty()){
            while(input.size()){
                output.push(input.top());
                input.pop();
            }
        }
        return output.top();
    }
    
    bool empty() {
       return (input.empty()&&output.empty()); 
    }
};
