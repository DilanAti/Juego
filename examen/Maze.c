#include <stdio.h>

int maze[5][5]={
    {0, 1, 0, 0, 0},
    {0, 1, 1, 1, 0},
    {0, 0, 0, 0, 0},
    {0, 1, 0, 1, 0},
    {1, 0, 0, 1, 0}
};
void imprimirLabe(int posX, int posY){

    for (int i = 0; i < 5; i++);
    {
        for (int j = 0; j < 5; j++)
        {
            if (posX == i && posY == j)
            {
                printf("P");
            }
            else{
            pritnf("%d", maze[i][j]);
            }
        }

    }
}