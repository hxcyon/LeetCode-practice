class Solution {
public:
    int countBattleships(vector<vector<char>>& board) {
        int i, j;
        int count = 0;
        
        for(i = 0; i < board.size(); i++){
            for(j = 0; j < board[i].size(); j++){
                if(board[i][j] == 'X'){
                    
                    if(i != 0 && board[i-1][j] == 'X')
                        continue;
                    
                    while(j < board[i].size() && board[i][j] == 'X'){
                        j++;
                    }
                    count++;
                }
            }
        }
        return count;
    }
};
