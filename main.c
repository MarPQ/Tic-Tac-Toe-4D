#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void tablero (char m [4][4]);
void inicializar (char m [4][4]);
void introP1 (char m [4][4]);
void introP2 (char m [4][4]);
void introCPUf (char m [4][4]);
void introCPUn (char m [4][4]);
int ganador (char m [4][4]);
void loopPvP (char m [4][4]);
void loopPvCPUf (char m [4][4]);
void loopPvCPUn (char m [4][4]);


int main(void)
{
    int opc=0, opc2=0;
    char m [4][4];

    system ("color 73");
    printf("\n\n\t\t %c%c%c%c%c%c%c  %c%c%c%c%c%c %c%c%c%c%c%c%c%c%c %c%c%c%c%c%c%c     %c%c%c  %c%c%c%c%c%c%c%c%c%c\n",
            219,219,219,219,219,219,187,219,219,219,219,219,187,219,219,219,219,219,219,219,219,187
            ,219,219,219,219,219,219,187,219,219,187,219,219,187,219,219,219,219,219,219,187);
    printf("\t\t%c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c    %c%c%c  %c%c%c%c%c%c%c%c%c%c%c\n",
           219,219,201,205,205,205,205,188,219,219,201,205,205,219,219,187,200,205,205,219,219,201,205,205,188,219
           ,219,201,205,205,205,219,219,187,219,219,186,219,219,186,219,219,201,205,205,219,219,187);
    printf("\t\t%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c   %c%c%c   %c%c%c   %c%c%c    %c%c%c%c%c%c%c%c%c%c%c  %c%c%c\n",
           219,219,186,219,219,219,187,219,219,219,219,219,219,219,186,219,219,186,219,219,186,219,219,
           186,219,219,219,219,219,219,219,186,219,219,186,219,219,186);
    printf("\t\t%c%c%c   %c%c%c%c%c%c%c%c%c%c%c   %c%c%c   %c%c%c   %c%c%c    %c%c%c%c%c%c%c%c%c%c%c  %c%c%c\n",
           219,219,186,219,219,186,219,219,201,205,205,219,219,186,219,219,186,219,219,186,219,219,186,200,205,205,205,205,219,219,186,219,219,186,219,219,186,219,219,186);
    printf("\t\t%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c   %c%c%c   %c%c%c%c%c%c%c%c%c         %c%c%c%c%c%c%c%c%c%c%c\n",
           200,219,219,219,219,219,219,201,188,219,219,186,219,219,186,219,219,186,200,219,219,219,219,219,219,201,188,219,219,186,219,219,219,219,219,219,201,188);
    printf("\t\t %c%c%c%c%c%c%c %c%c%c  %c%c%c   %c%c%c    %c%c%c%c%c%c%c          %c%c%c%c%c%c%c%c%c%c ",
           200,205,205,205,205,205,188,200,205,188,200,205,188,200,205,188,200,205,205,205,205,205,188,200,205,188,200,205,205,205,205,205,188);

    printf("\n\n\n\n\t\t\t\tPresione cualquier tecla");
    getch();
    system("cls");

    do{
    printf("\n\n\t\t %c%c%c%c%c%c%c  %c%c%c%c%c%c %c%c%c%c%c%c%c%c%c %c%c%c%c%c%c%c     %c%c%c  %c%c%c%c%c%c%c%c%c%c\n",
            219,219,219,219,219,219,187,219,219,219,219,219,187,219,219,219,219,219,219,219,219,187
            ,219,219,219,219,219,219,187,219,219,187,219,219,187,219,219,219,219,219,219,187);
    printf("\t\t%c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c    %c%c%c  %c%c%c%c%c%c%c%c%c%c%c\n",
           219,219,201,205,205,205,205,188,219,219,201,205,205,219,219,187,200,205,205,219,219,201,205,205,188,219
           ,219,201,205,205,205,219,219,187,219,219,186,219,219,186,219,219,201,205,205,219,219,187);
    printf("\t\t%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c   %c%c%c   %c%c%c   %c%c%c    %c%c%c%c%c%c%c%c%c%c%c  %c%c%c\n",
           219,219,186,219,219,219,187,219,219,219,219,219,219,219,186,219,219,186,219,219,186,219,219,
           186,219,219,219,219,219,219,219,186,219,219,186,219,219,186);
    printf("\t\t%c%c%c   %c%c%c%c%c%c%c%c%c%c%c   %c%c%c   %c%c%c   %c%c%c    %c%c%c%c%c%c%c%c%c%c%c  %c%c%c\n",
           219,219,186,219,219,186,219,219,201,205,205,219,219,186,219,219,186,219,219,186,219,219,186,200,205,205,205,205,219,219,186,219,219,186,219,219,186,219,219,186);
    printf("\t\t%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c   %c%c%c   %c%c%c%c%c%c%c%c%c         %c%c%c%c%c%c%c%c%c%c%c\n",
           200,219,219,219,219,219,219,201,188,219,219,186,219,219,186,219,219,186,200,219,219,219,219,219,219,201,188,219,219,186,219,219,219,219,219,219,201,188);
    printf("\t\t %c%c%c%c%c%c%c %c%c%c  %c%c%c   %c%c%c    %c%c%c%c%c%c%c          %c%c%c%c%c%c%c%c%c%c ",
           200,205,205,205,205,205,188,200,205,188,200,205,188,200,205,188,200,205,205,205,205,205,188,200,205,188,200,205,205,205,205,205,188);
    printf("\n\n\n\n\t\t\t\tModo De Juego\n\n\n");
    printf("\t\t\t\t1.) Jugador VS Jugador\n\n");
    printf("\t\t\t\t2.) Jugador VS CPU\n\n");
    printf("\t\t\t\t3.) Instrucciones\n\n");
    printf("\t\t\t\t4.) Salir\n\n\n");
    printf("Ingrese opcion: ");
    scanf("%d", &opc);
    system("cls");

    switch(opc){
      case 1:
        system("color 37");
        loopPvP(m);
        getch();
        system("cls");
        system("color 73");
        break;
      case 2:
        printf("\n\n\t\t %c%c%c%c%c%c%c  %c%c%c%c%c%c %c%c%c%c%c%c%c%c%c %c%c%c%c%c%c%c     %c%c%c  %c%c%c%c%c%c%c%c%c%c\n",
            219,219,219,219,219,219,187,219,219,219,219,219,187,219,219,219,219,219,219,219,219,187
            ,219,219,219,219,219,219,187,219,219,187,219,219,187,219,219,219,219,219,219,187);
        printf("\t\t%c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c    %c%c%c  %c%c%c%c%c%c%c%c%c%c%c\n",
           219,219,201,205,205,205,205,188,219,219,201,205,205,219,219,187,200,205,205,219,219,201,205,205,188,219
           ,219,201,205,205,205,219,219,187,219,219,186,219,219,186,219,219,201,205,205,219,219,187);
        printf("\t\t%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c   %c%c%c   %c%c%c   %c%c%c    %c%c%c%c%c%c%c%c%c%c%c  %c%c%c\n",
           219,219,186,219,219,219,187,219,219,219,219,219,219,219,186,219,219,186,219,219,186,219,219,
           186,219,219,219,219,219,219,219,186,219,219,186,219,219,186);
        printf("\t\t%c%c%c   %c%c%c%c%c%c%c%c%c%c%c   %c%c%c   %c%c%c   %c%c%c    %c%c%c%c%c%c%c%c%c%c%c  %c%c%c\n",
           219,219,186,219,219,186,219,219,201,205,205,219,219,186,219,219,186,219,219,186,219,219,186,200,205,205,205,205,219,219,186,219,219,186,219,219,186,219,219,186);
        printf("\t\t%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c   %c%c%c   %c%c%c%c%c%c%c%c%c         %c%c%c%c%c%c%c%c%c%c%c\n",
           200,219,219,219,219,219,219,201,188,219,219,186,219,219,186,219,219,186,200,219,219,219,219,219,219,201,188,219,219,186,219,219,219,219,219,219,201,188);
        printf("\t\t %c%c%c%c%c%c%c %c%c%c  %c%c%c   %c%c%c    %c%c%c%c%c%c%c          %c%c%c%c%c%c%c%c%c%c ",
           200,205,205,205,205,205,188,200,205,188,200,205,188,200,205,188,200,205,205,205,205,205,188,200,205,188,200,205,205,205,205,205,188);
        printf("\n\n\n\n\t\t\t\tJugador VS CPU\n\n\n");
        printf("\t\t\t\t1.) Nivel Facil\n\n");
        printf("\t\t\t\t2.) Nivel Medio\n\n");
        printf("\t\t\t\t3.) Nivel Dificil\n\n");
        printf("\t\t\t\t4.) Regresar\n\n\n");
        printf("Ingrese opcion: ");
        scanf("%d", &opc2);
        system("cls");
          switch (opc2){
          case 1:
            system("color 37");
            loopPvCPUf(m);
            getch();
            system("cls");
            system("color 73");
            break;
          case 2:
            system("color 37");
            loopPvCPUn(m);
            getch();
            system("cls");
            system("color 73");
            break;
          case 3:
            system("color 37");
            printf("\n\n\n\n\t\t\t\t*Muy pronto*");
            getch();
            system("cls");
            system("color 73");
            break;
          case 4:
            break;
          default:
            printf("\n\n\n\n\t\t\t\tOpcion no valida, intentelo de nuevo.");
            getch();
            system("cls");
          }
         break;
      case 3:
        printf("\n\n\n\n\t\t\t\t\t\tInstrucciones\n\n");
        printf("\n\n\n\n\t\t\t1. El objetivo de este juego es completar una linea formada por\n");
        printf("\t\t\tcuatro casillas consecutivas en un tablero de 4x4.\n\n");
        printf("\t\t\t2. Las lineas pueden ser horizontales, verticales o diagonales.\n\n");
        printf("\t\t\t3. Para poner una ficha basta con ingresar la etiqueta correspondiente\n");
        printf("\t\t\ta la casilla deseada.");
        getch();
        system("cls");
        break;
      case 4:
        break;
      default:
        printf("\n\n\n\n\t\t\t\tOpcion no valida, intentelo de nuevo.");
        getch();
        system("cls");
    }
    }while (opc!=4);

    return 0;
}

