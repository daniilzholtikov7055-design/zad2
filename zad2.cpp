#include <iostream>
#include <clocale> // В C++ лучше использовать <clocale> вместо <locale.h>

using namespace std;

int main() 
{
    setlocale(LC_ALL, "Russian"); // Настройка локали для корректного отображения
    
    int number; // Объявляем переменную number
    
    cout << "Vvedite chislo: ";
    cin >> number; // ИСПРАВЛЕНО: используем правильное имя переменной number вместо num
    
    cin.ignore();
    
    // ИСПРАВЛЕНО: убрана лишняя кавычка перед оператором << и исправлена переменная
    cout << "Vi vveli: " << number << "\n"; 
    
    cin.get();
    
    return 0; // Добавлено для корректного завершения функции main
}

