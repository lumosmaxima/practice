#include <stdio.h>

void hanoi(int n, int from , int by, int to)
{

/*    if(n==2)
    {
        fprintf(stdout, "move %d from %d to %d\n", 1, from, by);
        fprintf(stdout, "move %d from %d to %d\n", 2, from, to);
        fprintf(stdout, "move %d from %d to %d\n", 1, by, to);
        return;
    }
*/

    if(n==1)
    {
        fprintf(stdout, "move %d from %d to %d\n", 1, from, to);
        return;
    }

    hanoi(n-1, from, to, by);
    fprintf(stdout, "move %d from %d to %d\n", n, from, to);
    hanoi(n-1, by, from, to);
}

int main(void)
{
    int n;
    fputs("how many hanoi: ", stdout); scanf("%d", &n);
    hanoi(n, 0, 1, 2);
}