void introP1 (char m [4][4])  //Permite seleccionar casilla al jugador 1. Verifica casillas ya ocupadas.
{
    int i=0, j=0, n=0;
    char aux;

    do{
      do{
        printf("\tTurno Jugador 1\n");
        printf("\tSelecciona una casilla: ");
        fflush(stdin);
        scanf("%c", &aux);
        }while (aux < 'a' || aux >'p');
        n=0;
        switch(aux){
          case 'a':{
             i=0;
             j=0;
             if (m[i][j]=='X' || m[i][j]=='O'){
                n=1;
                printf("\tEsa casilla ya esta ocupada! Intentalo de nuevo.\n");
             }
             break;
          }
          case 'b':{
             i=0;
             j=1;
             if (m[i][j]=='X' || m[i][j]=='O'){
                n=1;
                printf("\tEsa casilla ya esta ocupada! Intentalo de nuevo.\n");
             }
             break;
          }
          case 'c':{
             i=0;
             j=2;
             if (m[i][j]=='X' || m[i][j]=='O'){
                n=1;
                printf("\tEsa casilla ya esta ocupada! Intentalo de nuevo.\n");
             }
             break;
          }
          case 'd':{
             i=0;
             j=3;
             if (m[i][j]=='X' || m[i][j]=='O'){
                n=1;
                printf("\tEsa casilla ya esta ocupada! Intentalo de nuevo.\n");
             }
             break;
          }
          case 'e':{
             i=1;
             j=0;
             if (m[i][j]=='X' || m[i][j]=='O'){
                n=1;
                printf("\tEsa casilla ya esta ocupada! Intentalo de nuevo.\n");
             }
             break;
          }
          case 'f':{
             i=1;
             j=1;
             if (m[i][j]=='X' || m[i][j]=='O'){
                n=1;
                printf("\tEsa casilla ya esta ocupada! Intentalo de nuevo.\n");
             }
             break;
          }
          case 'g':{
             i=1;
             j=2;
             if (m[i][j]=='X' || m[i][j]=='O'){
                n=1;
                printf("\tEsa casilla ya esta ocupada! Intentalo de nuevo.\n");
             }
             break;
          }
          case 'h':{
             i=1;
             j=3;
             if (m[i][j]=='X' || m[i][j]=='O'){
                n=1;
                printf("\tEsa casilla ya esta ocupada! Intentalo de nuevo.\n");
             }
             break;
          }
          case 'i':{
             i=2;
             j=0;
             if (m[i][j]=='X' || m[i][j]=='O'){
                n=1;
                printf("\tEsa casilla ya esta ocupada! Intentalo de nuevo.\n");
             }
             break;
          }
          case 'j':{
             i=2;
             j=1;
             if (m[i][j]=='X' || m[i][j]=='O'){
                n=1;
                printf("\tEsa casilla ya esta ocupada! Intentalo de nuevo.\n");
             }
             break;
          }
          case 'k':{
             i=2;
             j=2;
             if (m[i][j]=='X' || m[i][j]=='O'){
                n=1;
                printf("\tEsa casilla ya esta ocupada! Intentalo de nuevo.\n");
             }
             break;
          }
          case 'l':{
             i=2;
             j=3;
             if (m[i][j]=='X' || m[i][j]=='O'){
                n=1;
                printf("\tEsa casilla ya esta ocupada! Intentalo de nuevo.\n");
             }
             break;
          }
          case 'm':{
             i=3;
             j=0;
             if (m[i][j]=='X' || m[i][j]=='O'){
                n=1;
                printf("\tEsa casilla ya esta ocupada! Intentalo de nuevo.\n");
             }
             break;
          }
          case 'n':{
             i=3;
             j=1;
             if (m[i][j]=='X' || m[i][j]=='O'){
                n=1;
                printf("\tEsa casilla ya esta ocupada! Intentalo de nuevo.\n");
             }
             break;
          }
          case 'o':{
             i=3;
             j=2;
             if (m[i][j]=='X' || m[i][j]=='O'){
                n=1;
                printf("\tEsa casilla ya esta ocupada! Intentalo de nuevo.\n");
             }
             break;
          }
          case 'p':{
             i=3;
             j=3;
             if (m[i][j]=='X' || m[i][j]=='O'){
                n=1;
                printf("\tEsa casilla ya esta ocupada! Intentalo de nuevo.\n");
             }
             break;
          }

        }
    }while (n==1);
  m [i][j]='X';
}

