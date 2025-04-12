
#include<stdio.h>
#include<math.h>
int main() {
    int ara[5][5];
    int i, j, x, y, moves;

   
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            scanf("%d", &ara[i][j]);
            if (ara[i][j] == 1) { 
                x = i + 1; 
                y = j + 1; 
            }
        }
    }

   
    moves = abs(x - 3) + abs(y - 3);

    
    printf("%d\n", moves);

    return 0;
}
