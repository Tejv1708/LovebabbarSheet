// Simply by using the basic approach of inorder and preorder .
//Happy Coding :) 

int preIndex = 0 ;
     TreeNode * helper( vector<int> &pre ,vector<int> &in , int is , int ie ){
         if(is > ie){
             return NULL;
         }
         TreeNode* root = new TreeNode(pre[preIndex]) ;
         preIndex++ ;
         int inIndex = 0 ;
         for(int i =is ; i<= ie ; i++){
             if(in[i] == root->val){
                 inIndex=i ;
                 break ;
             }
         }
         root->left = helper(pre , in, is , inIndex-1) ;
         root->right = helper(pre, in , inIndex + 1 , ie) ;
         return root ;
     }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
      // Approach ..?
       TreeNode *ans = helper(preorder , inorder , 0 , preorder.size()-1) ;
        return ans ;
    }
