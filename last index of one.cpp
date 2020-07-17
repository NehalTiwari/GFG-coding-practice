/*OM NAMAH SHIVAY!*/
#include<bits/stdc++.h>
using namespace std;
int main()
 {
     int t;
     cin >> t;
     for(int q=0;q<t;q++)
     {
         int ind=-1;
         string s;
         cin >> s;
         for(int i=0;i<s.length();i++)
         {
             if(s.at(i)=='1')
                ind=i;
         }
         cout << ind << endl;
     }
	return 0;
}
