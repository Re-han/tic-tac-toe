#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int player,comp;
void clrscr()
    {
    system("cls");
    }
char choice()
   {
    char ch;
    printf("\n1.Rock");
    printf("\n2.Scissor");
    printf("\n3.Paper");
    printf("\n4.Exit");
    printf("\nEnter your choice:\n");
    scanf("%c",&ch);
    return ch;
   }
void logic()
{ int t;
    lab:
    srand(time(NULL));
    comp=rand()%3;
    if(comp==0)
        goto lab;

    player=choice();

    switch(player)
    {
    case '1': //rock

          if(comp==1)
      {
          printf("\nComputer=Rock");
        printf("\nPlayer=Rock");
          printf("\nDRAW");
      }
      else if(comp==2)
      {
        printf("\nComputer=Scissor");
        printf("\nPlayer=Rock");
        printf("\nPlayer won!!");
      }
      else {
        printf("\nComputer=Paper");
        printf("\nPlayer=Rock");
        printf("\nComputer won");
      }
      break;

    case '2':
        if(comp==1)
        {
            printf("\nComputer=Rock");
        printf("\nPlayer=Scissor");
        printf("\nComputer won");
        }
        else if(comp==2)
            {
                printf("\nComputer=Scissor");
        printf("\nPlayer=Scissor");
        printf("\nDRAW");
            }
        else
            {
                printf("\nComputer=Paper");
        printf("\nPlayer=Scissor");
        printf("\nPlayer won");
            }
            break;

    case '3':
        if(comp==1)
        {
            printf("\nComputer=Rock");
            printf("\nPlayer=Paper");
            printf("\nPlayer won");
        }
        else if(comp==2)
        {
            printf("\nComputer=Scissor");
            printf("\nPlayer=Paper");
            printf("\nComputer won");
        }
        else
        {
            printf("\nComputer=Paper");
            printf("\nPlayer=Paper");
            printf("\nDRAW");
        }
        break;
    case '4':
        exit(0);
        break;

    default:
        printf("\Invalid choice");
        break;

    }

}
void main(){
   char s;
   labels:
   clrscr();
   logic();
   printf("\nDo you want to continue?(Y/N)");
   fflush(stdin);
   scanf("%c",&s);
   if(s=='y'||s=='Y')
    goto labels;
   getch();
}
