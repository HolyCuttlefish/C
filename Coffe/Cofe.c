#include <stdio.h>
#include <stdbool.h>

struct value {

    char name[50];
    int count_ru;
    int count_jpy;
};


void cofe() {

    bool life = true;
    int choice;

	while(life) {

	    printf("\n");
	    printf("%s\n", "Выберите кофе:");
	    printf("\n");
	    printf("%s\n", "1: Эспрессо");
	    printf("%s\n", "2: Капучино");
	    printf("%s\n", "3: Латте");
	    printf("%s\n", "4: Американо");
	    printf("%s\n", "5: Раф");
	    scanf("%i", &choice);

	    switch(choice) {

		case 1: {

		    life = false;
		    struct value res={"Эспрессо", 100, 173};
		    Sale(res);
		    break;
		}

		case 2: {

		    life = false;
		    struct value res2={"Капучино\0", 120, 208};
		    Sale(res2);
		    break;
		}

		case 3: {

		    life = false;
		    struct value res3={"Латте\0", 150, 260};
		    Sale(res3);
		    break;
		}

		case 4: {

		    life = false;
		    struct value res4={"Американо\0", 100, 173};
		    Sale(res4);
		    break;
		}

		case 5: {

		    life = false;
		    struct value res5={"Раф\0", 170, 294};
		    Sale(res5);
		    break;
		}

		default: {

		    printf("Нет такого действия.");
		    break;
		}
	    }
	}

}
