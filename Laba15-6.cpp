#include <iostream>//підключаємо директиву вводу та виводу 
#define SIZE 3//зазначаємо константу 
using namespace std;//використовуємо простір імен std

int main() {
    int numbers[SIZE];//створюємо масив 

    cout << "Enter 3 numbers: ";//вивід повідомлення 
    for (int i = 0; i < SIZE; ++i) {//цикл для введення даних 
        cin >> numbers[i];//введеня даних 
    }

    int minValue = numbers[0];//задання змінної
    int maxValue = numbers[0];//задання змінної 

    for (int i = 1; i < SIZE; ++i) {//цикл для перевірки значень 
        if (numbers[i] < minValue) {//Логічна умова 
            minValue = numbers[i];
        }//Умова якщо виконується  
        if (numbers[i] > maxValue) {//Логічна умова 
            maxValue = numbers[i];
        }//Умова якщо виконується
    }


    cout << "Minimum value: " << minValue << " Maximum value: " << maxValue;// Виведення результату

    return 0;//Логічний кінець 
}
