#include <stdio.h>
int main() {
    char str[1000] = "abcde123456!@#$%^&";
    int letters = 0, digits = 0, special = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            letters++;
        } else if (str[i] >= '0' && str[i] <= '9') {
            digits++;
        } else if (str[i] != ' ' && str[i] != '\n') {
            special++;
        }
    }
    printf(" so ky tu la chu cai: %d\n", letters);
    printf(" so ky tu la chu so: %d\n", digits);
    printf(" so ky tu dac biet: %d\n", special);
    return 0;
}

