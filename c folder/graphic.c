
#include <conio.h>
#include <stdlib.h>
#include <graphics.h>

void drawCycle(int x, int y) {
    // Draw the wheels
    circle(x, y, 20);      // Rear wheel
    circle(x + 80, y, 20); // Front wheel

    // Draw the frame
    line(x, y, x + 40, y - 40);    // Rear to seat
    line(x + 40, y - 40, x + 80, y); // Seat to front wheel
    line(x + 40, y - 40, x + 60, y - 60); // Handle to seat
    line(x + 60, y - 60, x + 80, y);     // Handle to front wheel

    // Draw the seat and handlebar
    line(x + 20, y - 20, x + 60, y - 60); // Seat to rear wheel
    line(x + 40, y - 40, x + 30, y - 50); // Seat
    line(x + 60, y - 60, x + 70, y - 70); // Handlebar
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI"); // Initialize graphics mode

    int x = 50, y = 200; // Initial position of the cycle

    while (!kbhit()) { // Loop until a key is pressed
        cleardevice(); // Clear the screen
        drawCycle(x, y); // Draw the cycle at the current position

        delay(50); // Delay for smooth animation
        x += 5; // Move the cycle to the right

        if (x > getmaxx()) { // Reset position when it goes off screen
            x = 0;
        }
    }

    closegraph(); // Close the graphics mode
    return 0;
}

