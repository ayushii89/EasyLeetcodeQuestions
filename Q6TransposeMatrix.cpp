/*Given a 2D integer array matrix, return the transpose of matrix.

The transpose of a matrix is the matrix flipped over its main diagonal, switching the matrix's row and column indices.
*/






#include <vector>
#include <iostream>
using namespace std;



class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix)
     {
        int m = matrix.size();
        int n = matrix[0].size();

        vector<vector <int>> result(n , vector<int>(m));  // space O (N*M)

        for(int i=0 ; i< m ; i++)
        {
            for(int j =0 ; j < n ; j++)
            {
                result[j][i]= matrix[i][j];
            }

        }
        //TC- O(M*N)
        //SC - O(1)
        return result;

        
        
    }
};

//FOLLOW UP Q 
//what is inpunt is square matrix 
// M*M
/* for(int i=0 ; i< n ; i++)
        {
            for(int j =i+1 ; j < n ; j++)
            {
                swap(arr[i][j], arr[j])
            }

        }

*/