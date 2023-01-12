class Solution {
public:
    bool isPositionSafe(vector<vector<char>>& board , int temp, int row, int col)
    {
        for(int i=0;i<board.size();i++)
        {
//             looking into row
            if(board[row][i] == temp)
            return false;
            
//             loiking into col
            if(board[i][col] == temp)
            return false;
//             looking into sub grid
            if(board[row/3 *3 + i/3] [  col/3 * 3 +   (i%3)  ] == temp)
                return false;
    
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
     
        int s=board.size();
//         start iterating 
        for(int i=0;i<s;i++)
            
        {
//             second iteration inside first iteration
            for(int j=0;j<s;j++)
                
            {
//                 looking  for number
                if(board[i][j]!='.')
                {
                    int temp=board[i][j];
                    board[i][j]='@';
//                     looking for the valid position in the given sudoku
                    if(!isPositionSafe(board,temp,i,j))
                        return false;
//                     refill this position with the actual number
                    board[i][j]=temp;

                }
                   }
        }
        return true;
    }
};