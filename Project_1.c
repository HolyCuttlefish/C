#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>

void sr_znach()
{
    int x1, x2;

    printf("%s\n", "Введите х1:");
    scanf("%i", &x1);
    printf("%s\n", "Введите х2:");
    scanf("%i", &x2);

    printf("%s%i\n", "Среднее значение: ", ((x1 + x2) / 2));
}

void duem_to_sm()
{
    int num;
    double num_2;

    printf("%s\n", "Введите значение в дюйм:");
    scanf("%i", &num);

    for (int count = 0; count < num; count++){

	num_2 += 25.4F;
    }
    printf("%s%f\n", "в см: ", (num_2 / 10));
}

void sm_to_duem()
{
    int num;

    printf("%s\n", "Введите значение в см:");
    scanf("%i", &num);

    num *= 10;
    printf("%s%f\n", "В дюйм: ", (num / 25.4F));
}

void farengete_to_celsi()
{
    int num;

    printf("%s\n", "Введите температура (f):");
    scanf("%i", &num);
    printf("%s%f\n", "Температура(c): ", (num - 32) / 1.8f);
}

void celsi_to_farengete()
{
    int num;

    printf("%s\n", "Введите температура (c):");
    scanf("%i", &num);
    printf("%s%f\n", "Температуру(f): ", (num * 1.8) + 32);
}

void s_kolca()
{
    int R = 0, r = 0;

    printf("%s\n", "Введите радиус R:");
    scanf("%i", &R);
    printf("%s\n", "Внутренний радиус r:");
    scanf("%i", &r);

    printf("%s%f\n", "Площадь: ", M_PI * (pow(R, 2) - pow(r, 2)));
}

void p_s_a()
{
    int a = 0;

    printf("%s\n", "Введите сторону a:");
    scanf("%i", &a);

    printf("%s%i\n", "Периметр: ", a * 4);
    printf("%s%f\n", "Площадь: ", pow(a, 2));

}

void p_s_b()
{
    int a, b, c;

    printf("%s\n", "Введите а:");
    scanf("%i", &a);
    printf("%s\n", "Введите b:");
    scanf("%i", &b);
    c = sqrt(pow(a, 2) + pow(b, 2));

    printf("%s%i\n", "PПериметр:: ", a + b + c);
    printf("%s%f\n", "Площадь: ", 0.5 * a * b);
}

void p_s_c()
{
    int a, h, b, c;

    printf("%s\n", "Введите а:");
    scanf("%i", &a);
    printf("%s\n", "Введите h:");
    scanf("%i", &h);

    b = sqrt(pow(a / 2, 2) + pow(h, 2));
    c = b;

    printf("%s%i\n", "Периметр: ", a + b + c);
    printf("%s%f\n", "Площадь: ", 0.5 * a * h);

}

void p_s_d()
{
    int a, b, h, rezerv;

    printf("%s\n", "Введите а:");
    scanf("%i", &a);
    printf("%s\n", "Введите b:");
    scanf("%i", &b);
    printf("%s\n", "Введите h:");
    scanf("%i", &h);

    rezerv = a - b;

    rezerv = sqrt(pow(rezerv, 2) + pow(h, 2));

    rezerv = 2 * rezerv;

    printf("%s%i\n", "Периметр: ", rezerv + a + b);
    printf("%s%f\n", "Площадь: ", 0.5 * a * b * h);
}

void p_s_e()
{
    int a = 0, h = 0;

    printf("%s\n", "Введите а:");
    scanf("%i", &a);

    h = sqrt(pow(a, 2) - pow(a / 2, 2));

    printf("%s%i\n", "Периметр: ", a * 3);
    printf("%s%f\n", "Площадь: ", 0.5 * h * a);
}

void s_o_a()
{
    int r = 0, h = 0;

    printf("%s\n", "Введите r:");
    scanf("%i", &r);
    printf("%s\n", "Введите h:");
    scanf("%i", &h);

    printf("%s%f\n", "Площадь: ", 2 * M_PI * r * h);
    printf("%s%f\n", "Объем: ", M_PI * pow(r, 2) * h);

}

