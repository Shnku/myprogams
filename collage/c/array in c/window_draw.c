
int x = 5, y = 5;
#define MAX 10
int max, may;
int box[MAX][MAX];

void get_x_y_length(int x, int y)
{
    max = x;
    may = y;
}

int drawbox(int x, int y)
{
    // system("clear");
    for (int i = 0; i <= max; i++)
    {
        for (int j = 0; j <= may; j++)
        {
            if (i == 0 || i == max || j == 0 || j == may)
                printf("! ");

            else if (box[i][j] == x && box[i][j] == y)
                printf("*");

            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}

// OUTPUT...
/*
! ! ! ! ! ! ! ! !
!               !
!               !
!               !
!               !
!               !
!               !
!               !
! ! ! ! ! ! ! ! !
*/
