#include <stdio.h>
#include <stdlib.h>
#include<windows.h>

void color(int t,int f)
{ //Il ya 256 code ASCI
HANDLE
H=GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(H,f*16+t);
}

COORD coord={0,0};
void gotoxy(int x,int y){
coord.X=x;
coord.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void cadre(int x1,int x2,int y1,int y2){
 int i;
 for(i=x1;i<=x2;i++){
     gotoxy(i,y1);
     printf("%c",196);
     gotoxy(i,y2);
     printf("%c",196);
 }
 for(i=y1;i<=y2;i++){
gotoxy(x1,i);
     printf("%c",179);
 gotoxy(x2,i);
     printf("%c",179);
 }
gotoxy(x1,y1);
     printf("%c",218);
  gotoxy(x2,y1);
     printf("%c",191);
  gotoxy(x1,y2);
     printf("%c",192);
 gotoxy(x2,y2);
     printf("%c",217);
}
int main(){
    cadre(1 ,164,1,65);
     color(3,0); gotoxy(72,5); printf("          AIDE          "); color(7,0);
    gotoxy(3,9); printf("BIENVENUE A JEU DE BATAILLE:");
    gotoxy(3,11);
    printf("Notre jeu est un jeu de bataille navale qui consite a faire couler tous les les navires de l'adversaire.C'est a la fois un jeu de reflexion et un jeu de hasard.");
    gotoxy(3,12);
    printf("POUR JOUER A LA BATAILLE NAVALE IL FAUT AU MOINS UN JOUEUR ET ON DISPOSE DE:");
   gotoxy(3,14);
   printf("-une grille de jeu numerotee de 1 a 5 au moins ");
   gotoxy(3,16);
   printf("-1 torpilleur(2cases)");
   gotoxy(3,17);
   printf("-1 sous marin(3cases)");
   gotoxy(3,18);
   printf("-1 porte avion(4cases)");
   gotoxy(3,20);
   printf("COMMENCER UNE PARTIE DE BATAILLE NAVALE");
   gotoxy(3,22);
   printf("-premierement vous devrez placer vos navires par defaut ils seront placer.");
   gotoxy(3,23);
   printf("aleatoirement.Pour deplacer un navire,faites un click sur lui pour le ");
   gotoxy(3,24);
   printf("selectionner");
   gotoxy(3,26);
   color(4,0); printf("NB:VOUS NE POUVEZ PAS PLACER LES NAVIRES LES UNS SUR LES AUTRES"); color(7,0);
   gotoxy(3,28);
   printf("INDICATIONS:");
   gotoxy(3,29);
   printf("lorsque ce sera votre tour de jouer, vous devrez tirer avec vos navires. A chaque tour chacun de vos navires pourra utiliser un tir");
   gotoxy(3,30);
   printf("Donc, avant de confirmer l'ordre tirer, vous devrez selectionner chacun de vos navires valides et indiquer la cible choisie pour chacun d'eux une fois");
   gotoxy(72,32); color(3,0);
   printf("ASTUCES POUR GAGNER A LA BATAILLE NAVALE:"); color(7,0);
   gotoxy(3,34);
   printf("Pour gagner plus rapidement,vous pouvez jouer vos tirs en croix.Etant donne que le plus petit navire fait une case alors vous ne pourrez eviter");
   gotoxy(3,37);
   printf("aucun autre bateau sur votre chemin.cette methode est infaillible car elle  est purement logique.");
   gotoxy(3,39);
   printf("Nous disposons de 3 niveaux presentes comme suit:");
   gotoxy(3,40);
   printf("NIVEAU FACILE(6*6):");
   gotoxy(11,42);
   printf("A ce niveau vous avez droit a: -1 SOUS MARRIN ");
   gotoxy(11,43);
   printf("                               -1 PORTE AVION ");
   gotoxy(11,44);
   printf("                               -1 TORPILLEUR  ");
   gotoxy(11,45);
   printf("                               -1 VEDETTE   ");
   gotoxy(11,47);
   printf("NIVEAU NORMAL(7*7):");
   gotoxy(11,48);
   printf("A ce niveau vous avez droit a: -1 SOUS MARRIN ");
   gotoxy(11,49);
   printf("                               -1 PORTE AVION ");
   gotoxy(11,50);
   printf("                               -1 TORPILLEUR ");
   gotoxy(11,51);
   printf("                               -1  VEDETTE");
   gotoxy(11,53);
   printf("NIVEAU DIFFICILE(8*8):");
   gotoxy(11,54);
   printf("A ce niveau vous avez droit a: -1 SOUS MARRIN");
   gotoxy(11,55);
   printf("                               -1 PORTE AVION ");
   gotoxy(11,56);
   printf("                               -1 TORPILLEUR ");
   gotoxy(11,57);
   printf("                               -1 VEDETTE");
   gotoxy(11,58);





}
