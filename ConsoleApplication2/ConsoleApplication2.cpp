// ConsoleApplication2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double a, b, h;
    double x, y;

    // Ввод исходных данных
    cout << "Введите начало отрезка a: ";
    cin >> a;

    cout << "Введите конец отрезка b: ";
    cin >> b;

    cout << "Введите шаг h: ";
    cin >> h;

    // Проверка корректности введённых данных
    if (a > b || h <= 0)
    {
        cout << "Ошибка: проверьте границы отрезка и шаг.";
        return 1;
    }

    // Вывод заголовка таблицы
    cout << "\nТаблица значений функции y = (x - 2)^2\n";
    cout << setw(12) << "x"
        << setw(12) << "y" << endl;

    cout << fixed << setprecision(4);

    // Табулирование функции
    for (x = a; x <= b + h * 0.000001; x += h)
    {
        y = (x - 2) * (x - 2);

        // Вывод текущих значений
        cout << setw(12) << x
            << setw(12) << y << endl;
    }

    return 0;
}
