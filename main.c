#include <stdio.h>
#include <string.h>

char* word2(){return "array and your";}
char* word3(){return "ex need?";}
char* word1(){return "does both this";}


char* secretMessage(int *i)
{
    switch (*i)
    {
        case 0: (*i)++; return word1();
        case 1: (*i)++; return word2();
        case 2: (*i)++; return word3();
    }
    
}

int main(void)
{
    int i = 0;

    char message[6] = "What ";

    do {
        strcat(message, secretMessage(&i));
        strcat(message, " ");
        
    } while (i < 3);

    printf("%s", message);
}
