#include <stdio.h>
#include <string.h>

int main(void){
    char *s = NULL;
    printf("Enter string to be measured:\n");
    scanf("%m[^\n]s", &s);
    if (s == NULL){
        printf("Error while retrievin input");
    }
    else{
        int i = 0;
        while (s[i] != '\0'){
            i++;
        }
        printf("String \"%s\" is %d characters long.", s, i);
    }
    return 0;
}