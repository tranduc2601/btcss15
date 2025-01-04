#include <stdio.h>
#include <string.h>
int main() {
    char str[1000] = " rikkei academyh";
    char result[1000];
    char ch;
    int j = 0;
    printf(" nhap vao ky tu can xoa: ");
    scanf("%c", &ch);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ch) {
            result[j++] = str[i];
        }
    }
    result[j] = '\0';
    printf(" chuoi sau khi xoa ky tu '%c': %s\n", ch, result);
    return 0;
}

