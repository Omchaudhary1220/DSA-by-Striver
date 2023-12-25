// Using two queue
class MyStack {
private:
    queue<int>q1,q2;
public:
    MyStack() {
        
    }
    
    void push(int x) {
      if(q1.empty()){
          q1.push(x);
          return;
      }  
      while(!q1.empty()){
          q2.push(q1.front());
          q1.pop();
      }
      q1.push(x);
      while(!q2.empty()){
          q1.push(q2.front());
          q2.pop();
      }
    }

    
    int pop() {
        int val=-1;
        if(!q1.empty()){
        val=q1.front();
        q1.pop();
        }
        return val;
    }
    
    int top() {
        if(!q1.empty()){
            return q1.front();
        }
        return -1;
    }
    
    bool empty() {
        return q1.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
// Using single queue
class MyStack {
private:
    queue<int>q1;
public:
    void push(int x) {
      int n=q1.size();
      q1.push(x);
      for(int i=1;i<=n;i++){
          q1.push(q1.front());
          q1.pop();
      }
    }

    
    int pop() {
        int val=-1;
        if(!q1.empty()){
        val=q1.front();
        q1.pop();
        }
        return val;
    }
    
    int top() {
        if(!q1.empty()){
            return q1.front();
        }
        return -1;
    }
    
    bool empty() {
        return q1.empty();
    }
};

