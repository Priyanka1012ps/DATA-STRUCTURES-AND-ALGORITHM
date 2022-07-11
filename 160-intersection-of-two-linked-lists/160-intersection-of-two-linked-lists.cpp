class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
//         
//         ListNode* d1=new ListNode();
//         d1=headA;
//         ListNode* d2= new ListNode();
//         d2=headB;
//         int l1=0;
//             int l2=0;
//         while(d1!=NULL and d1->next!=NULL)
//         {
//             d1=d1->next;
//             l1++;
//         }
//         while(d2!=NULL and d2->next!=NULL)
//         {
//             d2=d2->next;
//             l2++;
//         }
        
//         int diff=abs(l1-l2);
//         int m= max(l1,l2);
//         d1= headA;
//         d2=headB;
//        if(l1>l2)
//        {
//            for(int i=1;i<=diff;i++)
//                d1=d1->next;
//        }
//         else
//         {
//             for(int i=1;i<=diff;i++)
//                d2=d2->next;
//        }
//         while(d1!=d2)
//         {
//           d1=  d1->next;
//            d2= d2->next;
//         }
//         if(d1)
//             return d1;
//         return NULL;
        
//         }
       ListNode* a= headA;
        ListNode* b= headB;
        if(headA==NULL or headB==NULL)
            return NULL;
        while(a!=b)
        {
            a=a==NULL? headB:a->next;
            b=b==NULL ?headA:b->next;
        }
        return a;
    }
        
};