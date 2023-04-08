#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *fp = NULL;
    char c = 'T';
    int n = 100;
    char s[15] = "Progress!!";

    fp = fopen("progress.txt", "w");
    if (fp == NULL)
    {
        printf("ERROR");
        exit(1);
    }

    fputc(c, fp);
    fprintf(fp, "\n");
    fprintf(fp, "%d, %c, %s", n, c, s);

    fclose(fp);
}