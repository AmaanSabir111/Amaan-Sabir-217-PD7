#include <iostream>
#include <windows.h>
using namespace std;

void printMaze();
void player();
void moveplayer();
void eraseplayer();
void enemy1();
void enemy2();
void enemy3();
void gotoxy(int x, int y);
char getCharAtxy(short int x, short int y);
void moveplayerLeft();
void moveplayerRight();
void moveplayerUp();
void erasee1();
void moveplayerDown();
void e1();
void erasee2();
void erasee3();
void e2();
void e3();
int px = 43, py = 29;
int ex1 = 13, ey1 = 1;
int ex2 = 47, ey2 = 1;
int ex3 = 83, ey3 = 1;
void score();
int s;
main()
{
    system("cls");
    printMaze();
    player();
    enemy1();
    enemy2();
    enemy3();
    while (true)
    {
        moveplayer();
        e1();
        e2();
        e3();
        score();
      
    }
      
}
void printMaze()
{
    cout << " ############################################################################################################################" << endl;
    cout << " ##                                                                                                                        ##" << endl;
    cout << " ##                                                                                                                        ##" << endl;
    cout << " ##                                                                                                                        ##" << endl;
    cout << " ##                                                                                                                        ##" << endl;
    cout << " ##                                                                                                                        ##" << endl;
    cout << " ##                                                                                                                        ##" << endl;
    cout << " ##                                                                                                                        ##" << endl;
    cout << " ##                                                                                                                        ##" << endl;
    cout << " ##                                                                                                                        ##" << endl;
    cout << " ##                                                                                                                        ##" << endl;
    cout << " ##                                                                                                                        ##" << endl;
    cout << " ##                                                                                                                        ##" << endl;
    cout << " ##                                                                                                                        ##" << endl;
    cout << " ##                                                                                                                        ##" << endl;
    cout << " ##                                                                                                                        ##" << endl;
    cout << " ##                                                                                                                        ##" << endl;
    cout << " ##                                                                                                                        ##" << endl;
    cout << " ##                                                                                                                        ##" << endl;
    cout << " ##                                                                                                                        ##" << endl;
    cout << " ##                                                                                                                        ##" << endl;
    cout << " ##                                                                                                                        ##" << endl;
    cout << " ##                                                                                                                        ##" << endl;
    cout << " ##                                                                                                                        ##" << endl;
    cout << " ##                                                                                                                        ##" << endl;
    cout << " ##                                                                                                                        ##" << endl;
    cout << " ##                                                                                                                        ##" << endl;
    cout << " ##                                                                                                                        ##" << endl;
    cout << " ##                                                                                                                        ##" << endl;
    cout << " ##                                                                                                                        ##" << endl;
    cout << " ##                                                                                                                        ##" << endl;
    cout << " ##                                                                                                                        ##" << endl;
    cout << " ##                                                                                                                        ##" << endl;
    cout << " ############################################################################################################################" << endl;
}
void score(){
    gotoxy(1,34);
    cout<<"SCORE:";
    
}
void player()
{
    gotoxy(px, py);
    cout << "    ____";
    gotoxy(px, py + 1);
    cout << " __|    |__";
    gotoxy(px, py + 2);
    cout << "|          |";
    gotoxy(px, py + 3);
    cout << " ---O  O--- ";
}

