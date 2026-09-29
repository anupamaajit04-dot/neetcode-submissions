#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        // This 2D vector will hold the entire triangle
        vector<vector<int>> triangle;
        
        for (int i = 0; i < numRows; i++) {
            // Create a new row with exactly 'i + 1' elements.
            // We initialize every element in this row to 1.
            vector<int> row(i + 1, 1);
            
            // We only need to calculate the *inner* elements.
            // The first (j = 0) and last (j = i) elements always stay 1.
            for (int j = 1; j < i; j++) {
                // An inner element is the sum of the two elements directly above it
                row[j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
            }
            
            // Add this completed row to our main triangle
            triangle.push_back(row);
        }
        
        return triangle;
    }
};