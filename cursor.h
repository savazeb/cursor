/*
 * cursor:
 *  Cursor API on Windows.
 *  Copyright (c) 2024 savazeb
 ***********************************************************************
 */


#ifndef CURSOR_H
#define CURSOR_H

#include <windows.h>
#include <math.h>
#include <time.h>

#define STEPS     100
#define STEPSTIME 10

#define SCREENWIDTH  GetSystemMetrics(SM_CXSCREEN)
#define SCREENHEIGHT GetSystemMetrics(SM_CYSCREEN)

void moveCursorSmoothly(int startX, int startY, int endX, int endY);

#endif /* CURSOR_H */
