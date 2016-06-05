#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "person.h"

/*_____________________*/

int main()
{
    p1 = malloc(sizeof(struct Person));

    strcpy(p1->name, "홍길동");
    p1->age = 30;
    strcpy(p1->address, "서울시 용산구 한남동");

    printf("%s %d %s\n", p1->name, p1->age, p1->address);

    free(p1);

    return 0;
}
