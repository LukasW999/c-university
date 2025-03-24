#include <stdio.h>

char anfang = 'A';
char ende = 'O';
char *addresseAnfang = &anfang;
char *addresseEnde = &ende;

int main(void) {
    printf("Anfangaddresse: %c\n", addresseAnfang);
    printf("Endeaddresse: %c\n", addresseEnde);
    printf("Anfang: %p\n", anfang);
    printf("Ende: %p\n", ende);
}