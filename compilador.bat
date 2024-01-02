g++ -c main.cpp -I".\SFML-2.6.1\include"
g++ main.o -o main -L".\SFML-2.6.1\lib" -lsfml-graphics -lsfml-window -lsfml-system
.\main.exe