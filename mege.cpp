class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        priority_queue<pair<int,ListNode*>, vector<pair<int,ListNode*>>, greater<pair<int,ListNode*>>> minHeap;
        
        for(ListNode* list: lists) {
            if (list) {
                minHeap.push({list->val, list});
            }
        }
        
        ListNode* head = new ListNode(0);
        ListNode* ans = head;
        
        while(!minHeap.empty()) {
            
            pair<int, ListNode*> front = minHeap.top();
            minHeap.pop();
            
            int val = front.first;
            ListNode* ref = front.second;
            
            head->next = new ListNode(val);
            head = head->next;
            
            if (ref->next) {
                minHeap.push({ref->next->val, ref->next});
            }
        }
        
        return ans->next;
    }
};
