class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        //accepted in 1 time- 
        string a1 = "";
        string a2 = "";
        
        for(int i = 0; i<word1.size(); i++){
            a1 += word1[i];
        }
        for(int i = 0; i<word2.size(); i++){
            a2 += word2[i];
        }
        return a1==a2;
    }
};