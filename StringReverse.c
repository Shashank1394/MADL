// String reverse

#include <stdio.h>
#include <string.h>

void reverse(char *str, int first, int last) {
    if(first >= last)
        return;
    char temp = str[first];
    str[first] = str[last];
    str[last] = temp;
    reverse(str, first + 1, last - 1);
}

int main() {
    printf("\nEnter a string: ");
    char input[100]; scanf("%[^\n]%*c", input);
    reverse(input, 0, strlen(input) - 1);
    printf("%s\n", input);
    return 0;
}