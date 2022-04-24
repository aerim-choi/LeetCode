struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
  };

//방법1 O(N+M)/O(1)
class Solution {
public:
    int size(ListNode* list) {
        int cnt = 0;
        while (list) {
            list = list->next;
            cnt++;
        }
        return cnt;
    }

    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        if (headA == NULL || headB == NULL) {
            return NULL;
        }

        int cnta = size(headA);
        int cntb = size(headB);

        if (cnta < cntb) {
            for (int i = 0; i < cntb - cnta; i++) {
                headB = headB->next;
            }
        }
        else {
            for (int i = 0; i < cnta - cntb; i++) {
                headA = headA->next;
            }
        }

        while (headA != headB) { // headA와 headB가 주소가 같으면
            headA = headA->next;
            headB = headB->next;
        }

        return headA; //headA 리턴,headB리턴 시켜도 상관없음
    }
};

//방법2 O(N+M)/O(1)
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA==NULL ||headB==NULL)return NULL;
        
        ListNode* a_pointer = headA;
        ListNode* b_pointer = headB;
        
        while(a_pointer!=b_pointer){
            if(a_pointer==NULL){
                a_pointer=headB;
            }else{
                a_pointer=a_pointer->next;
            }
            if(b_pointer==NULL){
                b_pointer=headA;
            }else{
                b_pointer=b_pointer->next;
            }
        }
        return a_pointer;
    }
};
