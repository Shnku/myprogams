#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 11
#define UPINDX(i) i + 1
#define DWNINDX(i) i - 1
#define LFTINDX(j) j - 1
#define RTHINDX(j) j + 1

void display(char *);
int mat[MAX_SIZE][MAX_SIZE] = {
    {11, 22, 31, 31, 31, 22, 22, 11, 11},  //
    {19, 19, 19, 19, 11, 11, 11, 11, 11},  //
    {33, 33, 33, 33, 33, 33, 11, 11, 11},  //
    {11, 11, 11, 11, 11, 11, 11, 11, 11},  //
    {11, 11, 55, 55, 55, 55, 55, 55, 55},  //
    {55, 55, 55, 55, 55, 55, 55, 55, 11},  //
    {13, 13, 13, 13, 13, 13, 11, 11, 11},  //
    {44, 44, 44, 44, 11, 11, 11, 11, 11},  //
    {11, 11, 11, 11, 11, 11, 11, 11, 11}   //
};
// int mat[MAX_SIZE][MAX_SIZE] = {
//     {11, 11, 33},  //
//     {11, 15, 96},  //
//     {11, 88, 99}   //
// };

#define point(i, j) mat[i][j]
#define lft(i, j) mat[i][LFTINDX(j)]
#define rth(i, j) mat[i][RTHINDX(j)]
#define up(i, j) mat[UPINDX(i)][j]
#define dwn(i, j) mat[DWNINDX(i)][j]
#define uplft(i, j) mat[UPINDX(i)][LFTINDX(j)]
#define uprth(i, j) mat[UPINDX(i)][RTHINDX(j)]
#define dwnlft(i, j) mat[DWNINDX(i)][LFTINDX(j)]
#define dwnrth(i, j) mat[DWNINDX(i)][RTHINDX(j)]
void fill_aware(int, int x, int y);

int main() {
    int x, y;
    display("before filling");
    printf("enter the point to track : ");
    scanf("%d%d", &x, &y);
    fill_aware(12, x, y);
    display("after filling");
    for (int i = 0; i < MAX_SIZE; i++) {
        for (int j = 0; j < MAX_SIZE; j++) fill_aware(12, i, j);
    }
    display("after 2nd filling");
    return 0;
}

void fill_aware(int range, int i, int j) {
    printf("\n l=%d r=%d u=%d d=%d", LFTINDX(j), RTHINDX(j), UPINDX(i),
           DWNINDX(i));
    if (LFTINDX(j) >= 0) {
        if (abs(lft(i, j) - point(i, j)) <= range) lft(i, j) = point(i, j);
        if (UPINDX(i) >= 0 && abs(uplft(i, j) - point(i, j)) <= range) {
            uplft(i, j) = point(i, j);
        }
    }
    if (RTHINDX(j) < MAX_SIZE) {
        if (abs(rth(i, j) - point(i, j)) <= range) rth(i, j) = point(i, j);
        if (DWNINDX(i) < MAX_SIZE && abs(dwnrth(i, j) - point(i, j)) <= range) {
            dwnrth(i, j) = point(i, j);
        }
    }
    if (UPINDX(i) >= 0) {
        if (abs(up(i, j) - point(i, j)) <= range) up(i, j) = point(i, j);
        if (RTHINDX(i) < MAX_SIZE && abs(uprth(i, j) - point(i, j)) <= range) {
            uprth(i, j) = point(i, j);
        }
    }
    if (DWNINDX(i) < MAX_SIZE) {
        if (abs(dwn(i, j) - point(i, j)) <= range) dwn(i, j) = point(i, j);
        if (LFTINDX(i) >= 0 && abs(dwnlft(i, j) - point(i, j)) <= range) {
            dwnlft(i, j) = point(i, j);
        }
    }
    // if(LFTINDX(j)>=0 && UPINDX(i)>=0)
}

void display(char *s) {
    printf("\n%s the matrix is\n\t\t", s);
    for (int j = 0; j < MAX_SIZE; j++) printf("%3d ", j);
    printf("\n\t ");
    for (int j = 0; j < MAX_SIZE; j++) printf("====");
    printf("===\n");
    for (int i = 0; i < MAX_SIZE; i++) {
        printf("%4d ]| ", i);
        for (int j = 0; j < MAX_SIZE; j++) {
            printf("%3d ", mat[i][j]);
        }
        printf("\n");
    }
}