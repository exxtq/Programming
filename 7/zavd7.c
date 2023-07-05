#include <stdio.h>
#include <math.h>

int countIntersectionPoints(int x1, int y1, int r1, int x2, int y2, int r2) { // Функція для визначення кількості точок перетину двох колів
    double distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)); // Відстань між центрами колів

    if (distance > r1 + r2) {
        return 0; // Немає точок перетину, кола не торкаються
    } else if (distance == r1 + r2) {
        return 1; // Одна точка перетину, кола торкаються зовнішньо
    } else if (distance < fabs(r1 - r2)) {
        return 0; // Немає точок перетину, одне коло повністю знаходиться всередині іншого
    } else if (distance == fabs(r1 - r2)) {
        return 1; // Одна точка перетину, одне коло повністю міститься всередині іншого
    } else {
        return 2; // Два точки перетину
    }
}

int main() {
    int x1, y1, r1, x2, y2, r2;
    // Введення координат і радіусів першого та другого кола
    printf("Введіть координати та радіус першого та другого кола (x1, y1, r1, x2, y2, r2): "); 
    scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);

    int intersectionPoints = countIntersectionPoints(x1, y1, r1, x2, y2, r2); // Обчислення кількості точок перетину
    // Виведення результату
    if (intersectionPoints == -1) {
        printf("Кола мають безкінечну кількість точок перетину.\n");
    } else {
        printf("Кількість точок перетину: %d\n", intersectionPoints);
    }

    return 0;
}