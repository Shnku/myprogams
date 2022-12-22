// C program to build the complete 
// snake game 

#include <curses.h> 
#include <stdio.h> 
#include <stdlib.h> 
#include <unistd.h> 

int i, j, height = 20, width = 20; 
int gameover, score; 
int x, y, fruitx, fruity, flag; 

// Function to generate the fruit 
// within the boundary 

void setup() 
{ 
	gameover = 0; 
// Stores height and width 
	x = height / 2; 
    y = width / 2; 

label1: 
    fruitx = rand() % 20; 
    if (fruitx == 0) 
        goto label1; 

label2: 
    fruity = rand() % 20; 
    if (fruity == 0) 
        goto label2; 
    score = 0; 
} 

// Function to draw the boundaries 
void draw() 
{ 
    system("cls"); 
    for (i = 0; i < height; i++) 
    { 
        for (j = 0; j < width; j++) 
        { 
            if (i == 0 || i == width - 1 || j == 0 || j == height - 1) 
			{ 
                printf("#"); 
            } 
            else 
            { 
                if (i == x && j == y) 
                    printf("0"); 
                else if (i == fruitx && j == fruity) 
                    printf("*"); 
                else 
                    printf(" "); 
            } 
        } 
        printf("\n"); 
    } 

    // Print the score after the 
    // game ends 
    printf("score = %d", score); 
    printf("\n"); 
    printf("press X to quit the game"); 
} 

// Function to take the input 
int main()
{}
