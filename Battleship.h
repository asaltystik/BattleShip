//
// Created by caric on 1/25/2021.
//

#ifndef BATTLESHIP_BATTLESHIP_H
#define BATTLESHIP_BATTLESHIP_H


#include <cstdlib>
#include <iostream>
#include <time.h>

class Battleship {
private:
    struct ship{
        int x1, x2, y1, y2,size, hits;
        int rotation;

    } ship;

    struct ship ships[4];


public:
    Battleship();

    char** makeBoard();
    void printBoard(char** board);
    char** populateBoard(char** board);

};


#endif //BATTLESHIP_BATTLESHIP_H
