#define W 5
#define H 5
#define ITERATIONS 10
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char gen[H+2][W+2];
char ngen[H+2][W+2];

int randint() {  //not in use, can be deleted
    srand(time(NULL));
    int r = rand()%2;
    return r;
}

void init() {   //initialization of array gen[][]
    srand(time(NULL));
    int i, j;
    for(i=1; i<H+1; i++)
        for(j=1; j<W+1; j++)
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
	for(i=1; i<H+1; i++)
	    for(j=1; j<W+1; j++)
	    {
	        if(nb(i, j) == 3)
	            ngen[i][j] = 1;
	        else
	            ngen[i][j] = 0;
	    }
	for(i=1; i<H+1; i++)
	    for(j=1; j<W+1; j++)
	        gen[i][j] = ngen[i][j];
}

void loop() {
    int i, j;
    life();
        for(i=1; i<H+1; i++)
        {
            for(j=1; j<W+1; j++)
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
