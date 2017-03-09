#define W 10
#define H 10
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int gen[H][W];
int ngen[H][W];

int randint() {
    srand(time(NULL));
    int r = rand()%2;
}

void init() {
    int i, j;
    for(i=0; i<=H; i++)
        for(j=0; j<=W; j++)
            gen[i][j] = randint();
}

int nb(int x, int y) {
    int i, j, sum;
    for(i=x-1; i<=x+1; i++)
        for(j=y-1; j<=y+1; j++)
            if(i!=x && j!=y)
                if(gen[i][j])
                    sum++;
    return sum;
}

void life() {
	int i, j;
	for(i=1; i<=H-1; i++)
	    for(j=1; j<=W-1; j++)
	        if(nb(i, j)==3)
	            ngen[i][j] = 1;
	        else
	            ngen[i][j] = 0;
	for(i=0; i<=H; i++)
        for(j=0; j<=W; j++)
            gen[i][j] = ngen[i][j];
}

int main(void) {
    init();
    life();
	return 0;
}
