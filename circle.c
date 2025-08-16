#include <stdio.h>
#include <math.h>
#include <windows.h> // For Sleep() and system("cls")

void drawCircle(int offsetX, int r) {
    float dist;
    for (int y = 0; y <= 2 * r; y++) {
        for (int x = 0; x <= 2 * r + offsetX; x++) {
            // Adjust for terminal character ratio
            dist = sqrt((x - r - offsetX) * (x - r - offsetX) + (y - r) * (y - r));
            if (dist > r - 0.5 && dist < r + 0.5)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

int main() {
    int radius = 5;
    int offset = 0;

    while (1) {
        system("cls");  // Clear screen (Windows)
        drawCircle(offset, radius);
        Sleep(100);     // Delay for motion

        offset++;       // Move right

        // Reset when too far
        if (offset > 40)
            offset = 0;
    }

    return 0;
}
