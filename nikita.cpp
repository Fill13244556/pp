#include <iostream>
int main() {
	//Series1◦
	//. Даны десять вещественных чисел.Найти их сумму.
	int sum = 0;
	int i, a;
	for (i = 1; i <= 10; i++) {
		std::cout << "a:";
		std::cin >> a;
		sum = sum + a;
	}
	std::cout << sum << std::endl;

	//Series2. Даны десять вещественных чисел. Найти их произведение.
	int proiz = 1;
	int a1;
	int i1 = 1;
	while (i1 <= 10) {
		i1++;
std::cout << "a1:";
std::cin >> a1;
proiz = proiz * a1;
	}
std::cout << proiz << std::endl;

//Series3. Даны десять вещественных чисел. Найти их среднее арифметическое.
int summ = 0;
double srednee; 
int i2, a2;
for (i2 = 1; i2 <= 10; i2++) {
	std::cout << "a2:";
	std::cin >> a2;
	summ = summ + a2;
	
}
srednee = summ / 10.0;
std::cout << srednee << std::endl;

//Series4. Дано целое число N и набор из N вещественных чисел. Вывести
//сумму и произведение чисел из данного набора.
	setlocale(LC_ALL, "Russian");
	int n; //celoe chislo 
	std::cout << "n:";
	std::cin >> n; 
	int N;
	int a3; 
	int i3 = 1;
	int proizv = 1;
	int summa = 0; 
	while (i3 <= n) {
		i3++; 
		std::cout << "a3:"; 
		std::cin >> a3; 
		proizv = proizv * a3; 
		summa = summa + a3; 
   }
	std::cout << "Произведение:" << proizv << std::endl;
	std::cout << "Сумма:" << summa << std::endl;
    
}
