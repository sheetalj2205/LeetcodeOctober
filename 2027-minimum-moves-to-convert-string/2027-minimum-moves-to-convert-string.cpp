class Solution {
public:
    int minimumMoves(string s) {
        int count = 0;
        for(int i = 0; i<s.size();){
            if(s[i] == 'O'){
                i+=1;
            }
            else{
                i+=3; 
                count++;
            }
           }
        return count;
    }
};