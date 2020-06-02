#include <stdio.h>
#include <string.h>

void quest1()
{
    unsigned char name1[10] = "Joe";
    unsigned char name2[10]= "Bloggs";
    unsigned char fullname[20];
    

    strcpy(fullname, name1);
    strcat(fullname, " ");
    strcat(fullname, name2);
    printf("%s\n", fullname);
}

void quest2()
{
    unsigned char  sentence1 [25] = "It's a nice day today. ";
    unsigned char  sentence2 [25] = "It really is. ";
    unsigned char  firstbit [30];

    printf("%lu\n", sizeof(firstbit));
    strcpy(firstbit, sentence1);
    printf("%lu\n", sizeof(firstbit));
    strncat(firstbit, sentence2, sizeof(firstbit) - sizeof(sentence1));
    printf("%lu\n", sizeof(firstbit));
    printf("%s\n", firstbit);
}

int main()
{
    quest2();
    return 0;
}
