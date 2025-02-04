// #include<stdio.h>
// #include<string.h>

// struct vector
// {
//     int i;
//     int j;
// };

// struct vector sum_vector(struct vector v1, struct vector v2){
//     struct vector v3 = {(v1.i + v2.i), (v1.j + v2.j)};
//     return v3;
// }

// int main () {
//     struct vector v1 = {1, 2};
//     struct vector v2 = {3, 4};

//     struct vector v3 = sum_vector(v1, v2);
//     printf("The value of vector is %di + %dj", v3.i, v3.j);

//     return 0;
// }

#include<stdio.h>

struct myVector{
    int i;
    int j;
};

struct myVector sum_vector(struct myVector v1, struct myVector v2)
{
    struct myVector v3 = {(v1.i + v2.i), (v1.j + v2.j)};
    return v3;
};

int main() {
    struct myVector v1 = {1, 2};
    struct myVector v2 = {5, 6};

    struct myVector v3 = sum_vector(v1, v2);
    printf("The sum of vector v1 & v2 is %di + %dj\n", v3.i, v3.j);
}