class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        queue<pair<string , int>> q;
        q.push({beginWord , 1});
        unordered_set<string> st(wordList.begin() , wordList.end());

        while(!q.empty()){
            string w = q.front().first;
            int steps = q.front().second;
            q.pop();
            if(w == endWord) return steps;


            for(int i = 0;i  < w.length() ; i++){
                char og  = w[i];

                for(char ch = 'a'; ch <='z'; ch ++){
                    w[i] = ch;
                    if(st.find(w) != st.end()){
                        st.erase(w);
                        q.push({w , steps + 1});
                    }
                }
                w[i] = og;
            }
        }
        return 0;
    }
};