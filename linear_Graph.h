#ifndef LINEAR_GRAPH_FILE
#define LINEAR_GRAPH_FILE

int Plot(int x, int y);
void Show_grid(void);


/* Set "pixel" at specific coordinates */
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