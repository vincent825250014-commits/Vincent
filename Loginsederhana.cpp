#include <stdio.h>
#include <string.h>

int main() {
    char user[20], pass[20];

    printf("Username: ");
    scanf("%s", user);
    printf("Password: ");
    scanf("%s", pass);

    if(strcmp(user, "admin") == 0 && strcmp(pass, "123") == 0)
        printf("Login berhasil\n");
    else
        printf("Login gagal\n");

    return 0;
}