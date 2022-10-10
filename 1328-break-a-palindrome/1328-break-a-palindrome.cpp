class Solution {
public:
    string breakPalindrome(string palindrome) {
        int len = palindrome.size();
        if(len == 1){
            return "";
        }
        bool flag = true;
        for(int i = 0; i<len/2; i++){
            if(palindrome[i] - 'a' > 0){
                palindrome[i] = 'a';
                flag = false;
                break;
            }
            
        }
        if(flag == true){
            palindrome[len-1] = 'b';
        }
        return palindrome;
    }
};