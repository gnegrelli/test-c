#include <stdio.h>
#include <string.h>

int main(void){
    for (int i = 1; i <= 100; i++){
        char s[6] = "";
        if (i % 3 == 0){
            strcat(s, "Foo");
        }
        if (i % 5 == 0){
            strcat(s, "Baa");
        }
        if (strlen(s) == 0){
            sprintf(s, "%d", i);
        }
        printf("%s\n", s);
    }
    return 0;
}