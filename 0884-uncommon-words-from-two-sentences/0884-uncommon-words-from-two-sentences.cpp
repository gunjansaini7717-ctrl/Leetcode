class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string, int>count;
        string word;

        for(char c : s1 + " "){
            if(c == ' '){
                count[word]++;
                word = "";
            }
            else{
                word += c;
            }
        }
        for(char c : s2 + " "){
            if(c == ' '){
                count[word]++;
                word = "";
            }
            else{
                word += c;
            }
        }
        vector<string>result;
        for(auto& [w, freq] : count){
            if(freq == 1){
                result.push_back(w);
            }
        }
    return result;
    }
};