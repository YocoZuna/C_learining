#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int CheckforWin(char board[10])
{
    if (board[1]=='X' && board[2]=='X'&& board[3]=='X') return 1;
    if (board[4]=='X' && board[5]=='X'&& board[6]=='X') return 1;
    if (board[7]=='X' && board[8]=='X'&& board[9]=='X') return 1;
    if (board[1]=='X' && board[4]=='X'&& board[7]=='X') return 1;
    if (board[2]=='X' && board[5]=='X'&& board[8]=='X') return 1;
    if (board[3]=='X' && board[6]=='X'&& board[9]=='X') return 1;
    if (board[1]=='X' && board[5]=='X'&& board[9]=='X') return 1;
    if (board[3]=='X' && board[5]=='X'&& board[7]=='X') return 1;
    
    if (board[1]=='O' && board[2]=='O'&& board[3]=='O') return 2;
    if (board[4]=='O' && board[5]=='O'&& board[6]=='O') return 2;
    if (board[7]=='O' && board[8]=='O'&& board[9]=='O') return 2;
    if (board[1]=='O' && board[4]=='O'&& board[7]=='O') return 2;
    if (board[2]=='O' && board[5]=='O'&& board[8]=='O') return 2;
    if (board[3]=='O' && board[6]=='O'&& board[9]=='O') return 2;
    if (board[1]=='O' && board[5]=='O'&& board[9]=='O') return 2;
    if (board[3]=='O' && board[5]=='O'&& board[7]=='O') return 2;

    return 0 ;
}
void DrawBoard(char board[10])
{
    //Header
 printf("\n\n\n\t\tTic Tac Toe\n");
 printf("\tPlayer 1(X)  -   Player 2(O)\n");
/**************************************BOARD*****************************************************************/
printf("\t\t   |   |\n");
printf("\t\t %c | %c | %c\n",board[1],board[2],board[3]);
printf("\t\t___|___|___\n");
printf("\t\t   |   |\n");
printf("\t\t %c | %c | %c\n",board[4],board[5],board[6]);
printf("\t\t___|___|___\n");
printf("\t\t   |   |\n");
printf("\t\t %c | %c | %c\n\n",board[7],board[8],board[9]);

/**************************************BOARD*****************************************************************/

}
int  MarkBoard(char board[10],int player,int mark)
{
    if (mark == 1)
    {
       if (board[player]=='0')
       {
        printf("Ivalid move!\n");
        printf("Player1, enter your number:\n");
        scanf("%d",&player);
        if(player>9){
            printf("Invaild number!\n");
            printf("Player1, enter your number:\n");
            scanf("%d",&player);
        }
        
        MarkBoard(board,player,player);
       } 
       return board[player] = 'X';
    }
    else
    {
        if (board[player]=='X')
       {
        printf("Ivalid move!\n");
        printf("Player2, enter your number:\n");
        scanf("%d",&player);
        if(player>9){
            printf("Invaild number!\n");
            printf("Player2, enter your number:\n");
            scanf("%d",&player);
        }
        
        MarkBoard(board,player,player);
       } 
        return board[player] = 'O';
    }
    
}
char board[10] = {'0','1','2','3','4','5','6','7','8','9'};
int main(void)
{
    
    int playerOne,playerTwo,player; // Array to determine which player

    DrawBoard(board);
    while(CheckforWin(board)==0)
    {   
        
        player=1;
        //player 1
        printf("Player1, enter your number:\n");
        scanf("%d",&playerOne);
        if(playerOne>9){
            printf("Invaild number!\n");
            printf("Player1, enter your number:\n");
            scanf("%d",&playerOne);
        }
        
        MarkBoard(board,playerOne,player);
        DrawBoard(board);
        if (CheckforWin(board)==1)
        {
            printf("==>Player 1 won!");
            printf("\a");
            break;
        }

        player=2;
        //player 2
        printf("Player2, enter your number:\n");
        scanf("%d",&playerTwo);
        if(playerTwo>9){
            printf("Invaild number!\n");
            printf("Player2, enter your number:\n");
            scanf("%d",&playerTwo);
        }
        MarkBoard(board,playerTwo,player);
        DrawBoard(board);
        if (CheckforWin(board)==2)
        {
            printf("==>Player 2 won!");
            printf("\a");
            break;
        }
    }
}



