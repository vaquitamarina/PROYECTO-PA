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