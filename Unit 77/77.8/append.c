#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include "data.h"

void append(DATA *data, char *s1, char *s2)
{
    strcpy(data->string, s1);
    strcat(data->string, s2);
}