void s_o_b()
{
    int R = 0, r = 0, h = 0;

    printf("%s\n", "Введите r:");
    scanf("%i", &r);
    printf("%s\n", "Введите R:");
    scanf("%i", &R);
    printf("%s\n", "Введите h:");
    scanf("%i", &h);

    printf("%s%f\n", "Площадь: ", M_PI * (pow(r, 2) - pow(R, 2)));
    printf("%s%f\n", "Объем: ", M_PI * (pow(r, 2) - pow(R, 2)) * h);

}

void s_o_c()
{

    int r = 0;

    printf("%s\n", "Введите r:");
    scanf("%i", &r);

    printf("%s%f\n", "Площадь: ", 4 * M_PI * pow(r, 2));
    printf("%s%f\n", " Периметр: ", (3/4) * M_PI * pow(r, 3));


}

void ps_ss_a()
{

    int r = 0;

    printf("%s\n", "Введите r:");
    scanf("%i", &r);

    printf("%s%i\n", "Периметр: ", (r * 2) * 4);
    printf("%s%f\n", "Площадь: ", pow((r * 2), 2));

}

void ps_ss_b()
{

    int a = 0;

    printf("%s\n", "Введите а:");
    scanf("%i", &a);

    printf("%s%f\n", "Периметр: ", 2 * M_PI * (a / 2));
    printf("%s%f\n", "Площадь: ", pow((a / 2), 2) * M_PI);

}

void ps_ss_c()
{

    int r = 0;

    printf("%s\n", "Введите :");
    scanf("%i", &r);

    printf("%s%i\n", "Периметр: ", (r * 2) * 3);
    printf("%s%f\n", "Площадь: ", (pow(r * 2, 2) * sqrt(3)) / 4);

}

void ps_ss_d()
{

    int a = 0;

    printf("%s\n", "Введите а:");
    scanf("%i", &a);

    printf("%s%f\n", "Периметр: ", 2 * M_PI * (a / 2));
    printf("%s%f\n", "Площадь: ", pow((a / 2), 2) * M_PI);

}

int main()
{
    int num;

    while (true) {

        printf("%s\n", "Выберите действие:");
        printf("\n");
        printf("%s\n", "0 -- exit");
        printf("%s\n", "1 -- 1");
        printf("%s\n", "2 -- 2");
        printf("%s\n", "3 -- 3");
        printf("%s\n", "4 -- 4");
        printf("%s\n", "5 -- 5");
        printf("%s\n", "6 -- 6");
        printf("%s\n", "7 -- 7.a");
        printf("%s\n", "8 -- 7.b");
        printf("%s\n", "9 -- 7.c");
        printf("%s\n", "10 -- 7.d");
        printf("%s\n", "11 -- 7.e");
        printf("%s\n", "12 -- 8.a");
        printf("%s\n", "13 -- 8.b");
        printf("%s\n", "14 -- 8.c");
        printf("%s\n", "15 -- 9.a");
        printf("%s\n", "16 -- 9.b");
        printf("%s\n", "17 -- 9.c");
        printf("%s\n", "18 -- 9.d");
        printf("\n");
        scanf("%d", &num);
        printf("\n");

        switch (num) {

        case 1:
        {
            sr_znach();
	    break;
        }

        case 2:
        {
            duem_to_sm();
	    break;
        }

        case 3:
        {
            sm_to_duem();
    	    break;
	}

        case 4:
        {
            farengete_to_celsi();
	    break;
        }

        case 5:
        {
            celsi_to_farengete();
	    break;
        }

        case 6:
        {
            s_kolca();
	    break;
        }

        case 7:
        {
            p_s_a();
	    break;
        }

        case 8:
        {
            p_s_b();
	    break;
        }

        case 9:
        {
            p_s_c();
	    break;
        }

        case 10:
        {
            p_s_d();
	    break;
        }

        case 11:
        {
            p_s_e();
	    break;
        }

        case 12:
        {
            s_o_a();
	    break;
        }

        case 13:
        {
            s_o_b();
	    break;
        }

        case 14:
        {
            s_o_c();
	    break;
        }

        case 15:
        {
            ps_ss_a();
	    break;
        }

        case 16:
        {
            ps_ss_b();
	    break;
        }

        case 17:
        {
            ps_ss_c();
	    break;
        }

        case 18:
        {
            ps_ss_d();
	    break;
        }

        case 0:
        {           

	    exit(0);
	    break;
        }

        default:
        {
            printf("%s\n", "Ошибка");
	    break;
        }

        }

    }
}
