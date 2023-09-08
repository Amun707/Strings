#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>//библиотека, предназначеная для работы со строками с++


//Strings//СТРОКИ



int main() {
	system("chcp 1251>nul");
	int n, m;
	//Строки языка С
	char cstr1[4]{'H', 'i', '!', '\0'};//нуль-терминатор
	std::cout << cstr1 << std::endl;

	char cstr2[] = "Hello world!";
	std::cout << cstr2 << std::endl;

	//Строки языка C++
	std::string mystr;
	std::cout << mystr << std::endl;//"\0"пустота так как по умолчанию стринг это пустая строка("")
	mystr = "Hello world!";
	std::cout << mystr << std::endl;

	//Конкатенация строк
	std::cout << mystr + "!!!! WOW!!!" << std::endl;
	mystr += "...";
	std::cout << mystr << std::endl;

	//Ввод строк
	std::cout << "Привет! Как тебя зовут?\n";
	std::cout << "Ввод -> ";
	std::string name;
	//std::cin >> name;// - считывает лишь одно слово
	std::getline(std::cin, name);
	std::cout << "Приятно познакомится, " << name << std::endl;

	std::cout << "Сколько тебе лет?\nВвод -> ";
	int age;
	std::cin >> age;
	std::cin.ignore();//игнор - метод, очищающий поток ввода для нормального функционирования getline
	std::cout << age << "?Ого...\n";
	std::cout << "Кем ты работаешь?\nВвод -> ";
	std::string job;
	std::getline(std::cin, job);
	std::cout << "Всегда мечтал работать " << job << std::endl;

	//Метеоды строк
	std::string str = "Hello world!";

	//length и size, возвращающие длину строки
	std::cout << str.length() << std::endl;//12
	std::cout << str.size() << std::endl;//12

	//incert, вставляющий подстроку в строку
	str.insert(3, "WOW");
	std::cout << str << std::endl;//HelWOWlo world!

	//replace, заменяющий часть строки подстрокой
	str.replace(3, 5, "###");
	std::cout << str << std::endl;//Hel###rld!

	//find, возвращающий позицию первого вхождения подстроки в строку
	std::cout << str.find('l') << std::endl;//2
	std::cout << str.find('l', 5) << std::endl;//9

	//rfind, возвращающий позицию последнего вхождения подстроки в строку
	std::cout << str.rfind('o') << std::endl;//7
	std::cout << str.rfind('o', 5) << std::endl;//4

	//substr, возвращающий подстроку из строки
	std::cout << str.substr(3) << std::endl;//lo world!
	std::cout << str.substr(4,6) << std::endl;//o worl

	//Функции для работы со строками
	std::cout << "Введите число -> ";
	std::cin >> n;
	std::cin.ignore();
	std::string numstr = std::to_string(n);//преобразование числа в строку
	std::cout << numstr << std::endl;

	std::cout << "Введите строку -> ";
	std::string strnum;
	std::getline(std::cin, strnum);

	int num = std::stoi(strnum);
	std::cout << num << std::endl;


	return 0;
}