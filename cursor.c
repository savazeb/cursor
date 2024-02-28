/*
 * cursor:
 *  Cursor API on Windows.
 *  Copyright (c) 2024 savazeb
 ***********************************************************************
 */


#include "cursor.h"

#include <stdlib.h>

/*
 * moveMouseSmoothly:
 *	Smoothly moves the mouse cursor from one position to another.
 *********************************************************************************
 */
void moveCursorSmoothly(int startX, int startY, int endX, int endY) {
    double deltaX = (double)(endX - startX) / STEPS;
    double deltaY = (double)(endY - startY) / STEPS;

    INPUT input = {0};
    input.type = INPUT_MOUSE;

    for (int i = 1; i <= STEPS; ++i) {
        int intermediateX = startX + (int)round(deltaX * i);
        int intermediateY = startY + (int)round(deltaY * i);

        input.mi.dx = intermediateX * (65536 / SCREENWIDTH);
        input.mi.dy = intermediateY * (65536 / SCREENHEIGHT);
        input.mi.dwFlags = MOUSEEVENTF_MOVE | MOUSEEVENTF_ABSOLUTE;

        SendInput(1, &input, sizeof(INPUT));

        Sleep(STEPSTIME);
    }
}
