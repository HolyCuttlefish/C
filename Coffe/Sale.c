#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct value {

    char name[50];
    int count_ru;
    int count_jpy;
};


int Sale (struct value COFFEE) {

	char reser[200];
	int price = COFFEE.count_ru;
	int price2 = COFFEE.count_jpy;
	int sda;
	int payment = 0;
	bool life = true;
	bool life2 = true;
	int choice, col;
	int sugar = 15;

	FILE *file = NULL;
	file = fopen("file.txt", "a");

	if(!file){

	    printf("%s\n", "Ошибка");
	    exit(0);
	}

	fprintf(file, "%s\n", COFFEE.name);

	while (life) {

	printf("%s\n", "Выберите сколько сахара: ");
	printf("\n");
	printf("%s\n", "1: Нет сахара");
	printf("%s\n", "2: один кубик сахара");
	printf("%s\n", "3: свой вариант (максимум 5)");
	scanf("%i", &choice);

	    switch (choice) {

		case 1:

		    life = false;
		    fprintf(file, "%d\n", 0);
		    break;

		case 2:

		    life = false;
		    price += sugar;
		    price += (sugar * 2);
		    fprintf(file, "%d\n", 1);
		    break;

		case 3:

		    while(life) {

		        printf("%s\n", "Выберите количество сахара: ");
			scanf("%i", &col);

			if ((5 >= col) && (col >= 0)) {

			    price += (sugar * col);
			    price2 += ((sugar * col) * 2);
			    life = false;
			    fprintf(file, "%d\n", col);
		        }

			else {

			    printf("%s\n", "Нельзя столько");
			    printf("\n");
			}
		    }
		    break;

		default:

		    printf("%s\n", "Нет такой операции.");
		    break;
	    }
	}

	while (life2) {

	printf("\n");
	printf("%s%s\n", "Вы заказали: ",  COFFEE.name);
	printf("%s%i\n", "Цена в Р: ", COFFEE.count_ru);
	printf("%s%i\n", "Цена в Йен: ", COFFEE.count_jpy);
	printf("\n");
	printf("%s\n", "Выберите валюту, которой оплатите: ");
	printf("\n");
	printf("%s\n", "1: Рублях");
	printf("%s\n", "2: Йенах");
	scanf("%i", &choice);

	    switch (choice) {

		case 1:
		{
		    life2 = false;
		    life = true;


		    fprintf(file, "%d\n", price);
		    fprintf(file, "%s\n", "");

		    while(life) {

			sda = price;

			printf("%s%i\n", "Введите сумму:", price);
			scanf("%i", &payment);

			if (payment >= 0) {
			if (payment >= 0) {

			    sda = payment - price;
			    price -= payment;
			}

			if (sda >= 0) {

			    life = false;
			}
			}
		    }

		    printf("%s%i\n", "Ваша сдача: ", sda);
		    printf("%s\n", "Приходите еще!");

		    fclose(file);

		    file = fopen("file.txt", "r");

		    while(fgets(reser, 200, file) != NULL) {

			printf("%s", reser);
		    }

		    printf("\n");
		    fclose(file);
			break;
		}
		case 2:

		    life2 = false;
		    life = true;
			sda = price2;

		fprintf(file, "%d\n", price2);
		fprintf(file, "%s\n", "");

		    while(life) {

			printf("%s%i\n", "Введите сумму:", price2);
			scanf("%i", &payment);

			if (payment >= 0){

			if (payment >= 0) {

			    sda = payment - price2;
			    price2 -= payment;
			}

			if (sda >= 0) {

			    life = false;
			}
			}
		    }

		    printf("%s%i\n", "Ваша сдача: ", sda);
		    printf("%s\n", "Приходите еще!");
		    printf("\n");

		    fclose(file);

		    file = fopen("file.txt", "r");

		    while(fgets(reser, 200, file) != NULL) {

			printf("%s", reser);
		    }

		    printf("\n");
		    fclose(file);

			break;

		default:

		    printf("%s\n", "Нет операции.");
		    break;
	    }
	}
}

