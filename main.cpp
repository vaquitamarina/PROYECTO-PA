#include <bits/stdc++.h>
#include <windows.h> 

#define ARRIBA 119
#define ABAJO 115
#define ENTER 13

using namespace std;
//Funciones de terminal y captura de teclas
void gotoxy(int x,int y);
char getch2();


class Partida{
    private:
        
    public:
    int menu(string, string[], int);
    void menuPrincipal();
};
//Partida Metodo
int Partida::menu(string titulo, string opciones[], int n){
    int opSeleccionada = 1;
    int tecla;

    bool flag = true;

    do{
        system("cls");
        gotoxy(5, 10 + opSeleccionada); cout << "==>" << endl;
        gotoxy(15, 1); cout << titulo;
        for (int i = 0; i < n; ++i) {
            gotoxy(10, 11 + i); cout << i + 1 << ") " << opciones[i];
        }
    

        do {
            tecla = getch2();
        } while (tecla != ARRIBA && tecla != ABAJO && tecla != ENTER);

        switch(tecla){
            case ARRIBA:   
                opSeleccionada--;

                if (opSeleccionada < 1) {
                    opSeleccionada = n;
                }
                break;
 
            case ABAJO:
                opSeleccionada++;
 
                if (opSeleccionada > n) {
                    opSeleccionada = 1;
                }
                break; 
            case ENTER:
                flag = false;
                break;
        }
   }while(flag);
 
   return opSeleccionada;
}

void Partida::menuPrincipal(){
    bool flag = true;
    int op;

    string titulo = R"(
________        ___  _______   ________  ________  _______   ________     
|\   __  \      |\  \|\  ___ \ |\   ___ \|\   __  \|\  ___ \ |\_____  \    
\ \  \|\  \     \ \  \ \   __/|\ \  \_|\ \ \  \|\  \ \   __/| \|___/  /|   
 \ \   __  \  __ \ \  \ \  \_|/_\ \  \ \\ \ \   _  _\ \  \_|/__   /  / /   
  \ \  \ \  \|\  \\_\  \ \  \_|\ \ \  \_\\ \ \  \\  \\ \  \_|\ \ /  /_/__  
   \ \__\ \__\ \________\ \_______\ \_______\ \__\\ _\\ \_______\\________\
    \|__|\|__|\|________|\|_______|\|_______|\|__|\|__|\|_______|\|_______| )";
    string opciones[] = {"Iniciar partida","Configuracion", "Salir"};
    int n = 3;

    do{
        op = menu(titulo,opciones,n);

        switch(op){
            case 1:
                system("cls");
                cout<<"hola";
                system("pause>nul");
                break;
            case 2:
                system("cls");
                cout<<"chau";
                system("pause>nul");
                break;
            case 3:
                flag = false;
                break;
        }
    }while(flag);
}

class Pieza{
    protected:
        int posX;
        int posY;
        char color;
    public:
        Pieza(int, int, char);
};

Pieza::Pieza(int x, int y, char c){
    posX = x;
    posY = y;
    color = c;
}

class Peon : public Pieza{

};

class Caballo : public Pieza{

};

class Alfil : public Pieza{

};

class Torre : public Pieza{

};

class Reina : public Pieza{

};

class Rey : public Pieza{

};

class Tablero{
    private:
        int matriz[8][8];
    public:

};

 


int main (){
    Partida prueba;
    prueba.menuPrincipal();
    return 0;
}







char getch2(){
   char c=0;
   DWORD modo, contador;
   HANDLE ih = GetStdHandle(STD_INPUT_HANDLE);
 
   // Desactivamos escritura en terminal
   SetConsoleMode (ih, modo & ~(ENABLE_ECHO_INPUT | ENABLE_LINE_INPUT));
 
   ReadConsoleA (ih, &c, 1, &contador, NULL);
 
   if (c == 0) {
      ReadConsoleA (ih, &c, 1, &contador, NULL);
   }
 
   SetConsoleMode (ih, modo); // Devolvemos control normal
 
   return c;
}
void gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
 }