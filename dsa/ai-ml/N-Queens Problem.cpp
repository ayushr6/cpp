#include<bits/stdc++.h>
using namespace std;
#define n 6
void print_board(int board[n][n]){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<board[i][j]<<" ";
        }
        cout<<""<<endl;
    }
}

bool is_move_safe(int board[n][n], int row, int col){
    int i,j;
    for(i=0;i<col;i++) if(board[row][i]) return false;
    i=row, j=col;
    while(i>=0 && j>=0) {
        if(board[i][j]) return false;
        i--;
        j--;
    }
    i=row, j=col;
    while(i<n && j>=0) {
        if(board[i][j]) return false;
        i++;
        j--;
    }
    return true;
}

bool solve_n_queen(int board[n][n], int col){
    if(col>=n) return true;
    for(int i=0;i<n;i++){
        if(is_move_safe(board, i, col)){
            board[i][col] = 1;
            if(solve_n_queen(board, col+1)) return true;
            board[i][col] = 0;
        }
    }
    return false;
}

int main(){
    int board[n][n];
    for(int i=0;i<n;i++){for(int j=0;j<n;j++){board[i][j]=0;}};
    if(!(solve_n_queen(board, 0))) cout<<"Board not solvable!!"<<endl;
    else print_board(board);
    cout<<"Solved!!"<<endl;
}