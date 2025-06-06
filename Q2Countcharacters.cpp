/*You are given an array of strings words and a string chars.

A string is good if it can be formed by characters from chars (each character can only be used once for each word in words).

Return the sum of lengths of all good strings in words.

Example 1:

Input: words = ["cat","bt","hat","tree"], chars = "atach"
Output: 6
Explanation: The strings that can be formed are "cat" and "hat" so the answer is 3 + 3 = 6.
Example 2:

Input: words = ["hello","world","leetcode"], chars = "welldonehoneyr"
Output: 10
Explanation: The strings that can be formed are "hello" and "world" so the answer is 5 + 5 = 10 */



#include <vector>
#include <iostream>
using namespace std;


class Solution {
public:
    int countCharacters(vector<string>& words, string chars)
     {
        int ans=0;
        vector<int>hash(26,0);
        for(auto it : chars)
        {
            hash[it -'a']++;

        }

        for(auto it: words)
        {
             vector<int>hash1(26,0);
             for(auto it2: it)
              {
              hash1[it2 -'a']++;
              }



             bool ok =true;
             for(int i=0; i<26; i++)
             {
                if(hash1[i]>hash[i])
                {
                    ok =false;
                    break;
                }
             }


             if(ok == true)
             {
                ans += it.length();

             }


        }
        return ans;

        }
    
};