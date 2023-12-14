#include <iostream> // бібліотека вводу та виводу 
#define SIZE 2//- визначає символічну константу SIZE зі значенням 2
using namespace std; // використання простору імен  std

int main() {
    int numbers[SIZE]; //Оголошення масиву 'numbers' розміром SIZE (2)
    cout << "Enter 2 numbers: ";// Виведення повідомлення

    for (int i = 0; i < SIZE; ++i) {//тут працює цикл для вводу масиву за розміром
        cin >> numbers[i];// Введення чисел в масив
    }
    //Тут починається логічна конструкція "If" та "else"
    if (numbers[0] > numbers[1]) { //Логічна умова If
        cout << "The first number is bigger: " << numbers[0] << endl;// Якщо перше число більше, вивести його
    }
    else {//Логічна умова else
        cout << "Both: " << numbers[0] << " " << numbers[1] << endl;// Якщо ні, вивести обидва числа
    }

    return 0;//Закінчення 
}
