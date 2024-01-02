g++ -c main.cpp -I".\Libraries\SFML-2.6.1\include"
g++ main.o -o main -L".\Libraries\SFML-2.6.1\lib" -lsfml-graphics -lsfml-window -lsfml-system
.\main.exe