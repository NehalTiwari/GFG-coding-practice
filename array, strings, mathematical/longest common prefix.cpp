class Solution {
public:
    string commonPrefixoftwo(string s1, string s2){ //function to find common prefix of two strings at a time
         string result; 
        int n1 = s1.length(), n2 = s2.length(); 
  
         // Compare str1 and str2 
        for (int i=0, j=0; i<=n1-1&&j<=n2-1; i++,j++) 
       { 
             if (s1[i] != s2[j]) 
                break; 
            result.push_back(s1[i]); 
        } 
        
         return (result); 
    }
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==0)
            return "";
        string prefix= strs[0];
       int m= strs.size();
         for (int i=1; i<=m-1; i++) 
        prefix = commonPrefixoftwo(prefix, strs[i]); 
  
        return (prefix); 
    }
};
