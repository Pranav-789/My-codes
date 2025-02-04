#include<stdio.h>

struct car{
    char name[50];
    long int cost;
};
void print_car_info(char s_name[], long int *s_price){
    printf("Name = %s\n", s_name);
    printf("cost : %ld\n", *s_price);
}

int main () {
    struct car c = {"Lamborghini", 1000000000};
    print_car_info(c.name, &c.cost);
    return 0;
}