#define ROWS 11
#define COLS 11
#define ROW  ROWS-2
#define COL  COLS-2
#define EASY_COUNT 10
void InitBoard (char board[ROWS][COLS],int rows,int cols,char set);
void DisplayBoard(char board[ROWS][COLS],int rows,int cols);
void SetMine(char board[ROWS][COLS],int rows,int cols);
void FindMine(char mine[ROWS][COLS],char show [ROWS][COLS],int rows,int cols);
int Num(char mine[ROWS][COLS],int x,int y); 