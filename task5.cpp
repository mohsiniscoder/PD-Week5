#include <iostream>
#include <windows.h>
using namespace std;

// Function Prototype

void printMaze();

void gotoxy(int x, int y);

void erase(int x, int y);

void printPacman(int x, int y);

char getCharAtxy(short int x, short int y);
main(){
int pacmanX = 4; // X Coordinate of Pacman
int pacmanY = 4; // Y Coordinate of Pacman
bool gameRunning = true;

 

system("cls");
printMaze();
printPacman(pacmanX, pacmanY);
    while (gameRunning)
{
  if(GetAsyncKeyState(VK_LEFT)){
  char next_location = getCharAtxy(pacmanX -1,pacmanY);
  if (next_location == ' ')
  {
   erase(pacmanX,pacmanY);
   pacmanX = pacmanX -1 ;
   printPacman(pacmanX,pacmanY);
  }
  }
  if(GetAsyncKeyState(VK_RIGHT)){
  char next_location = getCharAtxy(pacmanX -1,pacmanY);
  if (next_location == ' ')
  {
   erase(pacmanX,pacmanY);
   pacmanX = pacmanX +1 ;
   printPacman(pacmanX,pacmanY);
  }
  }
  if(GetAsyncKeyState(VK_UP)){
  char next_location = getCharAtxy(pacmanX -1,pacmanY);
  if (next_location == ' ')
  {
   erase(pacmanX,pacmanY);
   pacmanY = pacmanY -1 ;
   printPacman(pacmanX,pacmanY);
  }
  }
    if(GetAsyncKeyState(VK_DOWN)){
  char next_location = getCharAtxy(pacmanX -1,pacmanY);
  if (next_location == ' ')
  {
   erase(pacmanX,pacmanY);
   pacmanY = pacmanY +1 ;
   printPacman(pacmanX,pacmanY);
  }
  }
  if(GetAsyncKeyState(VK_ESCAPE)){
  gameRunning = false; 
  }
  Sleep(200);
  }
}
void printMaze()
{
cout<<"######################################################################   "<<endl;
cout<<"||.. .....................................................  ......  ||   "<<endl;
cout<<"||.. %%%%%%%%%%%%%%%%        ...     %%%%%%%%%%%%%%  |%|..   %%%%   ||    "<<endl;
cout<<"||..        |%|   |%|     |%|...     |%|        |%|  |%|..    |%|   ||      "<<endl;
cout<<"||..        |%|   |%|     |%|...     |%|        |%|  |%|..    |%|   ||      "<<endl;
cout<<"||..         %%%%%%%  . . |%|...     %%%%%%%%%%%%%%     ..   %%%%.  ||      "<<endl;
cout<<"||..         |%|      . . |%|...    ............... |%| ..       .  ||      "<<endl;
cout<<"||..         %%%%%%%%%. . |%|...    %%%%%%%%%%%%    |%| ..   %%%%.  ||      "<<endl;
cout<<"||..               |%|.             |%|......       |%| ..    |%|.  ||      "<<endl;
cout<<"||..     ......... |%|.             |%|......|%|        ..    |%|.  ||      "<<endl;
cout<<"||..|%|  |%|%%%|%|.|%|.  |%|           ......|%|        ..|%| |%|.  ||      "<<endl;
cout<<"||..|%|  |%|   |%|..     %%%%%%%%%%%%%  .....|%|         .|%|.      ||      "<<endl;
cout<<"||..|%|  |%|   |%|..             ...|%|   %%%%%%         . |%|.     ||      "<<endl;
cout<<"||..|%|            .             ...|%|              |%| ..|%|.     ||      "<<endl;
cout<<"||..|%|  %%%%%%%%%%%%%           ...|%|%%%%%%%%%     |%| ..|%|%%%%  ||      "<<endl;
cout<<"||..............................................     |%| .........  ||      "<<endl;
cout<<"||   ...........................................            ......  ||       "<<endl;
cout<<"||..|%|  |%|  |%|..    %%%%%%%%%%%%%%  ......|%|     |%| ..|%|.     ||   "<<endl;
cout<<"||..|%|  |%|  |%|..            ...|%|     %%%%%%     |%| ..|%|.     ||      "<<endl;
cout<<"||..|%|           .     G      ...|%|                |%| ..|%|.     ||     "<<endl;
cout<<"||..|%|                        ...|%|%%%%%%%%        |%| ..|%|%%%%  ||     "<<endl;
cout<<"||............................................       |%| .......... ||       "<<endl;
cout<<"||  ...........................................             ....... ||        "<<endl;
cout<<"###################################################################### "<<endl;
}
void gotoxy(int x,int y ){
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
char getCharAtxy(short int x, short int y)
{
 CHAR_INFO ci;
 COORD xy = {0,0};
 SMALL_RECT rect = {x,y,x,y};
 COORD coordBufSize;
 coordBufSize.X = 1;
 coordBufSize.Y = 1;
 return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE),&ci,coordBufSize,xy,&rect) ? ci.Char.AsciiChar: ' ';
}
void erase (int x, int y )
{

    gotoxy(x,y);
    cout<<" ";
}
void printPacman (int x,int y)
{
 gotoxy(x,y);
 cout<<"P";
}