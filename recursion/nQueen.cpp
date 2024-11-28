#include <bits/stdc++.h>

using namespace std;

bool isSafe(int row, int col, vector<string>& board, int n)
{
    // Top diagonal
    int dupCol=col, dupRow=row;
    while(col>=0 && row>=0)
    {
        if(board[row][col]=='Q') return false;
        row--;
        col--;
    }

    // Bottom diagonal
    col=dupCol, row=dupRow;
    while(col>=0 && row<n)
    {
        if(board[row][col]=='Q') return false;
        row++;
        col--;
    }

    col=dupCol, row=dupRow;
    // left Side
    while(col>=0)
    {
        if(board[row][col]=='Q') return false;
        col--;
    }

    return true;
}

void queen(int col, int n, vector<string>& board, vector<vector<string>>& res)
{
    if(col==n){
        res.push_back(board);
        return;
    }

    for(int row=0;row<n;row++)
    {
        
        if (isSafe(row, col, board, n)){
            board[row][col]='Q';
            queen(col+1, n, board, res);
            board[row][col]='.';
        }
    }

}

int main()
{
    int n=4;
    string s(n,'.');
    vector<string> board(n, s);
    vector<vector<string>> res;
    for(int i=0;i<n;i++)
    {
        board[i]=s;
        // cout << board[i] << " ";
    }
    queen(0, n, board, res);

    for(int i=0;i<res.size();i++)
    {
        for(int j=0;j<res[i].size();j++)
        {
            for(int k=0;k<res[i][j].size();k++)
            {
                if(res[i][j][k]=='Q'){
                    cout << k << " ";
                }
            }
        }
        cout<<endl;
    }
}