// By Using the dequeue 
This method take low time as compare to  next one .../

vector<string> letterCombinations(string digits) {

if (digits.empty()) {
            return vector<string>();
        }
        vector<string> words{ " ", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" };
        deque<string> q;
        q.push_back("");

        for (char digit : digits) {
            int d = digit - '0';
            for (int i = q.size(); i > 0; i--) {
                string token = q.front();
                q.pop_front();
                for (char ch : words[d]) {
                    q.push_back(token + ch);
                }
            }
        }

        return vector<string>(q.begin(), q.end());
    }

// Second Solution for this question 
 const vector<string> pad = {
        "", "", "abc", "def", "ghi", "jkl",
        "mno", "pqrs", "tuv", "wxyz" 
    };
    vector<string> letterCombinations(string digits) {
     if(digits.empty())
         return {} ;
             vector <string> result ;
             result.push_back("") ;
             for(auto digit : digits){

             vector<string > tmp ;
                 for(auto candidate : pad[digit - '0']){
                     for(auto s : result ){
                         tmp.push_back(s+candidate) ;
                     }
                 }
                 result.swap(tmp) ;
                 
             }
        
    
    return result ;
    }
