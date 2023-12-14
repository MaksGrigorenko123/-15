#include <iostream>//бібліотека вводу та виводу 
#define SIZE 3//визначає символічну константу 
using namespace std;//використовує простір імен std

int main() {
    int numbers[SIZE];//оголошення масиву 

    cout << "Enter 3 numbers: ";//вивід повідомлення 
    for (int i = 0; i < SIZE; ++i) {//використовуємо цикл для вводу даних 
        cin >> numbers[i];//вводимо 3 числа 
    }

    cout << "reverse array: ";//вивід повідомлення 
    for (int i = 2; i >= 0; --i) {//використовуємо цикл для виводу оберненого масиву 
        cout << numbers[i] << " ";//вивід цього масиву 
    }

    return 0;//логічний кінець 
}