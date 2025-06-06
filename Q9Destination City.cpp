/*You are given the array paths, where paths[i] = [cityAi, cityBi] means there exists a direct path going from cityAi to cityBi. Return the destination city, that is, the city without any path outgoing to another city.

It is guaranteed that the graph of paths forms a line without any loop, therefore, there will be exactly one destination city.

 */
#include <vector>
#include <iostream>
#include <unordered_set>


using namespace std;

class Solution {
public:
    string destCity(vector<vector<string>>& paths) 
    {
       unordered_map<string, int> outDegree;

       for(auto& path: paths)
       {
           string from= path[0];
           string to = path[1];
            outDegree[from]++;   

            if(outDegree.find(to)== outDegree.end())
            {
                outDegree[to]=0;
            }


       }


       for (auto& entry : outDegree) 
       {
            if (entry.second == 0) 
            {
                return entry.first;
            }
        }
        return "";

        //outgoing snd ingoing arrows ke saath dealing hashmapss
        }

//unorederd set wla method used

    string destCity(vector<vector<string>>& paths)
     {
    unordered_set<string> hasOutgoing;

    // Step 1: Record all cities that have an outgoing path
    for (auto& path : paths)
        hasOutgoing.insert(path[0]);

    // Step 2: Check for the first city that has no outgoing path
    for (auto& path : paths) {
        if (!hasOutgoing.count(path[1])) {
            return path[1];  // Found the destination
        }
    }

    return "";  // Fallback (won't happen as per constraints)
}
};
