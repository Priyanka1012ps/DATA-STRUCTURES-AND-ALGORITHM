/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(!head) return head;
		Node* _res = nullptr;
		auto _curr = head;
		while(_curr){
			Node* _newNode = new Node(_curr->val);
			auto _next = _curr->next;
			_newNode->next = _next;
			_curr->next = _newNode;
			_curr = _next;
		}
		_curr = head;
		while(_curr){
			auto _rand = _curr->random;
			if(_rand){
				_curr->next->random = _rand->next;
			}
			auto _next = _curr->next->next;
			_curr = _next;
		}
        while(head){
			auto _next = head->next->next;
			if(!_res){
				_res = head->next;
				_curr = _res;
			}else{
				_curr->next = head->next;
				_curr = _curr->next;
			}
			
			head->next = _next;
			head = head->next;
		}
		return _res;
		
    }
};