void introP2 (char m [4][4])  //Permite seleccionar casilla al jugador 2. Verifica casillas ya ocupadas.
{
   int i=0, j=0, n=0;
   char aux;

    do{
      do{
        printf("\tTurno Jugador 2\n");
        printf("\tSelecciona una casilla: ");
        fflush(stdin);
        scanf("%c", &aux);
        }while (aux < 'a' || aux >'p');
        n=0;
        switch(aux){
          case 'a':{
             i=0;
             j=0;
             if (m[i][j]=='X' || m[i][j]=='O'){
                n=1;
                printf("\tEsa casilla ya esta ocupada! Intentalo de nuevo.\n");
             }
             break;
          }
          case 'b':{
             i=0;
             j=1;
             if (m[i][j]=='X' || m[i][j]=='O'){
                n=1;
                printf("\tEsa casilla ya esta ocupada! Intentalo de nuevo.\n");
             }
             break;
          }
          case 'c':{
             i=0;
             j=2;
             if (m[i][j]=='X' || m[i][j]=='O'){
                n=1;
                printf("\tEsa casilla ya esta ocupada! Intentalo de nuevo.\n");
             }
             break;
          }
          case 'd':{
             i=0;
             j=3;
             if (m[i][j]=='X' || m[i][j]=='O'){
                n=1;
                printf("\tEsa casilla ya esta ocupada! Intentalo de nuevo.\n");
             }
             break;
          }
          case 'e':{
             i=1;
             j=0;
             if (m[i][j]=='X' || m[i][j]=='O'){
                n=1;
                printf("\tEsa casilla ya esta ocupada! Intentalo de nuevo.\n");
             }
             break;
          }
          case 'f':{
             i=1;
             j=1;
             if (m[i][j]=='X' || m[i][j]=='O'){
                n=1;
                printf("\tEsa casilla ya esta ocupada! Intentalo de nuevo.\n");
             }
             break;
          }
          case 'g':{
             i=1;
             j=2;
             if (m[i][j]=='X' || m[i][j]=='O'){
                n=1;
                printf("\tEsa casilla ya esta ocupada! Intentalo de nuevo.\n");
             }
             break;
          }
          case 'h':{
             i=1;
             j=3;
             if (m[i][j]=='X' || m[i][j]=='O'){
                n=1;
                printf("\tEsa casilla ya esta ocupada! Intentalo de nuevo.\n");
             }
             break;
          }
          case 'i':{
             i=2;
             j=0;
             if (m[i][j]=='X' || m[i][j]=='O'){
                n=1;
                printf("\tEsa casilla ya esta ocupada! Intentalo de nuevo.\n");
             }
             break;
          }
          case 'j':{
             i=2;
             j=1;
             if (m[i][j]=='X' || m[i][j]=='O'){
                n=1;
                printf("\tEsa casilla ya esta ocupada! Intentalo de nuevo.\n");
             }
             break;
          }
          case 'k':{
             i=2;
             j=2;
             if (m[i][j]=='X' || m[i][j]=='O'){
                n=1;
                printf("\tEsa casilla ya esta ocupada! Intentalo de nuevo.\n");
             }
             break;
          }
          case 'l':{
             i=2;
             j=3;
             if (m[i][j]=='X' || m[i][j]=='O'){
                n=1;
                printf("\tEsa casilla ya esta ocupada! Intentalo de nuevo.\n");
             }
             break;
          }
          case 'm':{
             i=3;
             j=0;
             if (m[i][j]=='X' || m[i][j]=='O'){
                n=1;
                printf("\tEsa casilla ya esta ocupada! Intentalo de nuevo.\n");
             }
             break;
          }
          case 'n':{
             i=3;
             j=1;
             if (m[i][j]=='X' || m[i][j]=='O'){
                n=1;
                printf("\tEsa casilla ya esta ocupada! Intentalo de nuevo.\n");
             }
             break;
          }
          case 'o':{
             i=3;
             j=2;
             if (m[i][j]=='X' || m[i][j]=='O'){
                n=1;
                printf("\tEsa casilla ya esta ocupada! Intentalo de nuevo.\n");
             }
             break;
          }
          case 'p':{
             i=3;
             j=3;
             if (m[i][j]=='X' || m[i][j]=='O'){
                n=1;
                printf("\tEsa casilla ya esta ocupada! Intentalo de nuevo.\n");
             }
             break;
          }

        }
    }while (n==1);
  m [i][j]='O';
}

