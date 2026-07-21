class MinStack {
private:

     stack<int> container;
     stack<int> minStack;
public:
    MinStack() {
        
    }
    
    void push(int val) {
         
         container.push(val);
         
         
         
         if (minStack.empty()||val<=minStack.top()){
            minStack.push(val);
         }
         

    }
    
    void pop() {
        
        if (container.top()==minStack.top()){


        
        minStack.pop();
        }

        container.pop();

    }
    
    int top() {
        
         return container.top();


    }
    
    int getMin() {
        return minStack.top();
    }
};
