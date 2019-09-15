#include<stdio.h>
#include<conio.h>
#include<stdlib.h>>
char a[9]={'1','2','3','4','5','6','7','8','9'};
int k;
void clrscr()
{
    system("cls");
}
void game()
{printf("\n\n\n\t\t TIC TAC TOE\n");
}
void show()
{
printf("\n\n\t\t -----|-----|-----\n");
printf("\t\t%c \t%c \t%c\n",a[0], a[1], a[2]);
printf("\t\t -----|-----|-----\n");
printf("\t\t%c\t%c\t%c\n",a[3],a[4],a[5]);
printf("\t\t -----|-----|-----\n");
printf("\t\t%c\t%c\t%c\n",a[6],a[7],a[8]);
printf("\t\t -----|-----|-----\n");
}
void check(char p)
{int i;
if(k==0){
for(i=0;i<9;i++)
{
 if(a[i]==p)
  { a[i]='x';
  k=1;
    break;
  }}}
  else
  {
  for(i=0;i<9;i++)
{
 if(a[i]==p)
  { a[i]='o';
  k=0;
   break;
  }}
   }}
 void choice()
 {
 char pos;
 printf("\nEnter postion(1-9)\n");

  fflush(stdin);
  scanf("%c",&pos);
  check(pos);
}
int logic()
{
if(((a[0]=='x'||a[0]=='X')&&(a[1]=='x'||a[1]=='X')&&(a[2]=='x'||a[2]=='X'))||((a[3]=='x'||a[3]=='X')&&(a[4]=='x'||a[4]=='X')&&(a[5]=='x'||a[5]=='X'))||((a[6]=='x'||a[6]=='X')&&(a[7]=='x'||a[7]=='X')&&(a[8]=='x'||a[8]=='X')))
{ return (100); }
else if(((a[0]=='x'||a[0]=='X')&&(a[3]=='x'||a[3]=='X')&&(a[6]=='x'||a[6]=='X'))||((a[1]=='x'||a[1]=='X')&&(a[4]=='x'||a[4]=='X')&&(a[7]=='x'||a[7]=='X'))||((a[2]=='x'||a[2]=='X')&&(a[5]=='x'||a[5]=='X')&&(a[8]=='x'||a[8]=='X')))
{ return (100); }
else if(((a[0]=='x'||a[0]=='X')&&(a[4]=='x'||a[4]=='X')&&(a[8]=='x'||a[8]=='X'))||((a[2]=='x'||a[2]=='X')&&(a[4]=='x'||a[4]=='X')&&(a[6]=='x'||a[6]=='X')))
{return (100);}
if(((a[0]=='o'||a[0]=='O')&&(a[1]=='o'||a[1]=='O')&&(a[2]=='o'||a[2]=='O'))||((a[3]=='o'||a[3]=='O')&&(a[4]=='o'||a[4]=='O')&&(a[5]=='o'||a[5]=='O'))||((a[6]=='o'||a[6]=='O')&&(a[7]=='o'||a[7]=='O')&&(a[8]=='o'||a[8]=='O')))
{ return (200);}
else if(((a[0]=='o'||a[0]=='O')&&(a[3]=='o'||a[3]=='O')&&(a[6]=='o'||a[6]=='O'))||((a[1]=='o'||a[1]=='O')&&(a[4]=='o'||a[4]=='O')&&(a[7]=='o'||a[7]=='O'))||((a[2]=='o'||a[2]=='O')&&(a[5]=='o'||a[5]=='O')&&(a[8]=='o'||a[8]=='O')))
{ return(200); }
else if(((a[0]=='o'||a[0]=='O')&&(a[4]=='o'||a[4]=='O')&&(a[8]=='o'||a[8]=='O'))||((a[2]=='o'||a[2]=='O')&&(a[4]=='o'||a[4]=='O')&&(a[6]=='o'||a[6]=='O')))
{return(200);}
else
 return(300);
}
void refresh()
{
a[0]='1';
a[1]='2';
a[2]='3';
a[3]='4';
a[4]='5';
a[5]='6';
a[6]='7';
a[7]='8';
a[8]='9';
 }
 void end(){
 char s;
 printf("To exit press 'e' or enter to continue\n");
fflush(stdin);
scanf("%c",&s);
if(s=='e'||s=='E')
{exit(0);}}

void main()
{
int k,i;
char ch;
rep:
clrscr();
game();
show();
end();
choice();
for(i=0;i<9;i++)
{
clrscr();
show();
choice();
k=logic();
clrscr();
show();
if(k==100)
  { printf("\n player 1 won!!\n");
  refresh();
  goto res;}
else if(k==200)
  {printf("\n player 2 won!!\n");
  refresh();
  goto res;}
 }
 printf("!!draw!!\n");
 refresh();
res:
printf("\n Do you want to continue? Press(Y/N)\n");
 fflush(stdin);
 scanf("%c",&ch);
 if(ch=='y'||ch=='Y')
 {goto rep;}
 else if(ch=='n'||ch=='N')
  {exit(0);}
 else
  goto res;
getch();
}




