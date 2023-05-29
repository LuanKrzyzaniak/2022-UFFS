#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int a;
    scanf("%d", &a);
    switch (a) {
        case 0:
        printf("\n%d", 0);
        break;
        case 1:
        printf("\n%d", 1);
        break;
    }
    return 0;
}
