#define ROW 3
#define COL 3
//函数声明
void IntBoard(char board[ROW][COL],int row,int col);
void DisplayBoard(char board[ROW][COL],int row,int col);
void playermove(char board[ROW][COL],int row,int col);
void computermove(char board[ROW][COL],int row,int col);
char iswin(char board[ROW][COL],int row,int col);