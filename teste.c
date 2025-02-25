#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int randomnumber;
    int max = 7;
    int min = 1;
    int rd_num = rand() % (max - min + 1) + min;

    printf("%d ", rd_num);

    /*
        randomnumber = rand() % 10;
    printf("%d\n", randomnumber);
    return 0;
    */

}