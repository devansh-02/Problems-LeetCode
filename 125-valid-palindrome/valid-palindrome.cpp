class Solution {
public:
    char toLowerCase(char ch)
    {
        if(ch>='a' && ch<='z')
        {
            return ch;
        }
        else
        {
            char temp=ch-'A'+'a';
            return temp;
        }
    }
    bool isAlphaNum(char ch){
        if((ch>='A' && ch<='Z')||(ch>='a' && ch<='z') || (ch>='0' && ch<='9')){
            return true;
        }
            
            return false;
            
        }
    
    bool isPalindrome(string s) {
        int start=0;
        int end=s.size()-1;
        while(start<end){
            while(start<end && !isAlphaNum(s[start])) start++;
            while(start<end && !isAlphaNum(s[end])) end--;

            if(toLowerCase(s[start])!= toLowerCase(s[end]))
            {
                return false;
            }
           
                start++;
                end--;
            
        }
        return true;
    }
};