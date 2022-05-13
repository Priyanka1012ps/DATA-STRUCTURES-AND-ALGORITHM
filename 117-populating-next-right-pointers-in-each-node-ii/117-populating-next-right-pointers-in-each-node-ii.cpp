class Solution {
public:
    Node* connect(Node* root) {
        queue<Node*> q;
        Node* newRoot=root;
        if(root==NULL)
            return root;
        q.push(root);
        while(!q.empty()){
            int sz=q.size();
            while(sz>0){
                Node* temp=q.front();            
                q.pop();
                if(temp->left!=NULL)
                    q.push(temp->left);
                if(temp->right!=NULL)    
                    q.push(temp->right);
                sz--;
                if(sz==0)
                    temp->next=NULL;
                else
                    temp->next=q.front();
                
            }
        }
        return newRoot;
    }
};