/*Given an m x n binary matrix mat, return the number of special positions in mat.

A position (i, j) is called special if mat[i][j] == 1 and all other elements in row i and column j are 0 (rows and columns are 0-indexed).

*/
#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) 
    {
        int m = mat.size();
        int n = mat[0].size();

        vector<int> rowsum(m,0);
        vector<int> colsum(n,0);

        //precompute kr diye total no of 1 se 
        // rowsum= 0 , 0 , 0 , 0
        // colsum =0, 0, 0, 0

        for(int i=0; i< m ; i++)
        {
            for(int j=0; j<n ; j++)
            {
                if(mat[i][j]==1)
                {
                    rowsum[i]++;
                    colsum[j]++;
                }
            }
        }




        //check for special postions
        int ct=0;
         for(int i=0; i< m ; i++)
        {
            for(int j=0; j<n ; j++)
            {
                if(mat[i][j]==1 && rowsum[i]==1 && colsum[j]==1)
                ct++;
            }
        }
        return ct;


            
        }


        
    
};