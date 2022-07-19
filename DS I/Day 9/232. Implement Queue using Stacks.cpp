class MyQueue {
    stack<int>inp,out;
public:
    MyQueue() {
    }
    
    void push(int x) {
        inp.push(x);
    }
    
    int pop() {
        if(out.empty()){
            while(!inp.empty()){
                out.push(inp.top());
                inp.pop();
            }
        }
        int x = out.top();
        out.pop();
        return x;
    }
    
    int peek() {
        if(out.empty()){
            while(!inp.empty()){
                out.push(inp.top());
                inp.pop();
            }
        }
        int x = out.top();
        return x;
    }
    
    bool empty() {
        return (out.empty() && inp.empty());
    }
};