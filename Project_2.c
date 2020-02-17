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
	int price2 = COFFEE.count_jpy;
	int sda;
	int payment = 0;
	bool life = true;
	bool life2 = true;
	int choice, col;
	int sugar = 15;

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
		    break;

		case 2:

		    life = false;
		    price += sugar;
		    price += (sugar * 2);
		    break;

		case 3:

		    while(life) {

		        printf("%s\n", "Выберите количество сахара: ");
			scanf("%i", &col);

			if ((5 >= col) && (col >= 0)) {

			    price += (sugar * col);
			    price2 += ((sugar * col) * 2);
			    life = false;
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
	printf("%s%s\n", "Вы заказали: ", COFFEE.name);
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
			break;
		}
		case 2:

		    life2 = false;
		    life = true;
			sda = price2;

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
			break;

		default:

		    printf("%s\n", "Нет операции.");
		    break;
	    }
	}
}

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