void introCPUf (char m [4][4]) // La maquina introduce fichas en posiciones al azar.
{
   int i=0, j=0, n=0;

   srand(time(NULL));
   do{
    i=rand()%4;
    j=rand()%4;

    if (m[i][j]=='X' || m[i][j]=='O')
        n=1;
    else
        n=0;
   }while (n==1);

   m[i][j]='O';
}

void introCPUn (char m [4][4])
{
    int i=0, j=0;
    int k, s;
    int h[5]={0,0,0,0,0}, v[5]={0,0,0,0,0};
    int lin[4]={5,5,5,5};
    srand(time(NULL));

    for (i=0;i<4;i++){
        for (j=0;j<4;j++){
          if (m[i][j]=='X'){
            h[i]++;
            v[j]++;
          }
          if (m[i][j]=='O'){
            h[i]=5;
            v[j]=5;
          }
          }
          if (m[i][i]=='X')
            h[4]++;
          if (m[i][3-i]=='O')
            v[4]++;
          if (m[i][i]=='O')
            h[4]=5;
          if (m[i][3-i]=='O')
            v[4]=5;
        }

    if (h[4]==3)
        lin[2]=1;
    if (v[4]==3)
        lin[3]=1;

    for (i=0; i<4; i++){
        if (h[i]==3)
            lin[0]=i;
        if (v[i]==3)
            lin[1]=i;
    }

    int n=0;

    do{
      k=rand()%4;
      s=rand()%4;

      if (lin[0]<5){
        k=lin[0];
        s=n;
      }
      if (lin[1]<5){
        k=n;
        s=lin[1];
      }
      if (lin[2]<5){
        k=n;
        s=n;
      }
      if (lin[3]<5){
        k=n;
        s=3-n;
      }
      i=k;
      j=s;
      n++;
    }while(m[i][j]=='X' || m[i][j]=='O');

    m[i][j]='O';

}

