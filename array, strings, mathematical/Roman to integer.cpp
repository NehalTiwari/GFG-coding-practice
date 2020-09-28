/*OM NAMAH SHIVAY!*/
class Solution {
public:
    int value(char r){ /*function to take values of roman symbols*/
        if(r=='I')
            return 1;
        if(r=='V')
            return 5;
        if(r=='X')
            return 10;
        if(r=='L')
            return 50;
        if(r=='C')
            return 100;
        if(r=='D')
            return 500;
        if(r=='M')
            return 1000;
       
        return -1;
    }
    int romanToInt(string s) { /*function to convert roman value to decimal number*/
        int res=0; /*stores final result*/
        int n= s.length();
        /*main for loop begins here*/
        for(int i=0;i<n;i++){
            int s1= value(s[i]); //taking value of first element
            if(i+1<n){//first if loop begins
                int s2= value(s[i+1]); //taking value of secong element
                
                /*comparing s1 and s2*/
                if(s1>=s2){  
                    res=res+s1;
                }
                else if(s2>s1){
                    res=res+s2-s1;
                    i++;
                }
            } //first if loop ends
            else
                res=res+s1;
        }
        /*main for loop ends here*/
        return res;
    }
};
