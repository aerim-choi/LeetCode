//O(N)/O(1) 
class MyQueue {
    stack<int> s;
    stack<int> temp;
public:
    //Time Complexity:O(N)
    void push(int x) {
        while (!s.empty()) {
            temp.push(s.top());
            s.pop();
        }
        
        s.push(x);
        
        while (!temp.empty()) {
            s.push(temp.top());
            temp.pop();
        }

    }
    //Time Complexity:O(1)
    int pop() {
        int n =s.top();
        s.pop();
        return n;
     }
   //Time Complexity:O(1)
    int peek() {
        return s.top();
    }
    //Time Complexity:O(1)
    bool empty() {
        return s.empty();
    }
};
