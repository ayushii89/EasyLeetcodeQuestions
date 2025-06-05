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
//what is input is square matrix 
// M*M
/* for(int i=0 ; i< n ; i++)
        {
            for(int j =i+1 ; j < n ; j++)
            {
                swap(arr[i][j], arr[j])
            }

        }

*/
