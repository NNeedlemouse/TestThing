#include "stdio.h"
#include "stdlib.h"
#include <raylib.h>

#define WINW 1280
#define WINH 720
#define WINNAME "Hah game"

void DrawStuff();

int main(void) {
  InitWindow(WINW, WINH, WINNAME);

  SetExitKey(0);

  while (!WindowShouldClose()) {
    DrawStuff();
  }

  CloseWindow();

  return 0;
}

void DrawStuff() {
  BeginDrawing();

  ClearBackground(BLACK);

  DrawText("Hello World!", 0, 0, 50, WHITE);

  EndDrawing();
}
