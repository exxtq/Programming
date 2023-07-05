#include <stdio.h>
#include <math.h>

double calculateVectorLength(int x1, int y1, int x2, int y2) { // Функція для обчислення довжини вектора за його координатами
    int deltaX = x2 - x1; // Різниця між координатами x2 і x1
    int deltaY = y2 - y1; // Різниця між координатами y2 і y1
    double length = sqrt(deltaX * deltaX + deltaY * deltaY); // Обчислення довжини вектора за теоремою Піфагора

    return length;
}

int main() {
    int x1, y1, x2, y2;

    printf("Введіть координати початку і кінця вектора (x1, y1, x2, y2): "); // Введення координат початку і кінця вектора
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    double vectorLength = calculateVectorLength(x1, y1, x2, y2); // Обчислення довжини вектора
    printf("Довжина вектора: %.6f\n", vectorLength); // Виведення довжини вектора з точністю до шести знаків після коми

    return 0;
}
