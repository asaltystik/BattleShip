//
// Created by caric on 1/25/2021.
//

#include "Battleship.h"

Battleship::Battleship() {
    srand(time(0));
    char** board = makeBoard();
    //printBoard(board);
    populateBoard(board);
}


char ** Battleship::makeBoard() {
    char** array = static_cast<char **>(malloc(sizeof(char *) * (8 + 1)));
    for (int i = 0; i < 8; i++) {
        array[i] = static_cast<char *>(malloc(sizeof(char* ) * ((8 + 1))));
        }

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            array[i][j] = '0';
        }

    }

    return array;
}

void Battleship::printBoard(char **board) {
    std::cout << " ---------\n";
    for (int i = 0; i < 8; i++) {
        std::cout << "|";
        for (int j = 0; j < 8; j++) {
            std::cout << board[i][j];
        }
        std::cout << "|\n";
    }
    std:: cout << " ---------\n";
}

char **Battleship::populateBoard(char **board) {
    char **array = board;
    for (int i = 0; i < 4; i++) {
        ships[i].size = 2;
        ships[i].rotation = rand() % 2 + 1;
            //1 = vert, 2 = hori
            if (ships[i].rotation == 1) {
                ships[i].x1 = rand() % 8;
                ships[i].y1 = rand() % ((8 - ships[i].size));
                ships[i].y2 = ships[i].y1 + ships[i].size - 1;
                std::cout << "Ship is vertical starting at col" << ships[i].x1 << " " << ships[i].y1;
                std:: cout << " " << ships[i].y2 << std::endl;
            } else if (ships[i].rotation == 2) {
                ships[i].y1 = rand() % 8;
                std::cout << "Ship is horizontal starting at row" << ships[i].y1 << " " << ships[i].x1;
                std:: cout << " " << ships[i].x2 << std::endl;
                ships[i].x1 = rand() % ((8 - ships[i].size));
                ships[i].x2 = ships[i].x1 + ships[i].size - 1;
            }
        ships[i].size++;
    }

    return array;
}
