#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;

int main()
{
    system("chcp 1251>nul");                           // Изменение кодировки кансоли
    system("color 80");                                // Изменяем цвет консоли и текста
    ifstream word;                                     // Создаём входной поток
    word.open("words.txt");                            // Открываем файл
    if (!word.is_open())                               // Проверяем открытие файла
    {
        cout << " Не удаётся открыть файл!" << endl;
        return 1;                                      // Обработка ошибки
    }

    
    word.close();                                      // Закрываем файл
    system("pause>nul");                               // Задержка консоли окна
    return 0;
}