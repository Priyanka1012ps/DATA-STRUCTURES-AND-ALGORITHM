class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
//          ListNode* ptr1 = headA;
//         ListNode* ptr2 = headB;
//         int c1,c2;
//         c1 = c2 = 0;
//         while(ptr1)
//         {
//             c1++;
//             ptr1 = ptr1->next;
//         }
//         while(ptr2)
//         {
//             c2++;
//             ptr2 = ptr2->next;
//         }
//         ptr1 = headA;
//         ptr2 = headB;
        
//         int diff = abs(c1-c2);
//         if(c1>c2)
//         {
//             for(int i=0;i<diff;i++)
//             {
//                 ptr1 = ptr1->next;
//             }
//         }
//         else
//         {
//             for(int i=0;i<diff;i++)
//             {
//                 ptr2 = ptr2->next;
//             }
//         }
//         while(ptr1 != ptr2)
//         {
//             ptr1 = ptr1->next;
//             ptr2 = ptr2->next;
//         }
//         if(ptr1) return ptr1;
//         return NULL;
//     }
        ListNode* d1=new ListNode();
        d1=headA;
        ListNode* d2= new ListNode();
        d2=headB;
        int l1=0;
            int l2=0;
        while(d1!=NULL and d1->next!=NULL)
        {
            d1=d1->next;
            l1++;
        }
        while(d2!=NULL and d2->next!=NULL)
        {
            d2=d2->next;
            l2++;
        }
        
        int diff=abs(l1-l2);
        int m= max(l1,l2);
        d1= headA;
        d2=headB;
       if(l1>l2)
       {
           for(int i=1;i<=diff;i++)
               d1=d1->next;
       }
        else
        {
            for(int i=1;i<=diff;i++)
               d2=d2->next;
       }
        while(d1!=d2)
        {
          d1=  d1->next;
           d2= d2->next;
        }
        if(d1)
            return d1;
        return NULL;
        
        }
        
};