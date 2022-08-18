class Solution {
  public:
  
    int findMax (Node *root , int &maxi){
        if(root == NULL)
        return 0 ;
        
        int lh = findMax(root->left , maxi ) ;
        int rh = findMax(root->right , maxi ) ;
        maxi = max(maxi , lh+rh+1);
        return 1+ max(lh , rh );
    }
    int diameter(Node* root) {
   
    int maxi = 0 ;
    findMax(root , maxi);
    return maxi ;
  
    
    }
};
