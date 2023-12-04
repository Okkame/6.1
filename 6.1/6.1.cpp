﻿// Суртаев Сергей ИВТ-32 Вариант 17
// Дана матрица размера M × N. Для каждой строки матрицы с нечетным номером (1, 3, . . .) 
// найти среднее арифметическое ее элементов.
// Условный оператор не использовать.
//

#include <iostream>
#include <clocale>

using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    const size_t M = 5;
    const size_t C = 2;
    size_t a[M][C];
    cout<<"введите элементы матрицы 5 на 2:"<< endl;
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < C; ++j)
            cin >> a[i][j];
    }
    cout << "___" << endl;
    double b = 0;
    for (int i = 0; i < M; i += 2) {
        double s = 0;
        for (int j = 0; j < C; ++j) {
            s += a[i][j];
        }
        b = s;
    }
    cout << b / C << endl;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
