﻿#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	//Integer1◦	. Дано расстояние L в сантиметрах.Используя операцию деления	нацело, найти количество полных метров в нем(1 метр = 100 см).
	//int L, A;
    //cin >> L;
    //A = L / 100;
	//cout << "Целых метров "  << A << endl;
	//Integer2◦
		//.Дана масса M в килограммах.Используя операцию деления нацело,
		//найти количество полных тонн в ней(1 тонна = 1000 кг).
	//int m, f;
	//cin >> m;
	//f = m / 1000;
	//cout << "Целых тонн " << f << endl;
	//Integer3◦
		//.Дан размер файла в байтах.Используя операцию деления нацело,
		//найти количество полных килобайтов, которые занимает данный файл
		//(1 килобайт = 1024 байта).
	//int b, k;
	//cin >> b;
	//k = b / 1024;
	//cout << "Целых килобайт " << k << endl;
	//Integer4◦
		//.Даны целые положительные числа A и B(A > B).На отрезке длины A размещено максимально возможное количество отрезков длины B
		//(без наложений).Используя операцию деления нацело, найти количество
		//отрезков B, размещенных на отрезке A.
	//int a, b, h;
	//cin >> a >> b;
	//h = a / b;
	//cout << "Количество отрезков B, размещенных на отрезке A - " << h << endl;
	//Integer5◦
		//.Даны целые положительные числа A и B(A > B).На отрезке длины A
		//размещено максимально возможное количество отрезков длины B(без
		//	наложений).Используя операцию взятия остатка от деления нацело, найти
		//длину незанятой части отрезка A.
	//int  a, b, f;
	//cin >> a >> b;
	//f = a % b;
	//cout << "Длина незанятой части отрезка A - " << f 
		//Integer6◦
		//.Дано двузначное число.Вывести вначале его левую цифру(десятки), а затем — его правую цифру(единицы).Для нахождения десятков
		//использовать операцию деления нацело, для нахождения единиц — операцию взятия остатка от деления.
	//int a, b, f;
	//cin >> a;
	//f = a / 10;
	//b = a % 10;
	//cout << "Левая цифра - " << f << " Правая цифра - " << b << endl;
	//Integer7◦
		//.Дано двузначное число.Найти сумму и произведение его цифр.
	//int a, g, f, b, t;
	//cin >> a;
	//f = a / 10;
	//b = a % 10;
	//g = f + b;
	//t = f - b;
	//cout << "Сумма чисел - " << g << " Разность чисел - " << t << endl;
	//Integer8◦
		//.Дано двузначное число.Вывести число, полученное при перестановке цифр исходного числа.
	//int a, f, b;
	//cin >> a;
	//f = a / 10;
	//b = a % 10;
	//cout << "Число, полученное при перестановке цифр - " << b << f << endl;
 //Integer9◦
	//. Дано трехзначное число.Используя одну операцию деления нацело,
		//вывести первую цифру данного числа(сотни).
	//int a, f;
	//cout << "Введите трёхзначное число - ";
	//cin >> a;
	//f = a / 100;
	//cout << "Первая цифра - " << f << endl;
	//Integer10◦
	//. Дано трехзначное число.Вывести вначале его последнюю цифру
	//(единицы), а затем — его среднюю цифру(десятки).
   // int a, f, t, g;
	//cout << "Введите трёхзначное число - ";
	//cin >> a;
	//f = a % 100;
	//t = f % 10;
	//g = f / 10;
	//cout << t << g << endl;
	//Integer11◦
	//. Дано трехзначное число.Найти сумму и произведение его цифр.
	//int a, f, r, t, g, o, i;
	//cout << "Введите трёхзначное число - ";
	//cin >> a;
	//r = a / 100;
	//f = a % 100;
	//t = f % 10;
	//g = f / 10;
	//o = r + t + g;
	//i = r - t - g;
	//cout << "Сумма - " << o << " Разность - " << i << endl;
	//Integer12◦
	//. Дано трехзначное число.Вывести число, полученное при прочтении исходного числа справа налево.
	//int a, f, r, t, g;
	//cout << "Введите трёхзначное число - ";
	//cin >> a;
	//r = a / 100;
	//f = a % 100;
	//t = f % 10;
	//g = f / 10;
	//cout << "Сумма - " << t << g << r << endl;
	//Integer13◦
		//.Дано трехзначное число.В нем зачеркнули первую слева цифру и
		//приписали ее справа.Вывести полученное число.
	//int a, f, r, t, g;
	//cout << "Введите трёхзначное число - ";
	//cin >> a;
	//r = a / 100;
	//f = a % 100;
	//t = f % 10;
	//g = f / 10;
	//cout << g << t << r << endl;
	//Integer14◦
	//. Дано трехзначное число.В нем зачеркнули первую справа цифру
	//	и приписали ее слева.Вывести полученное число.
	//int a, f, r, t, g;
	//cout << "Введите трёхзначное число - ";
	//cin >> a;
	//r = a / 100;
	//f = a % 100;
	//t = f % 10;
	//g = f / 10;
	//cout << t << r << g << endl;
    //Integer15◦
	//. Дано трехзначное число.Вывести число, полученное при перестановке цифр сотен и десятков исходного числа(например, 123 перейдет в
	//	213).
	//int a, f, r, t, g;
	//cout << "Введите трёхзначное число - ";
	//cin >> a;
//	r = a / 100;
	//f = a % 100;
	//t = f % 10;
	//g = f / 10;
	//cout << g << r << t << endl;
	//Integer16◦
	//. Дано трехзначное число.Вывести число, полученное при перестановке цифр десятков и единиц исходного числа(например, 123 перейдет
	//	в 132).
	//int a, f, r, t, g;
	//cout << "Введите трёхзначное число - ";
	//cin >> a;
	//r = a / 100;
	//f = a % 100;
	//t = f % 10;
	//g = f / 10;
	//cout << r << t << g << endl;
	//Integer17◦
	//	.Дано целое число, большее 999. Используя одну операцию деления нацело и одну операцию взятия остатка от деления, найти цифру,
	//	соответствующую разряду сотен в записи этого числа.
	//int a, f, r;
	//cout << "Введите четырех значное число - ";
	//cin >> a;
	//r = a % 1000;
	//f = r / 100;
	//cout << f << endl;
	//Integer18◦
	//	.Дано целое число, большее 999. Используя одну операцию деления нацело и одну операцию взятия остатка от деления, найти цифру,
	//	соответствующую разряду тысяч в записи этого числа.
	
}