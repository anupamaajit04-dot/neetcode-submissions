#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    string encode(vector<string>& strs) {
        string encoded = "";
        for (const string& s : strs) {
            // Append length, '#' delimiter, and the string itself
            encoded += to_string(s.length()) + "#" + s;
        }
        return encoded;
    }

    vector<string> decode(string s) {
        vector<string> decoded;
        int i = 0;
        
        while (i < s.length()) {
            // Find the '#' delimiter
            int j = i;
            while (s[j] != '#') {
                j++;
            }
            
            // Extract the length number
            int len = stoi(s.substr(i, j - i));
            
            // Extract the string and push it to the results
            decoded.push_back(s.substr(j + 1, len));
            
            // Move pointer to the start of the next encoded string
            i = j + 1 + len;
        }
        
        return decoded;
    }
};