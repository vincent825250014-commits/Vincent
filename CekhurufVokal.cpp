#include <stdio.h>

int main() {
    char c;

    scanf("%c",&c);

    if(c=='a'||c=='i'||c=='u'||c=='e'||c=='o')
        printf("Vokal\n");
    else
        printf("Konsonan\n");

    return 0;
}