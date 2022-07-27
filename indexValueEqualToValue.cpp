	vector<int> valueEqualToIndex(int arr[], int n) {
	  
	  
  vector <int> v ;
	 for(int i= 0 ; i< n ; i++){
	     int val = arr[i];
	     int reqIn = i+1 ;
	     if(val == reqIn ){
	        v.push_back(val);
	     }
	 }
	 return v ;
	}