void loopPvP (char m[4][4]) // Crea un bucle para el modo jugador contra jugador.
{
  int i=0, n=0;

  inicializar(m);
  do{
    system ("cls");
    tablero(m);
    if (i%2==0){
        introP1(m);
    }
    else if (i%2!=0){
        introP2(m);
    }
    i=i+1;
    n = ganador(m);
  }while (i<16 && n==2);

  system ("cls");
  tablero(m);

  if (n==0){
    printf("\tHa ganado el jugador 1 !!!\n\n");
  }
  else if (n==1){
    printf("\tHa ganado el jugador 2 !!!\n\n");
  }
  else{
    printf("\tHa habido un empate !!!\n\n");
  }

}

void loopPvCPUf (char m [4][4])
{
    int i=0, n=0;

  inicializar(m);
  do{
    system ("cls");
    tablero(m);
    if (i%2==0){
        introP1(m);
    }
    else if (i%2!=0){
        introCPUf(m);
    }
    i=i+1;
    n = ganador(m);
  }while (i<16 && n==2);

  system ("cls");
  tablero(m);

  if (n==0){
    printf("\tFelicidades ha ganado !!!\n\n");
  }
  else if (n==1){
    printf("\tQue mal ha perdido !!!\n\n");
  }
  else{
    printf("\tHa habido un empate !!!\n\n");
  }
}

