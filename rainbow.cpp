#include <conio.h>
#include <graphics.h>
#include <dos.h>

void main()
{
    int gdriver = DETECT, gmode;
    int x, y, i;

    // Initialize graphics mode
    initgraph(&gdriver, &gmode, "C:\\Turboc3\\BGI");

    // Get screen center
    x = getmaxx() / 2;
    y = getmaxy() / 2;
    y = getmaxy() / 2;

    // Draw concentric circles
    for (i = 30; i < 200; i += 10)
    {
        circle(x, y, i);
        delay(100); // Add delay to visualize drawing
    }

    getch(); // Wait for key press
    closegraph(); // Close graphics mode
}
