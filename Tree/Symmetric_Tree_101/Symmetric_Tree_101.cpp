#include <queue> 

class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        queue<TreeNode*> q;
        if(root != NULL){
            q.push(root->left);
            q.push(root->right);
             while(!q.empty()){
                 TreeNode* t1 = q.front();
                 q.pop();
                 TreeNode* t2 = q.front();
                 q.pop();
                 
                 if(t1==NULL && t2==NULL) continue;
                 else if(t1==NULL || t2==NULL || t1->val!= t2->val) return false;
                 else{
                     q.push(t1->left);
                     q.push(t2->right);
                     q.push(t1->right);
                     q.push(t2->left);
                 }
             }
        }
        return true;
    }
};