#include <stdio.h>
int main() {
    char str[1000] = "minh duc dep trai";
    for (int i = 0; str[i] != '\0'; i++) {
        if (i == 0 || (str[i - 1] == ' ' && str[i] != ' ')) {
            if (str[i] >= 'a' && str[i] <= 'z') {
                str[i] = str[i] - 'a' + 'A';
            }
        }
    }
    printf(" chuoi sau khi duoc  viet hoa: %s\n", str);
    return 0;
}

