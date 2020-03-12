#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

struct value {

    char name[50];
    int count_ru;
    int count_jpy;
};

Sale (struct value COFFEE);

cofe();



int main() {

    int choice;
    bool life = true;

    while (life) {

	printf("%s\n", "Выберите действие:");
	printf("\n");
	printf("%s\n", "1: Выбрать кофе.");
	printf("%s\n", "2: Чек");
	printf("%s\n", "0: Выход.");
	scanf("%i", &choice);


	switch(choice) {

	    case 0:

		exit(0);
		break;

	    case 1:

		cofe();
		life = false;
		break;

	    case 2:

		save();
		life = false;
		break;
	}
    }
}