#include <stdio.h>

int c = 0;
char p[20];

void s();
void l();
void lprime();
void l();
void lprime();
void s();

void l() {
    s();
    lprime();
}

void lprime() {
    if (p[c] == ',') {
        c++;
        s();
        lprime();
    }
}

void s() {
    if (p[c] == 'a')
        c++;
    else if (p[c] == '(') {
        c++;
        l();
        if (p[c] == ')')
            c++;
        else
            c--;
    } else {
        printf("\nInvalid Expression");
    }
}

int main() {
    printf("\nImplementation of RECURSIVE DESCENT PARSER\n");
    printf("\nEnter the Expression:\n");
    scanf("%s", p);
    s();
    if (p[c] == '$')
        printf("\nThe String is accepted");
    else
        printf("\nThe string is rejected");

    printf("\n"); // To print a newline at the end
    return 0;
}

