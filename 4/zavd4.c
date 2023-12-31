#include <stdio.h>

// Функція для знаходження кількості рівних дільників числа
int equal_divisors(int n) {
    int count = 0;
    // Цикл від 1 до n
    for (int m = 1; m <= n; m++) {
        // Якщо залишок від ділення n на m рівний частці від ділення n на m
        if (n % m == n / m) {
            // Збільшуємо лічильник
            count++;
        }
    }
    // Повертаємо кількість рівних дільників
    return count;
}

int main() {
    int n;
    // Запитуємо у користувача число
    printf("Введіть натуральне число n: ");
    scanf("%d", &n);

    // Знаходимо кількість рівних дільників
    int result = equal_divisors(n);
    // Виводимо результат
    printf("Кількість рівних дільників числа %d: %d\n", n, result);

    return 0;
}