#include <stdio.h>
char *variabletype[] = {"char", "unsigned char", "signed char", "int", "unsigned int", "short", "unsigned short", "long", "unsigned long", "long long", "unsigned long long"};

int main() {
    for (int i = 0; i < 11;++i) {
        printf("Size of %s is %u\n",variabletype[i], (unsigned int)(sizeof(variabletype[i])));
    }
    return 0;
}
