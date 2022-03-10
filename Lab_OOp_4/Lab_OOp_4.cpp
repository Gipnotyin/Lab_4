#include <iostream>

using namespace std;

//Функция для 5 задания
long hms_to_secs(int hours, int minutes, int seconds) {
	long sum;
	sum = hours * 3600 + minutes * 60 + seconds;
	return  sum;
}
//Функции для 6 задания
struct Time {
	int hours;
	int minutes;
	int seconds;
};

Time secs_to_time(long timer) {
	Time New;
	New.hours = timer / 3600;
	timer -= New.hours * 3600;
	New.minutes = timer / 60;
	timer -= New.minutes * 60;
	New.seconds = timer;
	return New;
}

void printer(Time dist) {
	cout << dist.hours << "/" << dist.minutes << "/" << dist.seconds << endl;
}

long time_to_secs(struct Time d1, struct Time d2) {
	long sum;
	sum = (d1.hours + d2.hours) * 3600 + (d1.minutes + d2.minutes) * 60 + d1.seconds + d2.seconds;
	return sum;
}
//Фукции для 7 задания
int power(int n, int p = 2) {
	for (int i = 0; i < p - 1; i++)
	{
		n *= n;
	}
	return n;
}

long power(long n, int p = 2) {
	for (int i = 0; i < p - 1; i++)
	{
		n *= n;
	}
	return n;
}

double power(double n, int p = 2) {
	for (int i = 0; i < p - 1; i++)
	{
		n *= n;
	}
	return n;
}

char power(char n, int p = 2) {
	for (int i = 0; i < p - 1; i++)
	{
		n *= n;
	}
	return n;
}

float power(float n, int p = 2) {
	for (int i = 0; i < p - 1; i++)
	{
		n *= n;
	}
	return n;
}
//Функция для 8 задания
void swap(int* pa, int* pb)
{
	int c;
	c = *pa;
	*pa = *pb;
	*pb = c;
}
//Функция для 9 задания
void swap(Time* pd1, Time* pd2) {
	Time d3;
	d3.hours = pd1->hours;
	d3.minutes = pd1->minutes;
	d3.seconds = pd1->seconds;
	pd1->hours = pd2->hours;
	pd1->minutes = pd2->minutes;
	pd1->seconds = pd2->seconds;
	pd2->hours = d3.hours;
	pd2->minutes = d3.minutes;
	pd2->seconds = d3.seconds;
}
//Функции для 10 задания
int COUNT = 0;
void vizovi_Global() {
	COUNT += 1;
	cout << "Ты меня вызвал " << COUNT << " раз :)\n";
}

void vizovi_po_pointer() {
	static int count = 0;
	count += 1;
	cout << "Ты меня вызвал " << count << " раз :(\n";
}
//Функции и структура для 11 задания
struct Sterling {
	int pounds;
	int shilling;
	int pences;
};
//Ввод стрелингов
Sterling cin_sterling(int pound, int shilling, int pence) {
	Sterling sum;
	sum.pounds = pound;
	sum.shilling = shilling;
	sum.pences = pence;
	return sum;
}
//Сложение стерлингов
Sterling summa_sterlings(Sterling n1, Sterling n2) {
	Sterling n;
	long sum;
	sum = (n1.pounds + n2.pounds) * 12 * 20 + (n1.shilling + n2.shilling) * 12 + (n1.pences + n2.pences);
	n.pounds = sum / (12 * 20);
	sum -= n.pounds * (12 * 20);
	n.shilling = sum / 12;
	sum -= n.shilling * 12;
	n.pences = sum;
	return n;
}
//Вывод стерлингов
void printer(Sterling pr) {
	cout << "Сумма шерлингов = " << pr.pounds << "." << pr.shilling << "." << pr.pences << " футов\n";
}
//Функции и структура для 12 задания
struct fraction {
	int a;
	int b;
};
//Ввод дробей
fraction cin_frac(int a, int b) {
	fraction n;
	n.a = a;
	n.b = b;
	return n;
}
//Сложение дробей
fraction fadd(fraction frac_1, fraction frac_2) {
	fraction n;
	n.a = frac_1.a * frac_2.b + frac_1.b * frac_2.a;
	n.b = frac_1.b * frac_2.b;
	return n;
}
//Вычитание дробей
fraction fsub(fraction frac_1, fraction frac_2) {
	fraction n;
	n.a = frac_1.a * frac_2.b - frac_1.b * frac_2.a;
	n.b = frac_1.b * frac_2.b;
	return n;
}
//Умножение дробей
fraction fmul(fraction frac_1, fraction frac_2) {
	fraction n;
	n.a = frac_1.a * frac_2.a;
	n.b = frac_1.b * frac_2.b;
	return n;
}
//Деление дробей
fraction fdiv(fraction frac_1, fraction frac_2) {
	fraction n;
	n.a = frac_1.a * frac_2.b;
	n.b = frac_1.b * frac_2.a;
	return n;
}
//Вывод дробей
void printer(fraction frac) {
	cout << frac.a << "/" << frac.b << endl;
}

