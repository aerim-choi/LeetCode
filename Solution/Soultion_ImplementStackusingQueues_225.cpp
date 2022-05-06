class MyStack {
    queue<int> que;
    
public:
    //TimeComplexity: O(N)
    void push(int x) {
        que.push(x);                //큐 원소 삽입(큐 맨 뒤에 추가)
        for (int i = 0; i < que.size() - 1; i++) {
            que.push(que.front()); //큐 맨 앞 원소를 큐 맨 뒤에 추가
            que.pop();             //큐 맨 앞 원소 삭제
        }

    }
    //TimeComplexity: O(1)
    int pop() {
        int n;
        n = que.front();
        que.pop();
        return n;
    }
    //TimeComplexity: O(1)
    int top() {
        return que.front();
    }
    //TimeComplexity: O(1)
    bool empty() {
        return que.empty();
    }
};
