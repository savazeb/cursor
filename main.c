/*
 *  Simulates smooth cursor movement on Windows.
 *  Copyright (c) 2024 savazeb
 ***********************************************************************
 */

#include "cursor.h"

int main()
{
    POINT currentPos;

    int startX, startY;
    int endX, endY;

    srand(time(NULL));

    for (;;)
    {
        GetCursorPos(&currentPos);

        startX = currentPos.x;
        startY = currentPos.y;

        endX = rand() % SCREENWIDTH;
        endY = rand() % SCREENHEIGHT;

        moveCursorSmoothly(startX, startY, endX, endY);
    }

    return 0;
}
