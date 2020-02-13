#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

struct value {

    char name[50];
    int count_ru;
    int count_jpy;
};

void Sale (struct value COFFEE) {

	int price = COFFEE.count_ru;
	int payment = 0;
	bool life = true;

	printf("\n");
	printf("%s%s\n", "Вы заказали: ", COFFEE.name);
	printf("%s%i\n", "Цена в Р: ", COFFEE.count_ru);
	printf("%s%i\n", "Цена в Йен: ", COFFEE.count_jpy);

	while(life) {

	    printf("%s%i\n", "Введите сумму:", price -= payment);
	    scanf("%i", &payment);

	    if (payment >= price) {

		life = false;
	    }
	}

	printf("%s%i\n", "Ваша сдача: ", payment - price);
	printf("%s\n", "Приходите еще!");
}

void cofe() {

    int choice;

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

		struct value res={"Эспрессо", 100, 173};
		Sale(res);
		break;
	    }

	    case 2: {

		struct value res2={"Капучино\0", 120, 208};
		Sale(res2);
		break;
	    }

	    case 3: {
		struct value res3={"Латте\0", 150, 260};
		Sale(res3);
		break;
	    }

	    case 4: {
		struct value res4={"Американо\0", 100, 173};
		Sale(res4);
		break;
	    }

	    case 5: {
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

int main() {

    int choice;
    bool life = true;

    while (life) {

	printf("%s\n", "Выберите действие:");
	printf("\n");
	printf("%s\n", "1: Выбрать кофе.");
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
	}
    }
}