void loopPvCPUn (char m [4][4])
{
  int i=0, n=0;

  inicializar(m);
  do{
    system ("cls");
    tablero(m);
    if (i%2==0){
        introP1(m);
    }
    else if (i%2!=0){
        introCPUn(m);
    }
    i=i+1;
    n = ganador(m);
  }while (i<16 && n==2);

  system ("cls");
  tablero(m);

  if (n==0){
    printf("\tFelicidades ha ganado !!!\n\n");
  }
  else if (n==1){
    printf("\tQue mal ha perdido !!!\n\n");
  }
  else if (n==2){
    printf("\tHa habido un empate !!!\n\n");
  }
}

int ganador (char m[4][4]) // Determina el ganador de una partida.
{
                                                                // Respecto a A
    if (m[0][0]==m[0][1]&&m[0][0]==m[0][2]&&m[0][0]==m[0][3]){
        if (m[0][0]=='X'){
            return 0;
        }
        else if (m[0][0]=='O') {
            return 1;
        }
    }
    if (m[0][0]==m[1][0]&&m[0][0]==m[2][0]&&m[0][0]==m[3][0]){
      if (m[0][0]=='X'){
            return 0;
        }
        else if (m[0][0]=='O'){
            return 1;
        }
    }
    if (m[0][0]==m[1][1]&&m[0][0]==m[2][2]&&m[0][0]==m[3][3]){    // Diagonal.
      if (m[0][0]=='X'){
            return 0;
        }
        else if (m[0][0]=='O'){
            return 1;
        }
    }
                                                               // Termina A
                                                               // Respecto a P
    if (m[3][3]==m[3][2]&&m[3][3]==m[3][1]&&m[3][3]==m[3][0]){
      if (m[3][3]=='X'){
            return 0;
        }
        else if (m[3][3]=='O'){
            return 1;
        }
    }
    if (m[3][3]==m[2][3]&&m[3][3]==m[1][3]&&m[3][3]==m[0][3]){
      if (m[3][3]=='X'){
            return 0;
        }
        else if (m[3][3]=='O'){
            return 1;
        }
    }
                                                                     // Termina P
                                                                    // Respecto a J
    if (m[2][1]==m[2][0]&&m[2][1]==m[2][2]&&m[2][1]==m[2][3]){
        if (m[2][1]=='X'){
            return 0;
        }
        else if (m[2][1]=='O'){
            return 1;
        }
    }
    if (m[2][1]==m[3][1]&&m[2][1]==m[1][1]&&m[2][1]==m[0][1]){
        if (m[2][1]=='X'){
            return 0;
        }
        else if (m[2][1]=='O'){
            return 1;
        }
    }

    if (m[2][1]==m[3][0]&&m[2][1]==m[1][2]&&m[2][1]==m[0][3]){
        if (m[2][1]=='X'){
            return 0;
        }
        else if (m[2][1]=='O'){
            return 1;
        }
    }

                                                                      // Respecto a G
    if (m[1][2]==m[1][0]&&m[1][2]==m[1][1]&&m[1][2]==m[1][3]){
        if (m[1][2]=='X'){
            return 0;
        }
        else if (m[1][2]=='O'){
            return 1;
        }
    }
    if (m[1][2]==m[0][2]&&m[1][2]==m[2][2]&&m[1][2]==m[3][2]){
        if (m[1][2]=='X'){
            return 0;
        }
        else if (m[1][2]=='O'){
            return 1;
        }
    }

    else{
     return 2;
    }
}

