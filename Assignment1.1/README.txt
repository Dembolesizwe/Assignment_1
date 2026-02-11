To compile the the files we have 2 seperate files we need to compile, combine and then run. 
The following can be pasted into the terminal directly and run to complete this. 


g++ -c .\Assignment1.1\src\divide.cpp -o .\Assignment1.1\divide.o
g++ -c .\Assignment1.1\src\main.cpp -o .\Assignment1.1\main.o
g++ .\Assignment1.1\main.o .\Assignment1.1\divide.o -o assignment1.1.exe
.\assignment1.1.exe 