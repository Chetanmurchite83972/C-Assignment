#include <stdio.h>

int main() {
    char newline = '\n';
    char carriage_return = '\r';
    char tab = '\t';
    char alert = '\a';
    char backspace = '\b';

    printf("ASCII value of '\\n': %d\n", newline);
    printf("ASCII value of '\\r': %d\n", carriage_return);
    printf("ASCII value of '\\t': %d\n", tab);
    printf("ASCII value of '\\a': %d\n", alert);
    printf("ASCII value of '\\b': %d\n", backspace);

    return 0;
}

