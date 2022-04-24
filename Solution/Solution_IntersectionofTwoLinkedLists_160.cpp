struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
  };
 
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


