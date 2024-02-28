# Mouse Cursor Movement Simulator

This C program simulates mouse cursor movement on Windows by smoothly moving the cursor from its current position to a randomly generated target position within the screen boundaries.

## Prerequisites

- Windows operating system
- C compiler

## How to Use

1. Compile the code using a C compiler. For example, using GCC:

    ```bash
    gcc -o cursor.exe main.c cursor.c
    ```

2. Run the compiled executable:

    ```bash
    cursor.exe
    ```

3. The program will continuously move the mouse cursor to random positions within the screen boundaries.

## Parameters

- `STEPS`: Number of steps for smooth movement.
- `STEPSTIME`: Duration of each step in milliseconds.
- `SCREENWIDTH`: Width of the screen in pixels.
- `SCREENHEIGHT`: Height of the screen in pixels.