void inicializar (char m[4] [4])  //Etiqueta tablero (de A hasta P).
{
    int i=0, j=0;
    char aux='a';
    for (i=0;i<4;i++){
        for(j=0;j<4;j++){
            m[i][j]=aux++;
        }
    }
}

void tablero (char m [4][4])    // Imprime tablero
{
    printf("\n\n\t\t %c%c%c%c%c%c%c  %c%c%c%c%c%c %c%c%c%c%c%c%c%c%c %c%c%c%c%c%c%c     %c%c%c  %c%c%c%c%c%c%c%c%c%c\n",
            219,219,219,219,219,219,187,219,219,219,219,219,187,219,219,219,219,219,219,219,219,187
            ,219,219,219,219,219,219,187,219,219,187,219,219,187,219,219,219,219,219,219,187);
    printf("\t\t%c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c    %c%c%c  %c%c%c%c%c%c%c%c%c%c%c\n",
           219,219,201,205,205,205,205,188,219,219,201,205,205,219,219,187,200,205,205,219,219,201,205,205,188,219
           ,219,201,205,205,205,219,219,187,219,219,186,219,219,186,219,219,201,205,205,219,219,187);
    printf("\t\t%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c   %c%c%c   %c%c%c   %c%c%c    %c%c%c%c%c%c%c%c%c%c%c  %c%c%c\n",
           219,219,186,219,219,219,187,219,219,219,219,219,219,219,186,219,219,186,219,219,186,219,219,
           186,219,219,219,219,219,219,219,186,219,219,186,219,219,186);
    printf("\t\t%c%c%c   %c%c%c%c%c%c%c%c%c%c%c   %c%c%c   %c%c%c   %c%c%c    %c%c%c%c%c%c%c%c%c%c%c  %c%c%c\n",
           219,219,186,219,219,186,219,219,201,205,205,219,219,186,219,219,186,219,219,186,219,219,186,200,205,205,205,205,219,219,186,219,219,186,219,219,186,219,219,186);
    printf("\t\t%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c   %c%c%c   %c%c%c%c%c%c%c%c%c         %c%c%c%c%c%c%c%c%c%c%c\n",
           200,219,219,219,219,219,219,201,188,219,219,186,219,219,186,219,219,186,200,219,219,219,219,219,219,201,188,219,219,186,219,219,219,219,219,219,201,188);
    printf("\t\t %c%c%c%c%c%c%c %c%c%c  %c%c%c   %c%c%c    %c%c%c%c%c%c%c          %c%c%c%c%c%c%c%c%c%c ",
           200,205,205,205,205,205,188,200,205,188,200,205,188,200,205,188,200,205,205,205,205,205,188,200,205,188,200,205,205,205,205,205,188);

    printf("\n\n\n\n\t\t\t\t    %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 201,205,205,205,203,205,205,205,203,205,205,205,203,205,205,205,187);
    printf("\t\t\t\t    %c %c %c %c %c %c %c %c %c\n", 186,m[0][0],186,m[0][1],186,m[0][2],186,m[0][3],186);
    printf("\t\t\t\t    %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 204,205,205,205,206,205,205,205,206,205,205,205,206,205,205,205,185);
    printf("\t\t\t\t    %c %c %c %c %c %c %c %c %c\n", 186,m[1][0],186,m[1][1],186,m[1][2],186,m[1][3],186);
    printf("\t\t\t\t    %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 204,205,205,205,206,205,205,205,206,205,205,205,206,205,205,205,185);
    printf("\t\t\t\t    %c %c %c %c %c %c %c %c %c\n", 186,m[2][0],186,m[2][1],186,m[2][2],186,m[2][3],186);
    printf("\t\t\t\t    %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 204,205,205,205,206,205,205,205,206,205,205,205,206,205,205,205,185);
    printf("\t\t\t\t    %c %c %c %c %c %c %c %c %c\n", 186,m[3][0],186,m[3][1],186,m[3][2],186,m[3][3],186);
    printf("\t\t\t\t    %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 200,205,205,205,202,205,205,205,202,205,205,205,202,205,205,205,188);
    printf("\n\n");
}
