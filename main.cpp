#include <iostream>
#include <windows.h>
#include <stdlib.h>
using namespace std;

int nameDrop = 2800;
int nameLoc = 16000;
int copyLoc = 48000;
int emailLoc = 40500;

int cellLoc = 14000;
int cellDrop = 1200;
int pasteLoc = 19000;

void leftClickName(){
    INPUT Inputs[3] = {0};

    Inputs[0].type = INPUT_MOUSE;
    Inputs[0].mi.dx = 14000; // desired X coordinate
    Inputs[0].mi.dy = nameLoc; // desired Y coordinate
    Inputs[0].mi.dwFlags = MOUSEEVENTF_ABSOLUTE | MOUSEEVENTF_MOVE;

    Inputs[1].type = INPUT_MOUSE;
    Inputs[1].mi.dwFlags = MOUSEEVENTF_LEFTDOWN;

    Inputs[2].type = INPUT_MOUSE;
    Inputs[2].mi.dwFlags = MOUSEEVENTF_LEFTUP;

    SendInput(3, Inputs, sizeof(INPUT));
}

void rightClickEmail() {
    INPUT Inputs[3] = {0};

    Inputs[0].type = INPUT_MOUSE;
    Inputs[0].mi.dx = 26000; // desired X coordinate
    Inputs[0].mi.dy = 40500; // desired Y coordinate
    Inputs[0].mi.dwFlags = MOUSEEVENTF_ABSOLUTE | MOUSEEVENTF_MOVE;

    Inputs[1].type = INPUT_MOUSE;
    Inputs[1].mi.dwFlags = MOUSEEVENTF_RIGHTDOWN;

    Inputs[2].type = INPUT_MOUSE;
    Inputs[2].mi.dwFlags = MOUSEEVENTF_RIGHTUP;

    SendInput(3, Inputs, sizeof(INPUT));

}

void leftClickCopy() {
    INPUT Inputs[3] = {0};

    Inputs[0].type = INPUT_MOUSE;
    Inputs[0].mi.dx = 27000; // desired X coordinate
    Inputs[0].mi.dy = 48000; // desired Y coordinate
    Inputs[0].mi.dwFlags = MOUSEEVENTF_ABSOLUTE | MOUSEEVENTF_MOVE;

    Inputs[1].type = INPUT_MOUSE;
    Inputs[1].mi.dwFlags = MOUSEEVENTF_LEFTDOWN;

    Inputs[2].type = INPUT_MOUSE;
    Inputs[2].mi.dwFlags = MOUSEEVENTF_LEFTUP;

    SendInput(3, Inputs, sizeof(INPUT));
}

void openExcel() {
    INPUT Inputs[3] = {0};

    Inputs[0].type = INPUT_MOUSE;
    Inputs[0].mi.dx = 16000; // desired X coordinate
    Inputs[0].mi.dy = 65000; // desired Y coordinate
    Inputs[0].mi.dwFlags = MOUSEEVENTF_ABSOLUTE | MOUSEEVENTF_MOVE;

    Inputs[1].type = INPUT_MOUSE;
    Inputs[1].mi.dwFlags = MOUSEEVENTF_LEFTDOWN;

    Inputs[2].type = INPUT_MOUSE;
    Inputs[2].mi.dwFlags = MOUSEEVENTF_LEFTUP;

    SendInput(3, Inputs, sizeof(INPUT));

}

void clickCell() {
    INPUT Inputs[3] = {0};

    Inputs[0].type = INPUT_MOUSE;
    Inputs[0].mi.dx = 2000; // desired X coordinate
    Inputs[0].mi.dy = cellLoc; // desired Y coordinate
    Inputs[0].mi.dwFlags = MOUSEEVENTF_ABSOLUTE | MOUSEEVENTF_MOVE;

    Inputs[1].type = INPUT_MOUSE;
    Inputs[1].mi.dwFlags = MOUSEEVENTF_LEFTDOWN;

    Inputs[2].type = INPUT_MOUSE;
    Inputs[2].mi.dwFlags = MOUSEEVENTF_LEFTUP;

    SendInput(3, Inputs, sizeof(INPUT));
}

