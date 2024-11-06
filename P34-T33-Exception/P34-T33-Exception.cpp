#include <iostream>
#include <exception>
using namespace std;
#include "Provider.h"

//int main()
//{
//    int a = 0, b = 0;
//    float c = 0;
//    cout << "Введіть два числа: ";
//    cin >> a >> b;
//
//	try //Апаратна ВС
//	{
//		c = a / b;
//		cout << "Result: " << c << std::endl;
//	}
//	catch (const std::exception& obj)
//	{
//		cout << obj.what() << endl;
//	} 
//	catch (...) {
//		cout << "div by zero\n";
//	}    
//}

//float average(int arr[], int size) {
//	int amount = 0;
//	float sum = 0;
//
//	for (int i = 0; i < size; i++) {
//		if (arr[i] % 2 != 0) {
//			amount++;
//			sum += arr[i];
//		}
//	}
//	if (amount == 0) throw "Not found odd numbers!";
//	
//	return sum / amount;
//}
//
//int main() {
//	int A[5]{ 4, 2, 4, 76, 6 };
//	int B[5]{ 1, 2, 7, 76, 6 };
//	float a1 = 0, b1 = 0;
//	
//	try {
//		a1 = average(A, 5);
//		cout << "Результат: " << a1 << endl;
//	}
//	catch (const char* s) { cout << "Array A: " << s << endl; }
//
//	try {
//	b1 = average(B, 5);
//	cout << "Результат: " << b1 << endl;
//	}
//	catch (const char* s) { cout << "Array B: " << s << endl; }
//}


int main() {
	Provider kyivstar("Kyivstar");

	kyivstar.addTariff(new SecondsTariff("day", 0.01));
	kyivstar.addTariff(new MinutesTariff("night", 0.15));
	kyivstar.addTariff(new MinutesTariff("XXX", -15));

	kyivstar.showList();

}