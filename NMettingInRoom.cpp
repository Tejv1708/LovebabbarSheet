 int maxMeetings(int start[], int end[], int n)
    {
       vector<pair<int , int >> mp ;
       for(int i= 0 ; i<n ; i++){
           mp.push_back({end[i] , start[i]});
       }
       sort(mp.begin() , mp.end());
           pair<int , int > stopper = mp[0] ;
           int count=1 ;
           for(int i=1 ; i< n ; i++){
               if(mp[i].second > stopper.first ){
                   count++ ;
                   stopper = mp[i] ;
               }
           }
       return count ;
       
    }
