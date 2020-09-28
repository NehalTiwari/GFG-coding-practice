/*OM NAMAH SHIVAY!*/
class Solution {
public:
    bool isPalindrome(int x) {
    
        
        if(x<0){
            return false;
        }
        if(x/10<1)
            return true;
        /*converted to string*/
            string str= to_string(x);
            /*check if string is palindrome*/
            int i, length;
            int flag = 0;
            int n = str.length();
    
           for(i=0;i<n/2;i++){
           if(str[i] != str[n-i-1]){
            flag = 1;
            break;}
           }
            if(flag==1)
                return false;
            else
                return true;
        
        
        
    }
};
