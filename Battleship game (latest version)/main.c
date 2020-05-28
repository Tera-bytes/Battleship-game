#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
#include<unistd.h>

unsigned int;
/* la bibliotheque

         #include<unistd.h>

 permet de temporiser; la fonction à utiliser est:
           unsigned int;  (à mettre hors du main)
           Sleep(chiffre);
*/
//le debuggers ne fonctionne que dans les projets( ie les main)
// NB:puts et gets ne sont utilisé que pour des phrases ne contenant pas d'espace
/*
Comment utiliser le debugeer?? avant de l'utiiser, il faut se rassurer que tout le chemin d'access qui mène au programmes ne contient pas de caractères spéciaux
quelques caractères spéciaux sont: é,à,è l'espace, ?, §, et tant d'autres;
*/

float meilleur_pourcentage=0;
int cout_utile1=0,cout_inutile1=0,cout_utile2=0,cout_inutile2=0;

void gotoxy(int x, int y)
{
HANDLE hConsoleOutput;
COORD dwCursorPosition;
dwCursorPosition.X=x;
dwCursorPosition.Y=y;
hConsoleOutput=GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleCursorPosition(hConsoleOutput,dwCursorPosition);
}

void cadre(int x1,int x2,int y1, int y2)
{
int i;
// Je begin avec les lignes horizontales
  for(i=x1;i<=x2;i++)
  {
  gotoxy(i,y1);
  printf("%c",196);
  gotoxy(i,y2);
  printf("%c",196);
  }
  //Ensuite les lignes verticales
  for(i=y1;i<=y2;i++)
  {
  gotoxy(x1,i);
  printf("%c",179);
  gotoxy(x2,i);
  printf("%c",179);
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

void cadre1(int x1,int x2,int y1, int y2)
{
int i;
// Je begin avec les lignes horizontales
  for(i=x1;i<=x2;i++)
  {
  gotoxy(i,y1);
  printf("%c",157);
  gotoxy(i,y2);
  printf("%c",157);
  }
  //Ensuite les lignes verticales
  for(i=y1;i<=y2;i++)
  {
  gotoxy(x1,i);
  printf("%c",157);
  gotoxy(x2,i);
  printf("%c",157);
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

void cadre2(int x1,int x2,int y1, int y2)
{
int i;
// Je begin avec les lignes horizontales
  for(i=x1;i<=x2;i++)
  {
  gotoxy(i,y1);
  printf("%c",2);
  gotoxy(i,y2);
  printf("%c",2);
  }
  //Ensuite les lignes verticales
  for(i=y1;i<=y2;i++)
  {
  gotoxy(x1,i);
  printf("%c",15);
  gotoxy(x2,i);
  printf("%c",15);
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

void cadre_menu(int x1,int x2,int y1, int y2)
{
int i;
// Je begin avec les lignes horizontales
  for(i=x1;i<=x2;i++)
  {
  gotoxy(i,y1);
  printf("%c",4);
  gotoxy(i,y2);
  printf("%c",4);
  }
  //Ensuite les lignes verticales
  for(i=y1;i<=y2;i++)
  {
  gotoxy(x1,i);
  printf("%c",4);
  gotoxy(x2,i);
  printf("%c",4);
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

void saisir1(char T[30][30],int taille)
{int i,j;
  FILE *f;
  f=fopen("contenutab1.txt","w");
  if(f==NULL)
    printf("PROBLEME D'OUVERTURE\n\n");
  else{
        for(i=0;i<taille;i++)
             for(j=0;j<taille;j++){
                 T[i][j]='~';
                 fwrite(&T[i][j],sizeof(T[i][j]),1,f);
                 }
      }
      printf("\n\n\n\n\t\t");
      fclose(f);
}

 void saisir2(char T[30][30],int taille)
{int i,j;
  FILE *f;
  f=fopen("contenutab2.txt","w");
  if(f==NULL)
    printf("PROBLEME D'OUVERTURE\n\n");
  else{
          for(i=0;i<taille;i++)
             for(j=0;j<taille;j++){
                 T[i][j]='~';
                 fwrite(&T[i][j],sizeof(T[i][j]),1,f);
                 }
}
      printf("\n\n\n\n\t\t");
      fclose(f);
}



void vedette(char T[30][30],int taille,int a) // avant je faisais l'erreur fatale de mettre *T mais c'était faux! on ne mets pas * pour les tableaux
{ int x,y,i,j;
    color(3,0); printf("VEDETTES (vous avez droit a %d)\n",a); color(7,0);
    for(i=0;i<a;i++)
    {
    do{
    printf("Entrer les coordonnees de la %d vedette(sous la forme y x)\n",i+1);
    scanf("%d%d",&x,&y);
    if(x>=taille || y>=taille || y<0 || x<0){
        color(4,0);  printf("\t\tIMPOSSIBLE!!!!! VEUILLEZ REESSAYER\n"); color(7,0);
    }
    }while(x>=taille || y>=taille || y<0 || x<0);
    if(T[x][y]=='~'){
    T[x][y]='V';
    }
    }
    system("cls");
    printf("\n\n\n\n\t\t");
    printf("\t\t0\t1\t2\t3\t4\t5\n\n\n\t\t\t");
    for(i=0;i<6;i++){printf("%d\t",i);
          for(j=0;j<6;j++){
             printf("%c\t",T[i][j]);
                   }
       printf("\n\n\t\t\t");
    }
    horizontale(25,72,5,5);   gotoxy(25,5); printf("%c",218); verticale(25,25,6,18);
    printf("\n\n\n\n");
}

void torpie(char T[30][30],int taille,int a)
{
    int x,y,i,j,p,choix;
    color(5,0);  printf("TORPIES (vous avez droit a %d)\n",a); color(7,0);
    for(i=0;i<a;i++)
    {
    do{ p=0;
       do{
    printf("Entrer les coordonnees de la %d torpie(sous la forme y x)\n",i+1);
    scanf("%d%d",&x,&y);
    if(x>=taille || y>=taille || y<0 || x<0){
            color(4,0); printf("\t\tIMPOSSIBLE!!!!  VEUILLEZ REESSAYER\n"); color(7,0);
    }
    }while(x>=taille || y>=taille || y<0 || x<0);
    printf("\n1- Horizontalement vers la droite ou 2- Verticalement vers le haut\n"); scanf("%d",&choix);
    if(choix==1)
    {
    if(T[x][y]=='~' && T[x][y+1]=='~')
    {
        T[x][y]='T'; T[x][y+1]='T';
    }
    else{
        p=1;
    }
    }
    if(choix==2){
    if(T[x][y]=='~' && T[x-1][y]=='~')
    {
        T[x][y]='T'; T[x-1][y]='T';
    }else{
    p=1;}
    }
    if(p==1)
        choix=4;
        if(choix==4){
            color(4,0); printf("IMPOSSIBLE!!!!  VEUILLEZ REESSAYER\n"); color(7,0);
               }
}while(choix==4);

    }system("cls");
    printf("\n\n\n\n\t\t");
    printf("\t\t0\t1\t2\t3\t4\t5\n\n\n\t\t\t");
    for(i=0;i<6;i++){printf("%d\t",i);
          for(j=0;j<6;j++){
             printf("%c\t",T[i][j]);
                   }
       printf("\n\n\t\t\t");
    }
    horizontale(25,72,5,5);   gotoxy(25,5); printf("%c",218); verticale(25,25,6,18);
    printf("\n\n\n\n");
}

void sous_marin(char T[30][30],int taille,int a)
{
int x,y,i,j,choix,p=0;
color(6,0);  printf("SOUS_MARIN (vous avez droit a %d)\n",a); color(7,0);
for(i=0;i<a;i++)
{
    do{p=0;
do{
printf("Entrer les coordonnees du %d SOUS-MARIN(sous la forme y x)\n",i+1);
scanf("%d%d",&x,&y);
if(x>=taille || y>=taille || y<0 || x<0){
    color(4,0);  printf("IMPOSSIBLE!!!!  VEUILLEZ REESSAYER\n"); color(7,0);
    }
}while(x>=taille || y>=taille || y<0 || x<0);
    printf("\n1- Horizontalement vers la droite  ou  2- Verticalement vers le haut\n"); scanf("%d",&choix);
    if(choix==1)
    {
    if(T[x][y]=='~' && T[x][y+1]=='~' && T[x][y+2]=='~')
    {
        T[x][y]='S'; T[x][y+1]='S';  T[x][y+2]='S';
    }else
    {
        p=1;
    }
    }
    if(choix==2){
    if(T[x][y]=='~' && T[x-1][y]=='~' && T[x-2][y]=='~')
    {
        T[x][y]='S'; T[x-1][y]='S'; T[x-2][y]='S';
    }
    else{
        p=1;
    }
    }
    if(p==1)
        choix=4;
        if(choix==4){
            color(4,0); printf("\t\tIMPOSSIBLE!!!!  VEUILLEZ REESSAYER\n"); color(7,0);
               }
}while(choix==4);
}system("cls");
    printf("\n\n\n\n\t\t");
    printf("\t\t0\t1\t2\t3\t4\t5\n\n\n\t\t\t");
    for(i=0;i<6;i++){printf("%d\t",i);
          for(j=0;j<6;j++){
             printf("%c\t",T[i][j]);
                   }
       printf("\n\n\t\t\t");
    }
    horizontale(25,72,5,5);   gotoxy(25,5); printf("%c",218); verticale(25,25,6,18);
    printf("\n\n\n\n");
}

void porte_avion(char T[30][30],int taille,int a)
{
int x,y,i,j,p,choix;
color(6,0);  printf("PORTE_AVION (vous avez droit a %d)\n",a); color(7,0);
for(i=0;i<a;i++)
{
    do{p=0;
do{
printf("Entrer les coordonnees du %d PORTE-AVION(sous la forme y x)\n",i+1);
scanf("%d%d",&x,&y);
if(x>=taille || y>=taille || y<0 || x<0){
        gotoxy(25,4);color(4,0);  printf("IMPOSSIBLE!!!! VEUILLEZ REESSAYER\n");
    }
}while(x>=taille || y>=taille || y<0 || x<0);
    printf("\n1- Horizontalement vers la droite ou 2- Verticalement vers le haut\n"); scanf("%d",&choix);
    if(choix==1)
    {
    if(T[x][y]=='~' && T[x][y+1]=='~' && T[x][y+2]=='~' && T[x][y+3]=='~')
    {
        T[x][y]='P'; T[x][y+1]='P';  T[x][y+2]='P';  T[x][y+3]='P';
    }else{
    p=1;
    }
    }
    if(choix==2){
    if(T[x][y]=='~' && T[x-1][y]=='~' && T[x-2][y]=='~' && T[x-3][y]=='~')
    {
        T[x][y]='P'; T[x-1][y]='P'; T[x-2][y]='P'; T[x-3][y]='P';
    }else{
    p=1;
    }
    }
    if(p==1)
        choix=4;
         if(choix==4){
            color(4,0); printf("IMPOSSIBLE!!!!  VEUILLEZ REESSAYER\n"); color(7,0);
               }
}while(choix==4);
}
system("cls");
    printf("\n\n\n\n\t\t");
    printf("\t\t0\t1\t2\t3\t4\t5\n\n\n\t\t\t");
    for(i=0;i<6;i++){printf("%d\t",i);
          for(j=0;j<6;j++){
             printf("%c\t",T[i][j]);
                   }
       printf("\n\n\t\t\t");
    }
    horizontale(25,72,5,5);   gotoxy(25,5); printf("%c",218); verticale(25,25,6,18);
    printf("\n\n\n\n"); color(0,0); system("pause"); system("cls"); color(7,0);
}

void for_view_only(char T[30][30],int taille)
{ int i,j;
   for(i=0;i<taille;i++)
             for(j=0;j<taille;j++){
                 T[i][j]='~';
             }
gotoxy(114,2);  color(11,0); puts("MACHINE"); color(7,0);
}

void par_defaut1(char T[30][30])
{   int i,j;
    /*FILE *f;
f=fopen("pardefaut1.txt","w");
if(f==NULL)
    printf("PROBLEME D'OUVERTURE");
else{ */
T[1][1]='V';   T[5][0]='P'; T[4][0]='P'; T[3][0]='P'; T[2][0]='P';
  color(0,0); system("pause"); system("cls"); color(7,0);
  //fclose(f);}
}
void par_defaut2(char T[30][30])
{ int i,j;
    /*FILE *f;
f=fopen("pardefaut2.txt","w");
if(f==NULL)
    printf("PROBLEME D'OUVERTURE");
else
{ */
  T[1][3]='V'; T[2][3]='V';  //T[5][2]='V'; T[0][5]='S'; T[1][5]='S'; T[2][5]='S';   T[3][0]='P'; T[3][1]='P'; T[3][2]='P'; T[3][3]='P'; T[0][1]='T'; T[1][1]='T'; system("pause"); system("cls");
    color(0,0); system("pause"); system("cls"); color(7,0);
  //fwrite(T,sizeof(char),900,f);
  //fclose(f);
}



void attaque_le_joueur2_niveau_normal(char T[30][30],char N[30][30],char M1[30][30],char L2[30][30],int taille,char M2[30][30])
{  // T c'est celui qui attaque;
    // N c'est celui qui se fait attaquer
    int x,y,i,j,p=0;  gotoxy(4,25); puts("ATTAQUER");
    gotoxy(15,25); scanf("%d",&x); gotoxy(15,26); scanf("%d",&y);
    if(N[x][y]=='~'){
     color(4,0); gotoxy(15,30);    printf("DANS l'EAU\n");
    }

    if(N[x][y]=='V'){ N[x][y]='~';
        color(3,0); gotoxy(15,30); printf("COULE\n"); M1[x][y]='*'; //  c'est faut d'ecrire L2[i][j]=0 car 0 n'est pas un caractère mais '0' l'est
    }

   if(N[x][y]=='T')
   { L2[x][y]='1';
        for(i=0;i<taille;i++)
            for(j=0;j<taille;j++){
                if(L2[i][j]=='1')
                    p++;
            }
      if(p==1){
        color(3,0); gotoxy(15,30);printf("TOUCHE");
      }
      if(p==2){
        color(4,0); gotoxy(15,30);printf("COULE");
        for(i=0;i<taille;i++)
            for(j=0;j<taille;j++){
                    if(L2[i][j]=='1'){
                       M1[i][j]='*'; N[i][j]='~';
                    }
            }
      }
   }
   if(N[x][y]=='S')
   {
       L2[x][y]='2';
       for(i=0;i<taille;i++)
            for(j=0;j<taille;j++){
                if(L2[i][j]=='2')
                    p++;
            }
    if(p==1){
        color(3,0); gotoxy(15,30); printf("TOUCHE");
      }
    if(p==2){
        color(3,0); gotoxy(15,30); printf("TOUCHE");
      }
      if(p==3){
        color(4,0); gotoxy(15,30); printf("COULE");
        for(i=0;i<taille;i++)
            for(j=0;j<taille;j++){
                    if(L2[i][j]=='2'){
                       M1[i][j]='*'; N[i][j]='~';
                    }
            }
      }
   }
    if(N[x][y]=='P')
   {
       L2[x][y]='3';
       for(i=0;i<taille;i++)
            for(j=0;j<taille;j++){
                if(L2[i][j]=='3')
                    p++;
            }
    if(p==1){
        color(3,0); gotoxy(15,30); printf("TOUCHE");
      }
    if(p==2){
        color(3,0); gotoxy(15,30); printf("TOUCHE");
      }
      if(p==3){
        color(3,0); gotoxy(15,30); printf("TOUCHE");
      }
      if(p==4){
        color(4,0); gotoxy(15,30); printf("COULE");
        for(i=0;i<taille;i++)
            for(j=0;j<taille;j++){
                    if(L2[i][j]=='3'){
                       M1[i][j]='*'; N[i][j]='~';
                    }
            }
      }
   }
    color(0,0);
    system("pause"); system("cls"); color(7,0);
    affiche3_niveau_normal(M1);
    color(0,10); cadre(1,81,0,57); cadre(82,164,0,57); gotoxy(32,2); color(10,0); puts("JOEUR 1"); gotoxy(114,2); color(11,0); puts("JOEUR 2"); color(7,0);
    affiche1_niveau_normal(T);
    affiche2_niveau_normal(N);
    affiche4_niveau_normal(M2);
}


void attaque_le_joueur2_niveau_difficile(char T[30][30],char N[30][30],char M1[30][30],char L2[30][30],int taille,char M2[30][30])
{  // T c'est celui qui attaque;
    // N c'est celui qui se fait attaquer
    int x,y,i,j,p=0;  gotoxy(4,27); puts("ATTAQUER");
    gotoxy(15,27); scanf("%d",&x); gotoxy(15,28); scanf("%d",&y);
    if(N[x][y]=='~'){
     color(4,0); gotoxy(15,30);    printf("DANS l'EAU\n");
    }

    if(N[x][y]=='V'){ N[x][y]='~';
        color(3,0); gotoxy(15,30); printf("COULE\n"); M1[x][y]='*'; //  c'est faut d'ecrire L2[i][j]=0 car 0 n'est pas un caractère mais '0' l'est
    }

   if(N[x][y]=='T')
   { L2[x][y]='1';
        for(i=0;i<taille;i++)
            for(j=0;j<taille;j++){
                if(L2[i][j]=='1')
                    p++;
            }
      if(p==1){
        color(3,0); gotoxy(15,30);printf("TOUCHE");
      }
      if(p==2){
        color(4,0); gotoxy(15,30);printf("COULE");
        for(i=0;i<taille;i++)
            for(j=0;j<taille;j++){
                    if(L2[i][j]=='1'){
                       M1[i][j]='*'; N[i][j]='~';
                    }
            }
      }
   }
   if(N[x][y]=='S')
   {
       L2[x][y]='2';
       for(i=0;i<taille;i++)
            for(j=0;j<taille;j++){
                if(L2[i][j]=='2')
                    p++;
            }
    if(p==1){
        color(3,0); gotoxy(15,30); printf("TOUCHE");
      }
    if(p==2){
        color(3,0); gotoxy(15,30); printf("TOUCHE");
      }
      if(p==3){
        color(4,0); gotoxy(15,30); printf("COULE");
        for(i=0;i<taille;i++)
            for(j=0;j<taille;j++){
                    if(L2[i][j]=='2'){
                       M1[i][j]='*'; N[i][j]='~';
                    }
            }
      }
   }
    if(N[x][y]=='P')
   {
       L2[x][y]='3';
       for(i=0;i<taille;i++)
            for(j=0;j<taille;j++){
                if(L2[i][j]=='3')
                    p++;
            }
    if(p==1){
        color(3,0); gotoxy(15,30); printf("TOUCHE");
      }
    if(p==2){
        color(3,0); gotoxy(15,30); printf("TOUCHE");
      }
      if(p==3){
        color(3,0); gotoxy(15,30); printf("TOUCHE");
      }
      if(p==4){
        color(4,0); gotoxy(15,30); printf("COULE");
        for(i=0;i<taille;i++)
            for(j=0;j<taille;j++){
                    if(L2[i][j]=='3'){
                       M1[i][j]='*'; N[i][j]='~';
                    }
            }
      }
   }
    color(0,0);
    system("pause"); system("cls"); color(7,0);
    affiche3_niveau_difficile(M1);
    color(0,10); cadre(1,81,0,57); cadre(82,164,0,57); gotoxy(32,2); color(10,0); puts("JOEUR 1"); gotoxy(114,2); color(11,0); puts("JOEUR 2"); color(7,0);
    affiche1_niveau_difficile(T);
    affiche2_niveau_difficile(N);
    affiche4_niveau_difficile(M2);
}

void attaque_le_joueur2(char T[30][30],char N[30][30],char M1[30][30],char L2[30][30],int taille,char M2[30][30])
{  // T c'est celui qui attaque;
    // N c'est celui qui se fait attaquer
    int x,y,i,j,p=0;  gotoxy(4,25); puts("ATTAQUER");
    gotoxy(15,25); scanf("%d",&x); gotoxy(15,26); scanf("%d",&y);
    if(N[x][y]=='~'){
     color(4,0); gotoxy(15,30);    printf("DANS l'EAU\n");
     cout_inutile1++;
    }

    if(N[x][y]=='V'){ N[x][y]='~'; cout_utile1++;
        color(3,0); gotoxy(15,30); printf("COULE\n"); M1[x][y]='*'; //  c'est faut d'ecrire L2[i][j]=0 car 0 n'est pas un caractère mais '0' l'est
    }

   if(N[x][y]=='T')
   { L2[x][y]='1'; cout_utile1++;
        for(i=0;i<taille;i++)
            for(j=0;j<taille;j++){
                if(L2[i][j]=='1')
                    p++;
            }
      if(p==1){
        color(3,0); gotoxy(15,30);printf("TOUCHE");
      }
      if(p==2){
        color(4,0); gotoxy(15,30);printf("COULE");
        for(i=0;i<taille;i++)
            for(j=0;j<taille;j++){
                    if(L2[i][j]=='1'){
                       M1[i][j]='*'; N[i][j]='~';
                    }
            }
      }
   }
   if(N[x][y]=='S')
   {  cout_utile1++;
       L2[x][y]='2';
       for(i=0;i<taille;i++)
            for(j=0;j<taille;j++){
                if(L2[i][j]=='2')
                    p++;
            }
    if(p==1){
        color(3,0); gotoxy(15,30); printf("TOUCHE");
      }
    if(p==2){
        color(3,0); gotoxy(15,30); printf("TOUCHE");
      }
      if(p==3){
        color(4,0); gotoxy(15,30); printf("COULE");
        for(i=0;i<taille;i++)
            for(j=0;j<taille;j++){
                    if(L2[i][j]=='2'){
                       M1[i][j]='*'; N[i][j]='~';
                    }
            }
      }
   }
    if(N[x][y]=='P')
   {   cout_utile1++;
       L2[x][y]='3';
       for(i=0;i<taille;i++)
            for(j=0;j<taille;j++){
                if(L2[i][j]=='3')
                    p++;
            }
    if(p==1){
        color(3,0); gotoxy(15,30); printf("TOUCHE");
      }
    if(p==2){
        color(3,0); gotoxy(15,30); printf("TOUCHE");
      }
      if(p==3){
        color(3,0); gotoxy(15,30); printf("TOUCHE");
      }
      if(p==4){
        color(4,0); gotoxy(15,30); printf("COULE");
        for(i=0;i<taille;i++)
            for(j=0;j<taille;j++){
                    if(L2[i][j]=='3'){
                       M1[i][j]='*'; N[i][j]='~';
                    }
            }
      }
   }
    color(0,0);
    system("pause"); system("cls"); color(7,0);
    affiche3(M1);
    color(0,10); cadre(1,81,0,57); cadre(82,164,0,57); gotoxy(32,2); color(10,0); puts("JOEUR 1"); gotoxy(114,2); color(11,0); puts("JOEUR 2"); color(7,0);
    affiche1(T);
    affiche2(N);
    affiche4(M2);
}

void attaquer_la_machine(char T[30][30],char N[30][30],char M1[30][30],char L2[30][30],int taille,char M2[30][30],char fun[30][30])
{  // T c'est celui qui attaque;
    // N c'est celui qui se fait attaquer
    int x,y,i,j,p=0;  gotoxy(4,25); puts("ATTAQUER");
    gotoxy(15,25); scanf("%d",&x); gotoxy(15,26); scanf("%d",&y);
    if(N[x][y]=='~'){
     color(4,0); gotoxy(15,30);    printf("DANS l'EAU\n");
    }

    if(N[x][y]=='V'){ N[x][y]='~';
        color(3,0); gotoxy(15,30); printf("COULE\n"); M1[x][y]='*'; //  c'est faut d'ecrire L2[i][j]=0 car 0 n'est pas un caractère mais '0' l'est
    }

   if(N[x][y]=='T')
   { L2[x][y]='1';
        for(i=0;i<taille;i++)
            for(j=0;j<taille;j++){
                if(L2[i][j]=='1')
                    p++;
            }
      if(p==1){
        color(3,0); gotoxy(15,30);printf("TOUCHE");
      }
      if(p==2){
        color(4,0); gotoxy(15,30);printf("COULE");
        for(i=0;i<taille;i++)
            for(j=0;j<taille;j++){
                    if(L2[i][j]=='1'){
                       M1[i][j]='*'; N[i][j]='~';
                    }
            }
      }
   }
   if(N[x][y]=='S')
   {
       L2[x][y]='2';
       for(i=0;i<taille;i++)
            for(j=0;j<taille;j++){
                if(L2[i][j]=='2')
                    p++;
            }
    if(p==1){
        color(3,0); gotoxy(15,30); printf("TOUCHE");
      }
    if(p==2){
        color(3,0); gotoxy(15,30); printf("TOUCHE");
      }
      if(p==3){
        color(4,0); gotoxy(15,30); printf("COULE");
        for(i=0;i<taille;i++)
            for(j=0;j<taille;j++){
                    if(L2[i][j]=='2'){
                       M1[i][j]='*'; N[i][j]='~';
                    }
            }
      }
   }
    if(N[x][y]=='P')
   {
       L2[x][y]='3';
       for(i=0;i<taille;i++)
            for(j=0;j<taille;j++){
                if(L2[i][j]=='3')
                    p++;
            }
    if(p==1){
        color(3,0); gotoxy(15,30); printf("TOUCHE");
      }
    if(p==2){
        color(3,0); gotoxy(15,30); printf("TOUCHE");
      }
      if(p==3){
        color(3,0); gotoxy(15,30); printf("TOUCHE");
      }
      if(p==4){
        color(4,0); gotoxy(15,30); printf("COULE");
        for(i=0;i<taille;i++)
            for(j=0;j<taille;j++){
                    if(L2[i][j]=='3'){
                       M1[i][j]='*'; N[i][j]='~';
                    }
            }
      }
   }
    color(0,0);
    system("pause"); system("cls"); color(7,0);
    affiche3(M1);
    color(0,10); cadre(1,81,0,57); cadre(82,164,0,57); gotoxy(32,2); color(10,0); puts("JOEUR 1"); gotoxy(114,2); color(11,0); puts("JOEUR 2"); color(7,0);
    affiche1(T);
    //affiche_machine(N);
    for_view_only(fun,taille);
    affiche4(M2);
}
void attaque_le_joueur1(char T[30][30],char N[30][30],char M1[30][30],char L1[30][30],int taille,char M2[30][30])
{  // T c'est celui qui attaque; N c'est celui qui se fait attaquer
   //M1 c'est la vue du premier joueur(situé à la gauche et en dessous(sur l'écran)
      //M2 c'est la vue du premier joueur(situé à la droite et en dessous(sur l'écran)
    int x,y,i,j,p=0;  gotoxy(87,25);
    puts("ATTAQUER"); gotoxy(98,25); scanf("%d",&x); gotoxy(98,26); scanf("%d",&y);
    if(T[x][y]=='~'){
     color(4,0); gotoxy(98,30);    printf("DANS l'EAU\n");
    }

    if(T[x][y]=='V'){ T[x][y]='~';
        color(3,0); gotoxy(85,30); printf("COULE\n"); M2[x][y]='*'; //  c'est faut d'ecrire L2[i][j]=0 car 0 n'est pas un caractère mais '0' l'est
    }

   if(T[x][y]=='T')
   { L1[x][y]='1';
        for(i=0;i<taille;i++)
            for(j=0;j<taille;j++){
                if(L1[i][j]=='1')
                    p++;
            }
      if(p==1){
        color(3,0); gotoxy(85,30);printf("TOUCHE");
      }
      if(p==2){
        color(4,0); gotoxy(85,30);printf("COULE");
        for(i=0;i<taille;i++)
            for(j=0;j<taille;j++){
                    if(L1[i][j]=='1'){
                       M2[i][j]='*'; T[i][j]='~';
                    }
            }
      }
   }
   if(T[x][y]=='S')
   {
       L1[x][y]='2';
       for(i=0;i<taille;i++)
            for(j=0;j<taille;j++){
                if(L1[i][j]=='2')
                    p++;
            }
    if(p==1){
        color(3,0); gotoxy(85,30); printf("TOUCHE");
      }
    if(p==2){
        color(3,0); gotoxy(85,30); printf("TOUCHE");
      }
      if(p==3){
        color(4,0); gotoxy(85,30); printf("COULE");
        for(i=0;i<taille;i++)
            for(j=0;j<taille;j++){
                    if(L1[i][j]=='2'){
                       M2[i][j]='*'; T[i][j]='~';
                    }
            }
      }
   }
    if(T[x][y]=='P')
   {
       L1[x][y]='3';
       for(i=0;i<taille;i++)
            for(j=0;j<taille;j++){
                if(L1[i][j]=='3')
                    p++;
            }
    if(p==1){
        color(3,0); gotoxy(85,30); printf("TOUCHE");
      }
    if(p==2){
        color(3,0); gotoxy(85,30); printf("TOUCHE");
      }
      if(p==3){
        color(3,0); gotoxy(85,30); printf("TOUCHE");
      }
      if(p==4){
        color(4,0); gotoxy(85,30); printf("COULE");
        for(i=0;i<taille;i++)
            for(j=0;j<taille;j++){
                    if(L1[i][j]=='3'){
                       M2[i][j]='*'; T[i][j]='~';
                    }
            }
      }
   }
    color(0,0);
    system("pause"); system("cls"); color(7,0);
    affiche3(M1);
    color(0,10); cadre(1,81,0,57); cadre(82,164,0,57); gotoxy(32,2); color(10,0); puts("JOEUR 1"); gotoxy(114,2); color(11,0); puts("JOEUR 2"); color(7,0);
    affiche1(T);
    affiche2(N);
    affiche4(M2);
}

float meilleur_pourcentage_niveau_facile(int cout_utile1,int cout_inutile1,int cout_utile2,int cout_inutile2)
{ float a,b,c,d,e,g;
    FILE *f;
  f=fopen("meilleurscoreniveaufacile.txt","w");
    if(f==NULL){ c=0;
      return(c);
        fprintf(f,"%f",c);
    }
  else{
   e=cout_utile1 + cout_inutile1;
   g=cout_utile2 + cout_inutile2;
   a=cout_utile1/e;
   b=cout_utile2/g;
   c=a*100;
   d=b*100;
   if(c>=d){
    return(c); //fprintf(f,"%s %s %d",nom,prenom,age);
    fprintf(f,"%f",c);
   }
   else{
    return(d);
    fprintf(f,"%f",d);
   }
  fclose(f);
  }
}

void attaquer_le_joueur(char T[30][30],char N[30][30],char M1[30][30],char L1[30][30],int taille,char M2[30][30],char fun[30][30])
{  // T c'est celui qui attaque; N c'est celui qui se fait attaquer
   //M1 c'est la vue du premier joueur(situé à la gauche et en dessous(sur l'écran)
      //M2 c'est la vue du premier joueur(situé à la droite et en dessous(sur l'écran)
    int x,y,i,j,p=0,m,n,min=0,max=5;
    srand(time(NULL));
    m=(rand()%(max-min+1)) + min;
    n=(rand()%(max-min+1)) + min;
    printf("%d%d",m,n);
    gotoxy(87,25);
    puts("ATTAQUER"); gotoxy(98,25); //scanf("%d",&x); gotoxy(98,26); scanf("%d",&y);
    if(T[m][n]=='~'){
     color(4,0); gotoxy(98,30);    printf("DANS l'EAU\n");
    }

    if(T[m][n]=='V'){ T[m][n]='~';
        color(3,0); gotoxy(85,30); printf("COULE\n"); M2[m][n]='*'; //  c'est faut d'ecrire L2[i][j]=0 car 0 n'est pas un caractère mais '0' l'est
    }

   if(T[m][n]=='T')
   { L1[m][n]='1';
        for(i=0;i<taille;i++)
            for(j=0;j<taille;j++){
                if(L1[i][j]=='1')
                    p++;
            }
      if(p==1){
        color(3,0); gotoxy(85,30);printf("TOUCHE");
      }
      if(p==2){
        color(4,0); gotoxy(85,30);printf("COULE");
        for(i=0;i<taille;i++)
            for(j=0;j<taille;j++){
                    if(L1[i][j]=='1'){
                       M2[i][j]='*'; T[i][j]='~';
                    }
            }
      }
   }
   if(T[m][n]=='S')
   {
       L1[m][n]='2';
       for(i=0;i<taille;i++)
            for(j=0;j<taille;j++){
                if(L1[i][j]=='2')
                    p++;
            }
    if(p==1){
        color(3,0); gotoxy(85,30); printf("TOUCHE");
      }
    if(p==2){
        color(3,0); gotoxy(85,30); printf("TOUCHE");
      }
      if(p==3){
        color(4,0); gotoxy(85,30); printf("COULE");
        for(i=0;i<taille;i++)
            for(j=0;j<taille;j++){
                    if(L1[i][j]=='2'){
                       M2[i][j]='*'; T[i][j]='~';
                    }
            }
      }
   }
    if(T[m][n]=='P')
   {
       L1[m][n]='3';
       for(i=0;i<taille;i++)
            for(j=0;j<taille;j++){
                if(L1[i][j]=='3')
                    p++;
            }
    if(p==1){
        color(3,0); gotoxy(85,30); printf("TOUCHE");
      }
    if(p==2){
        color(3,0); gotoxy(85,30); printf("TOUCHE");
      }
      if(p==3){
        color(3,0); gotoxy(85,30); printf("TOUCHE");
      }
      if(p==4){
        color(4,0); gotoxy(85,30); printf("COULE");
        for(i=0;i<taille;i++)
            for(j=0;j<taille;j++){
                    if(L1[i][j]=='3'){
                       M2[i][j]='*'; T[i][j]='~';
                    }
            }
      }
   }

    color(0,0);//system("cls");
    system("pause"); system("cls"); color(7,0);
    affiche3(M1);
    color(0,10); cadre(1,81,0,57); cadre(82,164,0,57); gotoxy(32,2); color(10,0); puts("JOEUR 1"); gotoxy(114,2); color(11,0); puts("JOEUR 2"); color(7,0);
    affiche1(T);
    affiche4(M2);
    //affiche_machine(N);
    for_view_only(fun,taille);
}

void attaque_le_joueur1_niveau_normal(char T[30][30],char N[30][30],char M1[30][30],char L1[30][30],int taille,char M2[30][30])
{  // T c'est celui qui attaque; N c'est celui qui se fait attaquer
   //M1 c'est la vue du premier joueur(situé à la gauche et en dessous(sur l'écran)
      //M2 c'est la vue du premier joueur(situé à la droite et en dessous(sur l'écran)
    int x,y,i,j,p=0;  gotoxy(87,25);
    puts("ATTAQUER"); gotoxy(98,25); scanf("%d",&x); gotoxy(98,26); scanf("%d",&y);
    if(T[x][y]=='~'){ cout_inutile2++;
     color(4,0); gotoxy(98,30);    printf("DANS l'EAU\n");

    }

    if(T[x][y]=='V'){ T[x][y]='~'; cout_utile2++;
        color(3,0); gotoxy(85,30); printf("COULE\n"); M2[x][y]='*'; //  c'est faut d'ecrire L2[i][j]=0 car 0 n'est pas un caractère mais '0' l'est
    }

   if(T[x][y]=='T')
   { L1[x][y]='1'; cout_utile2++;
        for(i=0;i<taille;i++)
            for(j=0;j<taille;j++){
                if(L1[i][j]=='1')
                    p++;
            }
      if(p==1){
        color(3,0); gotoxy(85,30);printf("TOUCHE");
      }
      if(p==2){
        color(4,0); gotoxy(85,30);printf("COULE");
        for(i=0;i<taille;i++)
            for(j=0;j<taille;j++){
                    if(L1[i][j]=='1'){
                       M2[i][j]='*'; T[i][j]='~';
                    }
            }
      }
   }
   if(T[x][y]=='S')
   { cout_utile2++;
       L1[x][y]='2';
       for(i=0;i<taille;i++)
            for(j=0;j<taille;j++){
                if(L1[i][j]=='2')
                    p++;
            }
    if(p==1){
        color(3,0); gotoxy(85,30); printf("TOUCHE");
      }
    if(p==2){
        color(3,0); gotoxy(85,30); printf("TOUCHE");
      }
      if(p==3){
        color(4,0); gotoxy(85,30); printf("COULE");
        for(i=0;i<taille;i++)
            for(j=0;j<taille;j++){
                    if(L1[i][j]=='2'){
                       M2[i][j]='*'; T[i][j]='~';
                    }
            }
      }
   }
    if(T[x][y]=='P')
   {  cout_utile2++;
       L1[x][y]='3';
       for(i=0;i<taille;i++)
            for(j=0;j<taille;j++){
                if(L1[i][j]=='3')
                    p++;
            }
    if(p==1){
        color(3,0); gotoxy(85,30); printf("TOUCHE");
      }
    if(p==2){
        color(3,0); gotoxy(85,30); printf("TOUCHE");
      }
      if(p==3){
        color(3,0); gotoxy(85,30); printf("TOUCHE");
      }
      if(p==4){
        color(4,0); gotoxy(85,30); printf("COULE");
        for(i=0;i<taille;i++)
            for(j=0;j<taille;j++){
                    if(L1[i][j]=='3'){
                       M2[i][j]='*'; T[i][j]='~';
                    }
            }
      }
   }
    color(0,0);
    system("pause"); system("cls"); color(7,0);
    affiche3_niveau_normal(M1);
    color(0,10); cadre(1,81,0,57); cadre(82,164,0,57); gotoxy(32,2); color(10,0); puts("JOEUR 1"); gotoxy(114,2); color(11,0); puts("JOEUR 2"); color(7,0);
    affiche1_niveau_normal(T);
    affiche2_niveau_normal(N);
    affiche4_niveau_normal(M2);
}


void attaque_le_joueur1_niveau_difficile(char T[30][30],char N[30][30],char M1[30][30],char L1[30][30],int taille,char M2[30][30])
{  // T c'est celui qui attaque; N c'est celui qui se fait attaquer
   //M1 c'est la vue du premier joueur(situé à la gauche et en dessous(sur l'écran)
      //M2 c'est la vue du premier joueur(situé à la droite et en dessous(sur l'écran)
    int x,y,i,j,p=0;  gotoxy(87,27);
    puts("ATTAQUER"); gotoxy(98,27); scanf("%d",&x); gotoxy(98,28); scanf("%d",&y);
    if(T[x][y]=='~'){ //cout_inutile2++;
     color(4,0); gotoxy(98,30);    printf("DANS l'EAU\n");

    }

    if(T[x][y]=='V'){ T[x][y]='~'; //cout_utile2++;
        color(3,0); gotoxy(85,30); printf("COULE\n"); M2[x][y]='*'; //  c'est faut d'ecrire L2[i][j]=0 car 0 n'est pas un caractère mais '0' l'est
    }

   if(T[x][y]=='T')
   { L1[x][y]='1'; //cout_utile2++;
        for(i=0;i<taille;i++)
            for(j=0;j<taille;j++){
                if(L1[i][j]=='1')
                    p++;
            }
      if(p==1){
        color(3,0); gotoxy(85,30);printf("TOUCHE");
      }
      if(p==2){
        color(4,0); gotoxy(85,30);printf("COULE");
        for(i=0;i<taille;i++)
            for(j=0;j<taille;j++){
                    if(L1[i][j]=='1'){
                       M2[i][j]='*'; T[i][j]='~';
                    }
            }
      }
   }
   if(T[x][y]=='S')
   { //cout_utile2++;
       L1[x][y]='2';
       for(i=0;i<taille;i++)
            for(j=0;j<taille;j++){
                if(L1[i][j]=='2')
                    p++;
            }
    if(p==1){
        color(3,0); gotoxy(85,30); printf("TOUCHE");
      }
    if(p==2){
        color(3,0); gotoxy(85,30); printf("TOUCHE");
      }
      if(p==3){
        color(4,0); gotoxy(85,30); printf("COULE");
        for(i=0;i<taille;i++)
            for(j=0;j<taille;j++){
                    if(L1[i][j]=='2'){
                       M2[i][j]='*'; T[i][j]='~';
                    }
            }
      }
   }
    if(T[x][y]=='P')
   {  cout_utile2++;
       L1[x][y]='3';
       for(i=0;i<taille;i++)
            for(j=0;j<taille;j++){
                if(L1[i][j]=='3')
                    p++;
            }
    if(p==1){
        color(3,0); gotoxy(85,30); printf("TOUCHE");
      }
    if(p==2){
        color(3,0); gotoxy(85,30); printf("TOUCHE");
      }
      if(p==3){
        color(3,0); gotoxy(85,30); printf("TOUCHE");
      }
      if(p==4){
        color(4,0); gotoxy(85,30); printf("COULE");
        for(i=0;i<taille;i++)
            for(j=0;j<taille;j++){
                    if(L1[i][j]=='3'){
                       M2[i][j]='*'; T[i][j]='~';
                    }
            }
      }
   }
    color(0,0);
    system("pause"); system("cls"); color(7,0);
    affiche3_niveau_difficile(M1);
    color(0,10); cadre(1,81,0,57); cadre(82,164,0,57); gotoxy(32,2); color(10,0); puts("JOEUR 1"); gotoxy(114,2); color(11,0); puts("JOEUR 2"); color(7,0);
    affiche1_niveau_difficile(T);
    affiche2_niveau_difficile(N);
    affiche4_niveau_difficile(M2);
}


void tableau_imaginaire_facile1(char T[30][30],char L[30][30],int taille)
{ int i,j,c=0;
  FILE *f;
  f=fopen("contenuimaginaire1.txt","w");
  if(f==NULL)
    printf("PROBLEME D'OUVERTURE\n\n");
  else{
  for(i=0;i<taille;i++)
       for(j=0;j<taille;j++){
                L[i][j]='0';
                c++;
       }
        fwrite(&L[i][j],sizeof(L[i][j]),1,f);
       }
       fclose(f);
}


void tableau_imaginaire_facile2(char T[30][30],char L[30][30],int taille)
{ int i,j,c=0;
  FILE *f;
  f=fopen("contenuimaginaire2.txt","w");
  if(f==NULL)
    printf("PROBLEME D'OUVERTURE\n\n");
  else{
  for(i=0;i<taille;i++)
       for(j=0;j<taille;j++){
                L[i][j]='0';
                c++;
       }
        fwrite(&L[i][j],sizeof(L[i][j]),1,f);
       }
       fclose(f);
}


void petiteboucle(char T[30][30],char N[30][30],int taille,char M1[30][30],char L2[30][30],char M2[30][30],char L1[30][30])
{// T c'est celui qui attaque; N c'est celui qui se fait attaquer; L2 c'est le tableau imaginaire de celui qui se fait attaquer
//L1 c'est le tableau imaginaire de celui qui attaque
//e c'est par rapport au premier joueur
//c c'est par rapport au deuxième joueur
    int c=0,d=taille*taille,i,j,e=0,p;
    while(c!=d && e!=d){ c=0; e=0; // pour empêcher que les valeurs de c et e ne dépasse 36
        for(i=0;i<taille;i++)
           for(j=0;j<taille;j++){
              if(N[i][j]=='~')
                    c++;
              }
    for (i=0;i<taille;i++)
              for(j=0;j<taille;j++){
                  if(T[i][j]=='~')
                    e++;
              }
     if(c!=d && e!=d){c=0;e=0;
         attaque_le_joueur2(T,N,M1,L2,taille,M2);


         for(i=0;i<taille;i++)
            for(j=0;j<taille;j++){
                  if(N[i][j]=='~')
                    c++;
        }
    }else{
     e=d; c=d; p=1;
    }
    if(c!=d){ c=0; e=0;
    for(i=0;i<taille;i++)
           for(j=0;j<taille;j++){
               if(N[i][j]=='~')
                    c++;
        }
        for(i=0;i<taille;i++)
              for(j=0;j<taille;j++){
                  if(T[i][j]=='~')
                    e++;
              }
        if(e!=d){ e=0;
    attaque_le_joueur1(T,N,M1,L1,taille,M2);
        for(i=0;i<taille;i++)
              for(j=0;j<taille;j++){
                  if(T[i][j]=='~')
                    e++;
              }
        }
        if(e==d){
            e=d; p=2; c=d;
        }
        }else{
    e=d; c=d; p=1;
    }
 }
 if(p==1){  color(0,0); system("pause"); system("cls");
    gotoxy(70,25); color(10,0); printf("BRAVO JOUEUR 1! VOUS AVEZ GAGNE "); color(7,0);
 }
 if(p==2){ color(0,0); system("pause"); system("cls");
    gotoxy(70,25);color(10,0); printf("BRAVO JOUEUR 2! VOUS AVEZ GAGNE "); color(7,0);

 }
  for(i=0;i<taille;i++)
        for(j=0;j<taille;j++){
            M1[i][j]=' ';
            M2[i][j]=' ';
        }
meilleur_pourcentage=meilleur_pourcentage_niveau_facile(cout_utile1,cout_inutile1,cout_utile2,cout_inutile2);

}


void petiteboucle_machine(char T[30][30],char N[30][30],int taille,char M1[30][30],char L2[30][30],char M2[30][30],char L1[30][30],char fun[30][30])
{// T c'est celui qui attaque; N c'est celui qui se fait attaquer; L2 c'est le tableau imaginaire de celui qui se fait attaquer
//L1 c'est le tableau imaginaire de celui qui attaque
//e c'est par rapport au premier joueur
//c c'est par rapport au deuxième joueur
    int c=0,d=taille*taille,i,j,e=0,p;
    while(c!=d && e!=d){ c=0; e=0; // pour empêcher que les valeurs de c et e ne dépasse 36
        for(i=0;i<taille;i++)
           for(j=0;j<taille;j++){
              if(N[i][j]=='~')
                    c++;
              }
    for (i=0;i<taille;i++)
              for(j=0;j<taille;j++){
                  if(T[i][j]=='~')
                    e++;
              }
     if(c!=d && e!=d){c=0;e=0;
         attaquer_la_machine(T,N,M1,L2,taille,M2,fun);
         for(i=0;i<taille;i++)
            for(j=0;j<taille;j++){
                  if(N[i][j]=='~')
                    c++;
        }
    }else{
     e=d; c=d; p=1;
    }
    if(c!=d){ c=0; e=0;
    for(i=0;i<taille;i++)
           for(j=0;j<taille;j++){
               if(N[i][j]=='~')
                    c++;
        }
        for(i=0;i<taille;i++)
              for(j=0;j<taille;j++){
                  if(T[i][j]=='~')
                    e++;
              }
        if(e!=d){ e=0;
    attaquer_le_joueur(T,N,M1,L1,taille,M2,fun);
        for(i=0;i<taille;i++)
              for(j=0;j<taille;j++){
                  if(T[i][j]=='~')
                    e++;
              }
        }
        if(e==d){
            e=d; p=2; c=d;
        }
        }else{
    e=d; c=d; p=1;
    }
 }
 if(p==1){  color(0,0); system("pause"); system("cls");
    gotoxy(70,25); color(10,0); printf("BRAVO VOUS AVEZ BATTU LA MACHINE "); color(7,0);
 }
 if(p==2){ color(0,0); system("pause"); system("cls");
    gotoxy(70,25);color(10,0); printf("GAME OVER! VOUS AVEZ PERDU "); color(7,0);

 }
  for(i=0;i<taille;i++)
        for(j=0;j<taille;j++){
            M1[i][j]=' ';
            M2[i][j]=' ';
        }
}


void petiteboucle_niveau_normal(char T[30][30],char N[30][30],int taille,char M1[30][30],char L2[30][30],char M2[30][30],char L1[30][30])
{// T c'est celui qui attaque; N c'est celui qui se fait attaquer; L2 c'est le tableau imaginaire de celui qui se fait attaquer
//L1 c'est le tableau imaginaire de celui qui attaque
    int c=0,d=taille*taille,i,j,e=0,p;
while(c!=d && e!=d){ c=0; e=0; // pour empêcher que les valeurs de c et e ne dépasse 36
        for(i=0;i<taille;i++)
           for(j=0;j<taille;j++){
              if(N[i][j]=='~')
                    c++;
              }
    for(i=0;i<taille;i++)
              for(j=0;j<taille;j++){
                  if(T[i][j]=='~')
                    e++;
              }
     if(c!=d && e!=d){c=0; e=0;
         attaque_le_joueur2_niveau_normal(T,N,M1,L2,taille,M2);
         for(i=0;i<taille;i++)
            for(j=0;j<taille;j++){
                  if(N[i][j]=='~')
                    c++;
        }
    }else{
     e=d; c=d; p=1;
    }
    if(c!=d){ c=0; e=0;
    for(i=0;i<taille;i++)
           for(j=0;j<taille;j++){
               if(N[i][j]=='~')
                    c++;
        }
        for(i=0;i<taille;i++)
              for(j=0;j<taille;j++){
                  if(T[i][j]=='~')
                    e++;
              }
        if(e!=d){ e=0;
    attaque_le_joueur1_niveau_normal(T,N,M1,L1,taille,M2);
        for(i=0;i<taille;i++)
              for(j=0;j<taille;j++){
                  if(T[i][j]=='~')
                    e++;
              }
        }
        if(e==d){
            e=d; p=2; c=d;
        }
        }else{
    e=d; c=d; p=1;
    }
 }
 if(p==1){  color(0,0); system("pause"); system("cls");
    gotoxy(70,25); color(10,0); printf("BRAVO JOUEUR 1! VOUS AVEZ GAGNE "); color(7,0);
 }
 if(p==2){ color(0,0); system("pause"); system("cls");
    gotoxy(70,25);color(10,0); printf("BRAVO JOUEUR 2! VOUS AVEZ GAGNE "); color(7,0);

 }
  for(i=0;i<taille;i++)
        for(j=0;j<taille;j++){
            M1[i][j]=' ';
            M2[i][j]=' ';
        }
}


void petiteboucle_niveau_difficile(char T[30][30],char N[30][30],int taille,char M1[30][30],char L2[30][30],char M2[30][30],char L1[30][30])
{// T c'est celui qui attaque; N c'est celui qui se fait attaquer; L2 c'est le tableau imaginaire de celui qui se fait attaquer
//L1 c'est le tableau imaginaire de celui qui attaque
    int c=0,d=taille*taille,i,j,e=0,p;
while(c!=d && e!=d){ c=0; e=0; // pour empêcher que les valeurs de c et e ne dépasse 36
        for(i=0;i<taille;i++)
           for(j=0;j<taille;j++){
              if(N[i][j]=='~')
                    c++;
              }
    for(i=0;i<taille;i++)
              for(j=0;j<taille;j++){
                  if(T[i][j]=='~')
                    e++;
              }
     if(c!=d && e!=d){c=0; e=0;
         attaque_le_joueur2_niveau_difficile(T,N,M1,L2,taille,M2);
         for(i=0;i<taille;i++)
            for(j=0;j<taille;j++){
                  if(N[i][j]=='~')
                    c++;
        }
    }else{
     e=d; c=d; p=1;
    }
    if(c!=d){ c=0; e=0;
    for(i=0;i<taille;i++)
           for(j=0;j<taille;j++){
               if(N[i][j]=='~')
                    c++;
        }
        for(i=0;i<taille;i++)
              for(j=0;j<taille;j++){
                  if(T[i][j]=='~')
                    e++;
              }
        if(e!=d){ e=0;
    attaque_le_joueur1_niveau_difficile(T,N,M1,L1,taille,M2);
        for(i=0;i<taille;i++)
              for(j=0;j<taille;j++){
                  if(T[i][j]=='~')
                    e++;
              }
        }
        if(e==d){
            e=d; p=2; c=d;
        }
        }else{
    e=d; c=d; p=1;
    }
 }
 if(p==1){  color(0,0); system("pause"); system("cls");
    gotoxy(70,25); color(10,0); printf("BRAVO JOUEUR 1! VOUS AVEZ GAGNE "); color(7,0);
 }
 if(p==2){ color(0,0); system("pause"); system("cls");
    gotoxy(70,25);color(10,0); printf("BRAVO JOUEUR 2! VOUS AVEZ GAGNE "); color(7,0);

 }
  for(i=0;i<taille;i++)
        for(j=0;j<taille;j++){
            M1[i][j]=' ';
            M2[i][j]=' ';
        }
}

void affiche1(char T[30][30],char c)
{ // c'est uniquement pour le JOUEUR 1
    int i,j;
    gotoxy(32,2); color(10,0); printf("JOEUR %c",c); color(7,0);
   gotoxy(4,8);  printf("\t\t\t0\t1\t2\t3\t4\t5\n\n\n\t\t");
   for(i=0;i<6;i++){printf("%d\t",i);
         for(j=0;j<6;j++){
             printf("%c\t",T[i][j]);
             }printf("\n\n\t\t");
    } horizontale(19,64,9,9);  gotoxy(19,9); printf("%c",218); verticale(19,19,10,21); printf("\n\n\n\n");
}

void affiche1_niveau_difficile(char T[30][30], char c)
{
     int i,j;
    gotoxy(32,2); color(10,0); printf("JOEUR %c",c); color(7,0);
   gotoxy(4,6);  printf("\t\t0\t1\t2\t3\t4\t5\t6\t7\n\n\n\t");
   for(i=0;i<8;i++){printf("%d\t",i);
         for(j=0;j<8;j++){
             printf("%c\t",T[i][j]);
             }printf("\n\n\t");
    } horizontale(10,72,7,7);  gotoxy(10,7); printf("%c",218); verticale(10,10,8,23); printf("\n\n\n\n");
}

void affiche2(char T[30][30],char c)
{// c'est uniquement pour le JOUEUR 2
    int i,j;
    gotoxy(114,2);  color(11,0); printf("JOEUR %c",c); color(7,0);
    gotoxy(80,8); printf("\t\t\t0\t1\t2\t3\t4\t5\n\n\n\t"); gotoxy(80,11);
        for(i=0;i<6;i++){printf("\t\t%d\t",i);
             for(j=0;j<6;j++){
                   printf("%c\t",T[i][j]);
                } gotoxy(80,13+(i*2));
    } horizontale(100,145,9,9);  gotoxy(100,9); printf("%c",218); verticale(100,100,10,21); printf("\n\n\n\n");
}

void affiche2_niveau_normal(char T[30][30])
{// c'est uniquement pour le JOUEUR 2
    int i,j;
    gotoxy(114,2);  color(11,0); puts("JOEUR 2"); color(7,0);
    gotoxy(80,8); printf("\t\t0\t1\t2\t3\t4\t5\t6\n\n\n\t"); gotoxy(80,11);
        for(i=0;i<7;i++){printf("\t%d\t",i);
             for(j=0;j<7;j++){
                   printf("%c\t",T[i][j]);
                } gotoxy(80,13+(i*2));
    } horizontale(90,145,9,9);  gotoxy(90,9); printf("%c",218); verticale(90,90,10,23); printf("\n\n\n\n");
}

void affiche2_niveau_difficile(char T[30][30])
{// c'est uniquement pour le JOUEUR 2
    int i,j;
    gotoxy(114,2);  color(11,0); puts("JOEUR 2"); color(7,0);
    gotoxy(80,6); printf("\t\t0\t1\t2\t3\t4\t5\t6\t7\n\n\n\n"); gotoxy(80,9);
        for(i=0;i<8;i++){printf("\t%d\t",i);
             for(j=0;j<8;j++){
                   printf("%c\t",T[i][j]);
                } gotoxy(80,11+(i*2));
    } horizontale(90,152,7,7);  gotoxy(90,7); printf("%c",218); verticale(90,90,8,23); printf("\n\n\n\n");
}


void affiche3(char T[30][30])
{ // c'est uniquement pour l'aperçu du premier joueur sur le second (bref M)
    int i,j;
    gotoxy(30,35); color(10,0); printf("VUE SUR L'ENNEMI\n\n"); color(7,0);
    printf("\t\t\t0\t1\t2\t3\t4\t5\n\n\n\t\t");
    for(i=0;i<6;i++){printf("%d\t",i);
          for(j=0;j<6;j++){
            printf("%c\t",T[i][j]);
            }printf("\n\n\t\t");
    }
}


void affiche3_niveau_normal(char T[30][30])
{ // c'est uniquement pour l'aperçu du premier joueur sur le second (bref M)
    int i,j;
    gotoxy(30,35); color(10,0); printf("VUE SUR L'ENNEMI\n\n"); color(7,0);
    printf("\t\t0\t1\t2\t3\t4\t5\t6\n\n\n\t");
    for(i=0;i<7;i++){printf("%d\t",i);
          for(j=0;j<7;j++){
            printf("%c\t",T[i][j]);
            }printf("\n\n\t");
    }
}

void affiche3_niveau_difficile(char T[30][30])
{ // c'est uniquement pour l'aperçu du premier joueur sur le second (bref M)
    int i,j;
    gotoxy(30,32); color(10,0); printf("VUE SUR L'ENNEMI\n\n"); color(7,0);
    printf("\t\t0\t1\t2\t3\t4\t5\t6\t7\n\n\n\t");
    for(i=0;i<8;i++){printf("%d\t",i);
          for(j=0;j<8;j++){
            printf("%c\t",T[i][j]);
            }printf("\n\n\t");
    }
}

void affiche4(char T[30][30])
{ // c'est uniquement pour l'aperçu du deuxième joueur sur le premier (bref M)
     int i,j;
gotoxy(106,35); color(11,0); printf("\tVUE SUR L'ENNEMI\n\n"); color(7,0);
gotoxy(72,37); printf("\t\t\t\t0\t1\t2\t3\t4\t5\n\n\n\t"); gotoxy(72,40);
        for(i=0;i<6;i++){printf("\t\t\t%d\t",i);
             for(j=0;j<6;j++){
                   printf("%c\t",T[i][j]);
                } gotoxy(72,42+(i*2));
    }
}

void affiche4_niveau_normal(char T[30][30])
{ // c'est uniquement pour l'aperçu du deuxième joueur sur le premier (bref M)
     int i,j;
gotoxy(106,35); color(11,0); printf("\tVUE SUR L'ENNEMI\n\n"); color(7,0);
gotoxy(72,37); printf("\t\t\t0\t1\t2\t3\t4\t5\t6\n\n\n"); gotoxy(72,40);
        for(i=0;i<7;i++){printf("\t\t%d\t",i);
             for(j=0;j<7;j++){
                   printf("%c\t",T[i][j]);
                } gotoxy(72,42+(i*2));
    }
}

void affiche4_niveau_difficile(char T[30][30])
{ // c'est uniquement pour l'aperçu du deuxième joueur sur le premier (bref M)
     int i,j;
gotoxy(106,33); color(11,0); printf("\tVUE SUR L'ENNEMI\n\n"); color(7,0);
gotoxy(72,35); printf("\t\t\t0\t1\t2\t3\t4\t5\t6\t7\n\n\n\n"); gotoxy(72,38);
        for(i=0;i<8;i++){printf("\t\t%d\t",i);
             for(j=0;j<8;j++){
                   printf("%c\t",T[i][j]);
                } gotoxy(72,38+(i*2));
    }
}


void par_defaut_machine(char T[30][30])
{ int i,j;
    gotoxy(114,2);  color(11,0); puts("MACHINE"); color(7,0);
    gotoxy(80,8); printf("\t\t\t0\t1\t2\t3\t4\t5\n\n\n\t"); gotoxy(80,11);
        for(i=0;i<6;i++){printf("\t\t%d\t",i);
             for(j=0;j<6;j++){
                   printf("%c\t",T[i][j]);
                } gotoxy(80,13+(i*2));
    } horizontale(100,145,9,9);  gotoxy(100,9); printf("%c",218); verticale(100,100,10,21); printf("\n\n\n\n");
}

void saisir_machine(char T[30][30],int taille)
{
 T[0][0]='V'; T[0][2]='T'; T[0][5]='V'; T[1][2]='T'; T[1][4]='P'; T[2][2]='V';T[2][4]='P'; T[3][0]='S'; T[3][1]='S';T[3][2]='S';  T[3][4]='P'; T[4][4]='P'; T[5][0]='V'; T[5][5]='V';
}

void affiche1_niveau_normal(char T[30][30],char c)
{ // c'est uniquement pour le JOUEUR 1
    int i,j;
    gotoxy(32,2); color(10,0); printf("JOEUR %c",c); color(7,0);
   gotoxy(4,8);  printf("\t\t0\t1\t2\t3\t4\t5\t6\n\n\n\t");
   for(i=0;i<7;i++){printf("%d\t",i);
         for(j=0;j<7;j++){
             printf("%c\t",T[i][j]);
             }printf("\n\n\t");
    } horizontale(10,64,9,9);  gotoxy(10,9); printf("%c",218); verticale(10,10,10,23); printf("\n\n\n\n");
}

void affiche_machine(char T[30][30],int taille)
{
int i,j;
    gotoxy(114,2);  color(11,0); puts("MACHINE"); color(7,0);
    gotoxy(80,8); printf("\t\t\t0\t1\t2\t3\t4\t5\n\n\n\t"); gotoxy(80,11);
        for(i=0;i<6;i++){printf("\t\t%d\t",i);
             for(j=0;j<6;j++){
                   printf("%c\t",T[i][j]);
                } gotoxy(80,13+(i*2));
    } horizontale(100,145,9,9);  gotoxy(100,9); printf("%c",218); verticale(100,100,10,21); printf("\n\n\n\n");
}

void aide()
{cadre(1 ,164,1,60);
          color(3,0); gotoxy(72,5); printf("          AIDE          "); color(7,0);
          gotoxy(3,9); printf("BIENVENUE A JEU DE BATAILLE:");
          gotoxy(3,11);
          printf("Notre jeu est un jeu de bataille navale qui consite a faire couler tous les les navires de l'adversaire.C'est a la fois un jeu de reflexion et un jeu de hasard.");
          gotoxy(3,12);           printf("POUR JOUER A LA BATAILLE NAVALE IL FAUT AU MOINS UN JOUEUR ET ON DISPOSE DE:");
          gotoxy(3,14);  printf("-une grille de jeu numerotee de 1 a 5 au moins ");
         gotoxy(3,16);  printf("-1 torpilleur(2cases)");
         gotoxy(3,17); printf("-1 sous marin(3cases)");
         gotoxy(3,18); printf("-1 porte avion(4cases)");
         gotoxy(3,20); printf("COMMENCER UNE PARTIE DE BATAILLE NAVALE");
         gotoxy(3,22);  printf("-premierement vous devrez placer vos navires par defaut ils seront placer.");
         gotoxy(3,23);          printf("aleatoirement.Pour deplacer un navire,faites un click sur lui pour le ");
         gotoxy(3,24);  printf("selectionner");
         gotoxy(3,26);          color(4,0); printf("NB:VOUS NE POUVEZ PAS PLACER LES NAVIRES LES UNS SUR LES AUTRES"); color(7,0);
         gotoxy(3,28); printf("INDICATIONS:");
         gotoxy(3,29);          printf("lorsque ce sera votre tour de jouer, vous devrez tirer avec vos navires. A chaque tour chacun de vos navires pourra utiliser un tir");
         gotoxy(3,30);          printf("Donc, avant de confirmer l'ordre tirer, vous devrez selectionner chacun de vos navires valides et indiquer la cible choisie pour chacun d'eux une fois");
          gotoxy(72,32); color(3,0);         printf("ASTUCES POUR GAGNER A LA BATAILLE NAVALE:"); color(7,0);
         gotoxy(3,34);        printf("Pour gagner plus rapidement,vous pouvez jouer vos tirs en croix.Etant donne que le plus petit navire fait une case alors vous ne pourrez eviter");
          gotoxy(3,37);         printf("Nous disposons de 3 niveaux presentes comme suit:");
         gotoxy(3,40); printf("NIVEAU FACILE(6*6):");
        gotoxy(11,42);         printf("A ce niveau vous avez droit a: -1 SOUS MARRIN ");
        gotoxy(11,43);         printf("                               -1 PORTE AVION ");
         gotoxy(11,44);          printf("                               -1 TORPILLEUR  ");
         gotoxy(11,45);        printf("                               -1 VEDETTE   ");
         gotoxy(11,47);        printf("NIVEAU NORMAL(7*7):");
         gotoxy(11,48);       printf("A ce niveau vous avez droit a: -1 SOUS MARRIN ");
         gotoxy(11,49);        printf("                               -1 PORTE AVION ");
         gotoxy(11,50);       printf("                               -1 TORPILLEUR ");
         gotoxy(11,51);        printf("                               -1  VEDETTE");
         gotoxy(11,53);        printf("NIVEAU DIFFICILE(8*8):");
         gotoxy(11,54);        printf("A ce niveau vous avez droit a: -1 SOUS MARRIN");
          gotoxy(11,55);        printf("                               -1 PORTE AVION ");
         gotoxy(11,56);       printf("                               -1 TORPILLEUR ");
         gotoxy(11,57);        printf("                               -1 VEDETTE");
         gotoxy(11,58);
         color(0,0); system("pause"); system("cls"); color(7,0);
}


void main()
{int m,n,min=0,max=5,choix1,choix2,choix3,choix4,choix5,choix6,choix7,fun[30][30],tab1[30][30],i,j,tab2[30][30],M1[30][30],M2[30][30],L1[30][30],L2[30][30];
//je vais crée 2 tableaux imaginaires(notés L1 et L2; un pour chaque joueur
gotoxy(75,23); printf("BATAILLE NAVALE");
Sleep(200);
color(0,7);cadre(73,90,21,25);
cadre(70,93,18,28);
Sleep(200);
cadre(67,96,15,31);
Sleep(200);
cadre(64,99,12,34);
Sleep(200);
cadre(61,102,9,37);
Sleep(200);
cadre(58,105,6,40);
gotoxy(140,56);
color(7,0); printf("copyrightYFWO2018"); color(0,0);
Sleep(500);
do{system("cls");
color(0,7);
gotoxy(0,3); puts("*****************************************************************"); cadre(65,90,1,5); gotoxy(70,3); puts("MENU PRINCIPAL\n");  gotoxy(91,3); puts("****************************************************************************************************************************************\n\n\n\n"); color(7,0);
cadre_menu(54,98,8,42); color(3,0);
gotoxy(65,12); printf("1- JOUER");
gotoxy(65,20); printf("2- AIDE");
gotoxy(65,28); printf("3- QUITTER");
Sleep(300);
cadre_menu(56,96,10,40);
gotoxy(65,36); printf("Faites votre choix"); color(7,0); gotoxy(85,36);
scanf("%d",&choix1);
system("cls");
switch(choix1)
{   case 1:do{cadre1(58,102,8,42); color(10,0);
             gotoxy(65,12); printf("1- JOEUR A DEUX");
             gotoxy(65,20); printf("2- JOUER SEUL (CONTRE LA MACHINE)");
             gotoxy(65,28); printf("3- RETOUR");
             Sleep(300);
             cadre1(60,100,10,40);
             gotoxy(65,36); printf("Faites votre choix"); color(7,0); gotoxy(85,36);
             scanf("%d",&choix3); system("cls");
             switch(choix3)
           {
           case 1: do{
                  cadre2(58,102,8,42); color(11,0);
                  gotoxy(65,12); printf("1- FACILE");
                  gotoxy(65,18); printf("2- NORMAL");
                  gotoxy(65,24); printf("3- DIFFICILE");
                  gotoxy(65,30); printf("4- RETOUR");
                  Sleep(500);
                  cadre2(60,100,10,40);
                   gotoxy(65,36); printf("Quel niveau voulez vous"); color(7,0); gotoxy(92,36);
                   scanf("%d",&choix2); system("cls");
                   switch(choix2)
                   {
                            case 1: do{
                                   cadre3(58,102,20,35); color(1,0);
                                   gotoxy(65,24); printf("1- COMMENCER UNE NOUVELLE PARTIE");
                                   gotoxy(65,27); printf("2- RETOUR");
                                   Sleep(300);
                                   cadre3(60,100,22,33);
                                   gotoxy(65,30); printf("CHOIX"); color(7,0); gotoxy(74,30);

                                   scanf("%d",&choix4); system("cls");
                                   switch(choix4)
                                   {
                                   case 1:color (4,0); gotoxy(54,28); puts("QUE LE PREMIER JOEUR REMPLISSE LA GRILLE SUIVANTE\n\n\n\n"); color(0,0); system("pause"); system("cls"); color(7,0);
                                          saisir1(tab1,6);
                                          saisir2(tab2,6);
                                          affiche1(tab1,'1');
                                         vedette(tab1,6,1); torpie(tab1,6,1); sous_marin(tab1,6,1); porte_avion(tab1,6,1); // par_defaut1(tab1);
                                          color (4,0); gotoxy(54,28); puts("QUE LE DEUXIEME JOEUR REMPLISSE LA GRILLE SUIVANTE\n\n\n\n"); color(0,0); system("pause"); system("cls"); color(7,0);
                                          affiche1(tab2,'2');
                                          //horizontale(25,72,5,5);  gotoxy(25,5); printf("%c",218); verticale(25,25,6,18); printf("\n\n\n\n");
                                          par_defaut2(tab2);//vedette(tab2,6,1); torpie(tab2,6,1); sous_marin(tab2,6,1); porte_avion(tab2,6,1);
                                          tableau_imaginaire_facile1(tab1,L1,6);
                                          tableau_imaginaire_facile2(tab2,L2,6);
                                          color(0,10); cadre(1,81,0,57); cadre(82,164,0,57);
                                          affiche3(M1);
                                          affiche4(M2);
                                          affiche1(tab1,'1');
                                          affiche2(tab2,'2');
                                          petiteboucle(tab1,tab2,6,M1,L2,M2,L1);
                                          color(0,0); system("pause"); system("cls"); color(7,0);
                                          break;
                                   }
                                   }while(choix4!=2);
                                   break;
                            case 2: do{
                                        cadre3(58,102,20,35); color(1,0);
                                        gotoxy(65,24); printf("1- COMMENCER UNE NOUVELLE PARTIE");
                                        gotoxy(65,27); printf("2- RETOUR");
                                        Sleep(300);
                                        cadre3(60,100,22,33);
                                        gotoxy(65,30); printf("CHOIX"); color(7,0); gotoxy(74,30); scanf("%d",&choix5); system("cls");
                                   switch(choix5)
                                   {
                                           case 1:color (6,0); gotoxy(54,28); puts("QUE LE PREMIER JOEUR REMPLISSE LA GRILLE SUIVANTE\n\n\n\n"); color(0,0); system("pause"); system("cls"); color(7,0);
                                                  saisir1(tab1,7);
                                                  saisir2(tab2,7);
                                                  affiche1_niveau_normal(tab1,'1');
                                                  par_defaut1(tab1); //vedette(tab1,7,1); torpie(tab1,7,1); sous_marin(tab1,7,1); porte_avion(tab1,7,1); //pardefaut1(tab1);
                                                  color (4,0); gotoxy(54,28); puts("QUE LE DEUXIEME JOEUR REMPLISSE LA GRILLE SUIVANTE\n\n\n\n"); color(0,0); system("pause"); system("cls"); color(7,0);
                                                  affiche1_niveau_normal(tab2,'2');
                                                  //horizontale(25,72,5,5);  gotoxy(25,5); printf("%c",218); verticale(25,25,6,18); printf("\n\n\n\n");
                                                  par_defaut2(tab2); //vedette(tab2,7,1); torpie(tab2,7,1); sous_marin(tab2,7,1); porte_avion(tab2,7,1);
                                                  tableau_imaginaire_facile1(tab1,L1,7);
                                                  tableau_imaginaire_facile2(tab2,L2,7);
                                                  color(0,10); cadre(1,81,0,57); cadre(82,164,0,57);
                                                  affiche3_niveau_normal(M1);
                                                  affiche4_niveau_normal(M2);
                                                  affiche1_niveau_normal(tab1,'1');
                                                  affiche2_niveau_normal(tab2);
                                                  petiteboucle_niveau_normal(tab1,tab2,7,M1,L2,M2,L1);
                                                  color(0,0); system("pause"); system("cls"); color(7,0);
                                                  break;
                                   }
                            }while(choix5!=2);
                            break;
                            case 3:do{
                                   cadre3(58,102,20,35); color(1,0);
                                   gotoxy(65,24); printf("1- COMMENCER UNE NOUVELLE PARTIE");
                                   gotoxy(65,27); printf("2- RETOUR");
                                   Sleep(300);
                                   cadre3(60,100,22,33);
                                   gotoxy(65,30); printf("CHOIX"); color(7,0); gotoxy(74,30);
                                   scanf("%d",&choix6); system("cls");
                                   switch(choix6)
                                   {
                                           case 1:color (9,0); gotoxy(54,28); puts("QUE LE PREMIER JOEUR REMPLISSE LA GRILLE SUIVANTE\n\n\n\n"); color(0,0); system("pause"); system("cls"); color(7,0);
                                                  saisir1(tab1,8);
                                                  saisir2(tab2,8);
                                                  affiche1_niveau_difficile(tab1,'1');
                                                  par_defaut1(tab1); //vedette(tab1,7,1); torpie(tab1,7,1); sous_marin(tab1,7,1); porte_avion(tab1,7,1); //pardefaut1(tab1);
                                                  color (4,0); gotoxy(54,28); puts("QUE LE DEUXIEME JOEUR REMPLISSE LA GRILLE SUIVANTE\n\n\n\n"); color(0,0); system("pause"); system("cls"); color(7,0);
                                                  affiche1_niveau_difficile(tab2,'2');
                                                  //horizontale(25,72,5,5);  gotoxy(25,5); printf("%c",218); verticale(25,25,6,18); printf("\n\n\n\n");
                                                  par_defaut2(tab2); //vedette(tab2,7,1); torpie(tab2,7,1); sous_marin(tab2,7,1); porte_avion(tab2,7,1);
                                                  tableau_imaginaire_facile1(tab1,L1,8);
                                                  tableau_imaginaire_facile2(tab2,L2,8);
                                                  color(0,10); cadre(1,81,0,57); cadre(82,164,0,57);
                                                  affiche3_niveau_difficile(M1);
                                                  affiche4_niveau_difficile(M2);
                                                  affiche1_niveau_difficile(tab1,'1');
                                                  affiche2_niveau_difficile(tab2);
                                                  petiteboucle_niveau_difficile(tab1,tab2,8,M1,L2,M2,L1);
                                                  color(0,0); system("pause"); system("cls"); color(7,0);
                                                  break;
                                   }
                            }while(choix6!=2);
                                   break;
                   }
             }while(choix2!=4);
            break;

    case 2:do{
                  cadre3(58,102,20,35); color(1,0);
                  gotoxy(65,24); printf("1- COMMENCER UNE NOUVELLE PARTIE");
                  gotoxy(65,27); printf("2- RETOUR");
                  Sleep(300);
                  cadre3(60,100,22,33);
                  gotoxy(65,30); printf("CHOIX"); color(7,0); gotoxy(74,30);
                   scanf("%d",&choix7); system("cls");
                                   switch(choix7)
                                   {
           case 1:color (7,0); gotoxy(60,28); puts("VEUILLEZ REMPLIR LA GRILLE SUIVANTE\n\n\n\n"); color(0,0); system("pause"); system("cls"); color(7,0);
                  saisir1(tab1,6);
                  saisir1(tab2,6);
                  saisir_machine(tab2,6); //c'est un peu comme le tableau par defaut assigné à la machine
                  affiche1(tab1,' ');
                  par_defaut1(tab1); //vedette(tab1,6,1); torpie(tab1,6,1); sous_marin(tab1,6,1); porte_avion(tab1,6,1);
                  for_view_only(fun,6);
                  //par_defaut_machine(tab2);
                  tableau_imaginaire_facile1(tab1,L1,6);
                  tableau_imaginaire_facile2(tab2,L2,6);
                  color(0,10); cadre(1,81,0,57); cadre(82,164,0,57);
                  affiche3(M1);
                  affiche4(M2);
                  affiche1(tab1,' ');
                  petiteboucle_machine(tab1,tab2,6,M1,L2,M2,L1,fun);
                  color(0,0); system("pause"); system("cls"); color(7,0);
                  break;
}
    }while(choix7!=2);
            break;
           }
            }while(choix3!=3);
           break;
  case 2:aide();
        break;
}
}while(choix1!=3);
}
