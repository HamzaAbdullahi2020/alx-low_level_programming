#include <stdio.h>

char *rot13(char *str) {
    char *ptr = str;

    while (*ptr) {
        if ((*ptr >= 'a' && *ptr <= 'm') || (*ptr >= 'A' && *ptr <= 'M')) {
            *ptr += 13;
        } else if ((*ptr >= 'n' && *ptr <= 'z') || (*ptr >= 'N' && *ptr <= 'Z')) {
            *ptr -= 13;
        }
        ptr++;
    }

    return str;
}

int main(void) {
    char s[] = "ROT13 (\"rotate by 13 places\", sometimes hyphenated ROT-13) is a simple letter substitution cipher.\n";
    char *p;

    p = rot13(s);
    printf("%s", p);
    printf("------------------------------------\n");
    printf("%s", s);
    printf("------------------------------------\n");
    p = rot13(s);
    printf("%s", p);
    printf("------------------------------------\n");
    printf("%s", s);
    printf("------------------------------------\n");
    p = rot13(s);
    printf("%s", p);
    printf("------------------------------------\n");
    printf("%s", s);
    return 0;
}

