g++ -c prueba.cpp -I".\Libraries\SFML-2.6.1\include"
g++ prueba.o -o prueba -L".\Libraries\SFML-2.6.1\lib" -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio
.\prueba.exe