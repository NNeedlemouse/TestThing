#include <raylib.h>

#define WIN 1280, 720, "Hi"

int main(){

    InitWindow(WIN);

    while (!WindowShouldClose()) {
        BeginDrawing();

        ClearBackground(WHITE);

        DrawText("lol", 0, 0, 100, BLACK);

        EndDrawing();
    }

    CloseWindow();

    return 0;

}
