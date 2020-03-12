#include <stdio.h>
#include <stdlib.h>

int save () {

    char reser [200];

    FILE *file = NULL;
    file = fopen("file.txt", "r");

    if(!file) {

	printf("%s\n", "Отсутствует информаиця.");
	exit(0);
    }

    while (fgets(reser, 200, file) != NULL) {

	printf("%s", reser);
    }

    printf("\n");
    fclose(file);

}