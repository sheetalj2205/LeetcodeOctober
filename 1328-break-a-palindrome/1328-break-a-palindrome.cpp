class Solution {
public:
    string breakPalindrome(string palindrome) {
        //AC in first go
        //find length of string
        int len = palindrome.size();
        //if its's len is 1 then return empty string
        if(len == 1){
            return "";
        }
        //take a flag to check if all chars are 'a' or not
        bool flag = true;
        for(int i = 0; i<len/2; i++){
            if(palindrome[i] - 'a' > 0){
                palindrome[i] = 'a';
                flag = false;
                break;
            }
            
        }
        //if all chars are 'a' then replace last char with 'b'
        if(flag == true){
            palindrome[len-1] = 'b';
        }
        return palindrome;
    }
};