#ifndef LINEAR_GRAPH_FILE
#define LINEAR_GRAPH_FILE

#include <stdio.h>
#include <math.h>

#define WIDTH 60
#define HEIGHT 20
#define X WIDTH/2
#define Y HEIGHT/2
#define XMAX WIDTH-X-1
#define XMIN -(WIDTH-X)
#define YMAX HEIGHT-Y
#define YMIN -(HEIGHT-Y)+1

char Grid[HEIGHT][WIDTH];

int Plot(int x, int y);
void Init_grid(void);
void Show_grid(void);



/* Set "pixel" at specific coordinates */
int Plot(int x, int y)
{
    if( x > XMAX || x < XMIN || y > YMAX || y < YMIN )
        return(-1);

    Grid[Y-y][X+x] = '*';
    return(1);
}

/* Initialize grid */
void Init_grid(void)
{
    int x,y;

    for(y=0;y<HEIGHT;y++)
        for(x=0;x<WIDTH;x++)
            Grid[y][x] = ' ';
    /* draw the axis */
    for(y=0;y<HEIGHT;y++)
        Grid[y][X] = '|';
    for(x=0;x<WIDTH;x++)
        Grid[Y][x] = '-';
    Grid[Y][X] = '+';
}

/* display grid */
void Show_grid(void)
{
    int x,y;

    for(y=0;y<HEIGHT;y++)
    {
        for(x=0;x<WIDTH;x++)
            putchar(Grid[y][x]);
        putchar('\n');
    }
}
#endif