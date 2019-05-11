#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<unistd.h>

//unsigned int;

void cadre3(int x1,int x2,int y1, int y2)
{
int i;
// Je begin avec les lignes horizontales
  for(i=x1;i<=x2;i++)
  {
  gotoxy(i,y1);
  printf("%c",'*');
  gotoxy(i,y2);
  printf("%c",'*');
  }
  //Ensuite les lignes verticales
  for(i=y1;i<=y2;i++)
  {
  gotoxy(x1,i);
  printf("%c",'*');
  gotoxy(x2,i);
  printf("%c",'*');
  }
  //fin des verticales
  gotoxy(x1,y1);
    printf("%c",218);
    gotoxy(x1,y2);
  printf("%c",192);
      gotoxy(x2,y1);
      printf("%c",191);
      gotoxy(x2,y2);
      printf("%c",217);
  }

void color(int t,int f)
{ //Il ya 256 code ASCI
HANDLE
H=GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(H,f*16+t);
}

void horizontale(int x1,int x2,int y1, int y2)
{
int i;
  for(i=x1;i<=x2;i++)
  {
  gotoxy(i,y1);
  printf("%c",196);
  gotoxy(i,y2);
  printf("%c",196);
  }
}

void gotoxy(int x, int y)
{
HANDLE hConsoleOutput;
COORD dwCursorPosition;
dwCursorPosition.X=x;
dwCursorPosition.Y=y;
hConsoleOutput=GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleCursorPosition(hConsoleOutput,dwCursorPosition);
}

void verticale(int x1,int x2,int y1, int y2)
{ int i;
 for(i=y1;i<=y2;i++)
  {
  gotoxy(x1,i);
  printf("%c",179);
  gotoxy(x2,i);
  printf("%c",179);
  }
}

void main()
{
    //Sleep(500);
cadre3(58,102,20,35); color(1,0);
gotoxy(65,24); printf("1- COMMENCER UNE NOUVELLE PARTIE");
gotoxy(65,27); printf("2- RETOUR");
Sleep(300);
cadre3(60,100,22,33);
gotoxy(65,30); printf("CHOIX"); color(7,0); gotoxy(74,30);
//print("1-JOUER\n\n\n2-AIDE\n\n\n3-QUITTER\n\n\n\nQue voulez vous faire?\t");

}
