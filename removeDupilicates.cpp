	string removeDuplicates(string str) {
	  unordered_map<char , int > m ;
	  string ans = "";
	  for(auto ch : str){
	      if(m[ch]==0){
	          m[ch]++;
	          ans += ch;
	      }
	  }
	  return ans ;
	}
