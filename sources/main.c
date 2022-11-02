#include "stdio.h"
#include "stdlib.h"
#include <raylib.h>

#define WINW 1280
#define WINH 720
#define WINNAME "Hah game"

int main() {
  InitWindow(WINW, WINH, WINNAME);

  SetExitKey(0);

  while (!WindowShouldClose()) {
    BeginDrawing();

    ClearBackground(WHITE);

    DrawText("lol", 10, 10, 100, BLUE);

    EndDrawing();
  }

  CloseWindow();

  return 0;
}
