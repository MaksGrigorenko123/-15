﻿#include <iostream>//бібліотека вводу та виводу
#define SIZE 2//визначає символічну константу 
using namespace std;//використовує простір імен std

int main() {
    int numbers[SIZE];//створює масив розміром 2 елемента 

    cout << "Enter 2 number:"; //виводе повідомлення 
    cin >> numbers[0];//ввод першого числа масиву
    cin >> numbers[1]; //ввод другого числа масиву 

    for (int i = 0; i < SIZE; ++i) {//цикл що перелічує числа масиву 
        if (numbers[i] % 2 == 0) {//логічна умова
            numbers[i] = 0;//якщо логічна умова виконується 
        }
    }

    cout << "Result: ";//вивід повідомлення 
    for (int i = 0; i < SIZE; ++i) {//цикл для виводу результату
        cout << numbers[i] << " ";//виводиться відповідь 
    }

    return 0;//Логічний кінець 
}