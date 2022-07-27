#include <bits/stdc++.h>
using namespace std ;

int getPairsCount(int arr[], int n, int k) {
       unordered_map<int,int>m;
      int ans=0;
   
       for(int i=0 ; i<n; ++i){
           if(m.find(k-arr[i])!=m.end()){
               ans+=m[k-arr[i]];
           }
           m[arr[i]]++;
          
   }
   return ans; 
   }
   int main(){
    int n1 = 4 ;
    int k1 = 2 ;
    int a[n1]={1,1,1,1} ;
    
    getPairsCount(a , n1 , k1);
    return 0 ;
   }