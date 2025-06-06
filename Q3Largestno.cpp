/*You are given a string num representing a large integer. An integer is good if it meets the following conditions:

It is a substring of num with length 3.
It consists of only one unique digit.
Return the maximum good integer as a string or an empty string "" if no such integer exists.

Note:

A substring is a contiguous sequence of characters within a string.
There may be leading zeroes in num or a good integer.*/

#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    string largestGoodInteger(string num) 
    {
        int n = num.length();

        char maxchar = ' ';

        for(int i=2 ;i<n ; i++)
        {
            if(num[i]==num[i-1] && num[i]== num[i-2])
            {
                maxchar = max(maxchar , num[i]);
            }
        }
        if(maxchar == ' ')
        {
            return "";
        }
        return string(3, maxchar);


        
    }
};