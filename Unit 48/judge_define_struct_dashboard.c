#include <stdio.h>

/*_________________________





_________________________*/

int main()
{
    Dashboard d1;

    d1.speed = 80;
    d1.fuel = 'F';
    d1.mileage = 5821.442871f;
    d1.engineTemp = 200;
    d1.rpm = 1830;

    printf("Speed: %dkm/h\n", d1.speed);
    printf("Fuel: %c\n", d1.fuel);
    printf("Mileage: %fkm\n", d1.mileage);
    printf("Engine temp: %d¡É\n", d1.engineTemp);
    printf("RPM: %d\n", d1.rpm);

    return 0;
}
