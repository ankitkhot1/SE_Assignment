//WAP to show difference between Structure and Union.
#include <stdio.h>

// Define a structure
struct MyStruct {
    int a;
    float b;
};

// Define a union
union MyUnion {
    int a;
    float b;
};

int main() {
    // Declare and initialize a structure
    struct MyStruct s;
    s.a = 10;
    s.b = 3.14;
    printf("Structure: a = %d, b = %.2f\n", s.a, s.b);

    // Declare and initialize a union
    union MyUnion u;
    u.a = 20;
    printf("Union: a = %d, b = %.2f\n", u.a, u.b); // Accessing b will result in garbage value
    u.b = 4.5;
    printf("Union: a = %d, b = %.2f\n", u.a, u.b); // Accessing a will result in garbage value

    printf("Size of Structure: %lu\n", sizeof(struct MyStruct));
    printf("Size of Union: %lu\n", sizeof(union MyUnion));

    return 0;
}