//Вхождение в программу
int main()
{
	setlocale(LC_ALL, "rus");
	bool end = true, find;
	int num, hours, minutes, seconds, Pow, Int, a, b, c = 0, pound, shilling, pence;
	char ch, Char;
	long Long;
	float Float;
	double Double;
	Time x1, x2, x;
	Sterling sum_1, sum_2;
	fraction frac_1, frac_2;
	do
	{
		cout << "Введите номер задания, котрое хотите проверить: ";
		cin >> num;
		switch (num)
		{
		case 5:
			//Задание 5
			find = true;
			do
			{
				system("cls");
				cout << "Введите время формата **/**/**: ";
				cin >> hours >> ch >> minutes >> ch >> seconds;
				cout << "Количество секунда равно: " << hms_to_secs(hours, minutes, seconds) << endl;
				cout << "Продолжить рассчёт?(y/n): ";
				cin >> ch;
				(ch == 'n') ? find = false : find = true;
			} while (find);
			break;
		case 6:
			//Задание 6
			cout << "Введите 1 время вида **/**/**: ";
			cin >> x1.hours >> ch >> x1.minutes >> ch >> x1.seconds;
			cout << "Введите 2 время вида **/**/**: ";
			cin >> x2.hours >> ch >> x2.minutes >> ch >> x2.seconds;
			x = secs_to_time(time_to_secs(x1, x2));
			printer(x);
			break;
		case 7:
			//Задание 7
			system("cls");
			cout << "Какой тип вы хотите возвести в степень?\n";
			cout << "(long, int, double, char, float) Введите первую букву: ";
			cin >> ch;
			switch (ch)
			{
			case 'l':
				cout << "Введите число типа long: ";
				cin >> Long;
				cout << "Хотите ввести степень?(y/n)\n";
				cin >> ch;
				if (ch == 'y')
				{
					cout << "Введите степень: ";
					cin >> Pow;
					cout << "Число в степени " << Pow << " равна " << power(Long, Pow) << endl;
				}
				else if (ch == 'n')
				{
					cout << "Число в степени 2 равна " << power(Long) << endl;
				}
				else
				{
					cout << "Такого варианта ответа нет, повторите попытку...\n";
				}
				break;
			case 'i':
				cout << "Введите число типа int: ";
				cin >> Int;
				cout << "Хотите ввести степень?(y/n)\n";
				cin >> ch;
				if (ch == 'y')
				{
					cout << "Введите степень: ";
					cin >> Pow;
					cout << "Число в степени " << Pow << " равна " << power(Int, Pow) << endl;
				}
				else if (ch == 'n')
				{
					cout << "Число в степени 2 равна " << power(Int) << endl;
				}
				else
				{
					cout << "Такого варианта ответа нет, повторите попытку...\n";
				}
				break;
			case 'd':
				cout << "Введите число типа double: ";
				cin >> Double;
				cout << "Хотите ввести степень?(y/n)\n";
				cin >> ch;
				if (ch == 'y')
				{
					cout << "Введите степень: ";
					cin >> Pow;
					cout << "Число в степени " << Pow << " равна " << power(Double, Pow) << endl;
				}
				else if (ch == 'n')
				{
					cout << "Число в степени 2 равна " << power(Double) << endl;
				}
				else
				{
					cout << "Такого варианта ответа нет, повторите попытку...\n";
				}
				break;
			case 'c':
				cout << "Введите число типа char: ";
				cin >> Char;
				cout << "Хотите ввести степень?(y/n)\n";
				cin >> ch;
				if (ch == 'y')
				{
					cout << "Введите степень: ";
					cin >> Pow;
					cout << "Число в степени " << Pow << " равна " << power(Char, Pow) << endl;
				}
				else if (ch == 'n')
				{
					cout << "Число в степени 2 равна " << power(Char) << endl;
				}
				else
				{
					cout << "Такого варианта ответа нет, повторите попытку...\n";
				}
				break;
			case 'f':
				cout << "Введите число типа float: ";
				cin >> Float;
				cout << "Хотите ввести степень?(y/n)\n";
				cin >> ch;
				if (ch == 'y')
				{
					cout << "Введите степень: ";
					cin >> Pow;
					cout << "Число в степени " << Pow << " равна " << power(Float, Pow) << endl;
				}
				else if (ch == 'n')
				{
					cout << "Число в степени 2 равна " << power(Float) << endl;
				}
				else
				{
					cout << "Такого варианта ответа нет, повторите попытку...\n";
				}
				break;
			default:
				cout << "Такого типа нет...\n";
				break;
			}
			break;
		case 8:
			//Задание 8
			system("cls");
			cout << "Введите два значения а и б: ";
			cin >> a >> b;
			cout << "Вы ввели а = " << a << ", б = " << b << endl;
			swap(&a, &b);
			cout << "После преобразования а = " << a << ", b = " << b << endl;
			break;
		case 9:
			//Задание 9
			system("cls");
			cout << "Введите время формата **/**/**: ";
			cin >> x1.hours >> ch >> x1.minutes >> ch >> x1.seconds;
			cout << "Введите второе время формата **/**/**: ";
			cin >> x2.hours >> ch >> x2.minutes >> ch >> x2.seconds;
			swap(&x1, &x2);
			cout << "После преобразования первое время = " << x1.hours << "/" << x1.minutes << "/" << x1.seconds << endl
				<< "Второе время = " << x2.hours << "/" << x2.minutes << "/" << x2.seconds << endl;
			break;
		case 10:
			//Задание 10
			system("cls");
			cout << "Вызов функции через глобальную переменную: \n";
			for (int i = 0; i < 10; i++)
			{
				vizovi_Global();
			}
			cout << "\nВызов функции по ссылке: \n";
			for (int i = 0; i < 10; i++)
			{
				vizovi_po_pointer(&c);
			}
			break;
		case 11:
			//Задание 11
			system("cls");
			cout << "Введите первую сумму ширлингов(**.**.**): ";
			cin >> pound >> ch >> shilling >> ch >> pence;
			sum_1 = cin_sterling(pound, shilling, pence);
			cout << "Введите вторую сумму ширлингов(**.**.**): ";
			cin >> pound >> ch >> shilling >> ch >> pence;
			sum_2 = cin_sterling(pound, shilling, pence);
			printer(summa_sterlings(sum_1, sum_2));
			break;
		case 12:
			//Задание 12
			find = true;
			do
			{
				system("cls");
				cout << "Введите первую дробь вида a/b: ";
				cin >> a >> Char >> b;
				frac_1 = cin_frac(a, b);
				cout << "Выберите действие(+,-,*,/): ";
				cin >> ch;
				cout << "Введите вторую дробь вида a/b: ";
				cin >> a >> Char >> b;
				frac_2 = cin_frac(a, b);
				switch (ch)
				{
				case '+':
					cout << "Сумма равна ";
					printer(fadd(frac_1, frac_2));
					break;
				case '-':
					cout << "Разность равна ";
					printer(fsub(frac_1, frac_2));
					break;
				case '*':
					cout << "Произведение равно ";
					printer(fmul(frac_1, frac_2));
					break;
				case '/':
					cout << "Частное равно ";
					printer(fdiv(frac_1, frac_2));
					break;
				default:
					cout << "Вы ввели операцию, которой нет!\n";
					find = false;
					break;
				}
				cout << "Вы хотите продолжить?(y/n) ";
				cin >> ch;
				(ch == 'n') ? find = false : find = true;
			} while (find);
			break;
		default:
			cout << "Спасибо за проверку лабы!\n";
			end = false;
			break;
		}
	} while (end);
	return 0;
}