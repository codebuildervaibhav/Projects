// a.	Read a string, replace string, perform pattern matching, find and replace any occurrences of a pattern
#include <string.h>
#include <bits/stdc++.h>
using namespace std;
 /*
void modifyString(string& s, string& s1,
                  string& s2)
{
    string ans = "";
 
    for (int i = 0; i < s.length(); i++) {
 
        int k = 0;
 
     
        if (s[i] == s1[k]
            && i + s1.length()
                   <= s.length()) {
 
            int j;
 
         
            for (j = i; j < i + s1.length(); j++) {
 
                if (s[j] != s1[k]) {
                    break;
                }
                else {
                    k = k + 1;
                }
            }
 
            
            if (j == i + s1.length()) {
                ans.append(s2);
                i = j - 1;
            }
             else {
                ans.push_back(s[i]);
            }
        }
         else {
            ans.push_back(s[i]);
        }
    }
 
    cout << ans;
}
 */


void  modifyString(string& S, string& S1 )
{
    string S = "geeksforgeeks";
    string S1 = "eeks";
    int k = S1.size();
    for (int i = 0; i < S.size(); i++)
     {
         if( S.substr(i,k+i)  ==  S1)
         S=S.substr(i,k+i);
         }
         cout<< S;
}
int main()
{
    string S = "geeksforgeeks";
    string S1 = "eeks";
          modifyString(S, S1 );
    return 0;

//   string S2 = "ok";
//    modifyString(S, S1, S2);
}


