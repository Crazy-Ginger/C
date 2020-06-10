#include <stdio.h>
#include <stdbool.h>

struct coord
{
    float x, y;
};

int main(int argc, char * argv[])
{
    FILE *inFile;
    if ((inFile = fopen(argv[1], "r")) == NULL)
    {
        printf("Error reading inFile\n");
        return 1;
    }

    struct coord dump[255];
    char line[511];
    unsigned char pointer = 0;
    float x, y;
    /*bool stop = false;*/

    while (fgets(line, sizeof(line), inFile))
    {
        sscanf(line, "%f %f", &x, &y);
        dump[pointer].x = x;
        dump[pointer].y = y;
        pointer++;
    }
    
    struct coord coords[pointer-1];
    for (unsigned char i = 0; i < pointer; i++)
    {
        coords[i] = dump[i];
    }

    for (unsigned int i = 0; i < pointer; i++)
    {
        printf("%f %f\n", coords[i].x, coords[i].y);
    }
    fclose(inFile);

    FILE *outFile;
    outFile = fopen(argv[2], "wb");
    printf("%lu\n", fwrite(&coords, sizeof(coords[0]), pointer, outFile));
    return 0;
}
