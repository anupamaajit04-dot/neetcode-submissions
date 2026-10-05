class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
       vector<unordered_set<char>> rows(9);
        vector<unordered_set<char>> columns(9);
        vector<unordered_set<char>> boxes(9);
       
       for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if (board[i][j] == '.') {
                    continue;
                }
        
         char number = board[i][j];
         int box = (i / 3) * 3 + (j / 3);
           if (rows[i].count(number) ||
                    columns[j].count(number) ||
                    boxes[box].count(number)) {

                    return false;
                }

                rows[i].insert(number);
                columns[j].insert(number);
                boxes[box].insert(number);
        }
       }
       return true;
    }
};
