#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

char *ConcatRemove(char *s, char *t, int k){
    // Assert conditions
    assert((strlen(s) >= 1) & (strlen(s) <= 100));
    assert((strlen(t) >= 1) & (strlen(t) <= 100));
    assert((k >= 1) & (k <= 100));

    // Check if strings are already equal
    if (strcmp(s, t) == 0){
        return "yes";
    }

    // Allocate auxiliary string to be mutated
    char *aux = malloc(sizeof(t));
    strcpy(aux, s);

    for (int i = 1; i <= k; i++){
        if (strncmp(aux, t, strlen(aux)) == 0){
            // aux is a substring of t: add next char
            char c = t[strlen(aux)];
            aux[strlen(aux)] = c;
        }
        else{
            // aux is different than t: remove last char of aux
            aux[strlen(aux) - 1] = '\0';
        }
        
        // Check if strings are equal
        if (strcmp(aux, t) == 0){
            return "yes";
        }

    }
    // Return no if string cannot be mutated within k iterations
    return "no";
}