char getCharAtxy(short int x, short int y)
{
    CHAR_INFO ci;
    COORD xy = {0, 0};
    SMALL_RECT rect = {x, y, x, y};
    COORD coordBufSize;
    coordBufSize.X = 1;
    coordBufSize.Y = 1;
    return ReadConsoleOutput((GetStdHandle(STD_OUTPUT_HANDLE)), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar : ' ';
}

void eraseplayer()
{
    gotoxy(px, py);
    cout << "        ";
    gotoxy(px, py + 1);
    cout << "           ";
    gotoxy(px, py + 2);
    cout << "            ";
    gotoxy(px, py + 3);
    cout << "            ";
}
void enemy1()
{
    gotoxy(ex1, ey1 + 1);
    cout << " _________ ";
    gotoxy(ex1, ey1 + 2);
    cout << "|         |";
    gotoxy(ex1, ey1 + 3);
    cout << " __|___|__ ";
    gotoxy(ex1, ey1 + 4);
    cout << " ********* ";
}
void erasee1()
{
    gotoxy(ex1, ey1 + 1);
    cout << "          ";
    gotoxy(ex1, ey1 + 2);
    cout << "          ";
    gotoxy(ex1, ey1 + 3);
    cout << "          ";
    gotoxy(ex1, ey1 + 4);
    cout << "          ";
}
void e1()
{
    if (getCharAtxy(ex1, ey1 + 5) == ' ')
    {
        erasee1();
        ey1 = ey1 + 1;
        enemy1();
        Sleep(50);
    }
}
void enemy3()
{
    gotoxy(ex3, ey3 + 1);
    cout << " _________ ";
    gotoxy(ex3, ey3 + 2);
    cout << "|         |";
    gotoxy(ex3, ey3 + 3);
    cout << " __|___|__ ";
    gotoxy(ex3, ey3 + 4);
    cout << " ********* ";
}
void erasee3()
{
    gotoxy(ex3, ey3 + 1);
    cout << "           ";
    gotoxy(ex3, ey3 + 2);
    cout << "           ";
    gotoxy(ex3, ey3 + 3);
    cout << "           ";
    gotoxy(ex3, ey3 + 4);
    cout << "           ";
}
void e3()
{
    if (getCharAtxy(ex3, ey3 + 5) == ' ')
    {
        erasee3();
        ey3 = ey3 + 1;
        enemy3();
        Sleep(50);
    }
}
void enemy2()
{
    gotoxy(ex2, ey2 + 1);
    cout << " __________________ ";
    gotoxy(ex2, ey2 + 2);
    cout << "|                  |";
    gotoxy(ex2, ey2 + 3);
    cout << "|__________________|";
    gotoxy(ex2, ey2 + 4);
    cout << "  |______________|  ";
    gotoxy(ex2, ey2 + 5);
    cout << "   |____________|   ";
    gotoxy(ex2, ey2 + 6);
    cout << "     |________|     ";
    gotoxy(ex2, ey2 + 7);
    cout << "       |____|       ";
}
void e2()
{
    if (getCharAtxy(ex2, ey2 + 8) == ' ')
    {
        erasee2();
        ey2 = ey2 + 1;
        enemy2();
        Sleep(50);
    }
}
void erasee2()
{
    gotoxy(ex2, ey2 + 1);
    cout << "                    ";
    gotoxy(ex2, ey2 + 2);
    cout << "                    ";
    gotoxy(ex2, ey2 + 3);
    cout << "                    ";
    gotoxy(ex2, ey2 + 4);
    cout << "                    ";
    gotoxy(ex2, ey2 + 5);
    cout << "                    ";
    gotoxy(ex2, ey2 + 6);
    cout << "                    ";
    gotoxy(ex2, ey2 + 7);
    cout << "                    ";
}
void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void moveplayerLeft()
{
    if (getCharAtxy(px - 1, py) == ' ')
    {
        eraseplayer();
        px = px - 1;

        player();
        Sleep(10);
    }
}
void moveplayerRight()
{
    if (getCharAtxy(px + 12, py) == ' ')
    {
        eraseplayer();
        px = px + 1;

        player();
        Sleep(10);
    }
}
void moveplayer()
{
    if (GetAsyncKeyState(VK_LEFT))
    {
        moveplayerLeft();
    }
    else if (GetAsyncKeyState(VK_RIGHT))
    {
        moveplayerRight();
    }
    else if (GetAsyncKeyState(VK_UP))
    {
        moveplayerUp();
    }
    else if (GetAsyncKeyState(VK_DOWN))
    {
        moveplayerDown();
    }
}

void moveplayerUp()
{
    if (getCharAtxy(px, py - 1) == ' ')
    {

        eraseplayer();
        py = py - 1;

        player();
        Sleep(10);
    }
}
void moveplayerDown()
{
    if (getCharAtxy(px, py + 4) == ' ')
    {
        eraseplayer();
        py = py + 1;

        player();
        Sleep(10);
    }
}