#include <stdio.h>
#include <string.h>

typedef struct {
    int id;
    char name[20];
} item;

int main() {
    FILE *fptr;
    item first, second, secondf;

    /* create records */
    first.id = 101;
    strcpy(first.name, "Algebra");
    second.id = 102;
    strcpy(first.name, "Math");

    /* write records to a file */
    fptr = fopen("info.dat", "wb");
    fwrite(&first, 1, sizeof(first), fptr);
    fwrite(&second, 1, sizeof(second), fptr);
    fclose(fptr);

    /* file contains 2 records of type item */
    fptr = fopen("info.dat", "rb");

    /* seek second record */
    fseek(fptr, 1*sizeof(item), SEEK_SET);
    fread(&secondf, 1, sizeof(item), fptr);
    printf("%d %s\n", secondf.id, secondf.name);
    fclose(fptr);
    return 0;
}
