queue<int> modifyQueue(queue<int> q, int k) {
   // add code here.
   queue<int> r;
   stack<int> t;
   
   while(k--){
       int a=q.front();
       t.push(a);
       q.pop();
       
   }
   
   while(!t.empty()){
       int b=t.top();
       r.push(b);
       t.pop();
   }
   
   while(!q.empty()){
       int c=q.front();
       r.push(c);
       q.pop();
   }
   
   return r;
}
