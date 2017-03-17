#define W 4
#define H 4
#define ITERATIONS 4
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int gen[H][W];
int ngen[H][W];

int randint() {
    srand(time(NULL));
    int r = rand()%2;
    return r;
}

void init() {
    srand(time(NULL));
    int i, j;
    for(i=0; i<=H; i++)
        for(j=0; j<=W; j++)
            gen[i][j] = rand()%2;
}

int nb(int x, int y) {
    int i, j;
    int sum = 0;
    for(i=x-1; i<=x+1; i++)
        for(j=y-1; j<=y+1; j++)
            if(i==x && j==y)
                continue;
            else
            {
                if(gen[i][j]==1)
                    sum = sum + 1;
            }
    return sum;
}

void life() {
	int i, j;
	int sum;
	for(i=1; i<H; i++)
	    for(j=1; j<W; j++)
	    {
	        if(nb(i, j) == 3)
	            ngen[i][j] = 1;
	        else
	            ngen[i][j] = 0;
	    }
	for(i=0; i<=H; i++)
	    for(j=0; j<=W; j++)
	        gen[i][j] = ngen[i][j];
}

void loop() {
    int i, j;
    life();
        for(i=0; i<=H; i++)
        {
            for(j=0; j<=W; j++)
                if(gen[i][j]==1)
                    printf("#");
                else
                    printf("-");
            printf("\n");
        }
        printf("$$$$$$$$$$$\n");
}

int main(void) {
    init();
    int counter;
    for(counter=0; counter<ITERATIONS; counter++) loop();
	return 0;
}