void rightClickCell() {
    INPUT Inputs[3] = {0};

    Inputs[0].type = INPUT_MOUSE;
    Inputs[0].mi.dx = 2000; // desired X coordinate
    Inputs[0].mi.dy = cellLoc; // desired Y coordinate
    Inputs[0].mi.dwFlags = MOUSEEVENTF_ABSOLUTE | MOUSEEVENTF_MOVE;

    Inputs[1].type = INPUT_MOUSE;
    Inputs[1].mi.dwFlags = MOUSEEVENTF_RIGHTDOWN;

    Inputs[2].type = INPUT_MOUSE;
    Inputs[2].mi.dwFlags = MOUSEEVENTF_RIGHTUP;

    SendInput(3, Inputs, sizeof(INPUT));
}

void paste() {
    INPUT Inputs[3] = {0};

    Inputs[0].type = INPUT_MOUSE;
    Inputs[0].mi.dx = 3000; // desired X coordinate
    Inputs[0].mi.dy = pasteLoc; // desired Y coordinate
    Inputs[0].mi.dwFlags = MOUSEEVENTF_ABSOLUTE | MOUSEEVENTF_MOVE;

    Inputs[1].type = INPUT_MOUSE;
    Inputs[1].mi.dwFlags = MOUSEEVENTF_LEFTDOWN;

    Inputs[2].type = INPUT_MOUSE;
    Inputs[2].mi.dwFlags = MOUSEEVENTF_LEFTUP;

    SendInput(3, Inputs, sizeof(INPUT));
}
void openChrome() {
    INPUT Inputs[3] = {0};

    Inputs[0].type = INPUT_MOUSE;
    Inputs[0].mi.dx = 11000; // desired X coordinate
    Inputs[0].mi.dy = 65000; // desired Y coordinate
    Inputs[0].mi.dwFlags = MOUSEEVENTF_ABSOLUTE | MOUSEEVENTF_MOVE;

    Inputs[1].type = INPUT_MOUSE;
    Inputs[1].mi.dwFlags = MOUSEEVENTF_LEFTDOWN;

    Inputs[2].type = INPUT_MOUSE;
    Inputs[2].mi.dwFlags = MOUSEEVENTF_LEFTUP;

    SendInput(3, Inputs, sizeof(INPUT));

}
void closeBox() {
    INPUT Inputs[3] = {0};

    Inputs[0].type = INPUT_MOUSE;
    Inputs[0].mi.dx = 40800; // desired X coordinate
    Inputs[0].mi.dy = 26200; // desired Y coordinate
    Inputs[0].mi.dwFlags = MOUSEEVENTF_ABSOLUTE | MOUSEEVENTF_MOVE;

    Inputs[1].type = INPUT_MOUSE;
    Inputs[1].mi.dwFlags = MOUSEEVENTF_LEFTDOWN;

    Inputs[2].type = INPUT_MOUSE;
    Inputs[2].mi.dwFlags = MOUSEEVENTF_LEFTUP;

    SendInput(3, Inputs, sizeof(INPUT));

}
int main() {
    for (int i = 1; i <= 15; i++) {
        Sleep(500);
        leftClickName();
        Sleep(500);
        rightClickEmail();
        Sleep(500);
        leftClickCopy();
        Sleep(500);
        openExcel();
        Sleep(500);
        clickCell();
        Sleep(500);
        rightClickCell();
        Sleep(500);
        paste();
        Sleep(500);
        openChrome();
        Sleep(500);
        closeBox();

        nameLoc = nameLoc + nameDrop;
        cellLoc = cellLoc + cellDrop;
        pasteLoc = pasteLoc + cellDrop;
    }
    return 0;

}