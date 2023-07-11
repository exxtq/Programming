#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Функція для обчислення факторіалу
long long factorial(int n) {
    long long fact = 1;
    for(int i = 2; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Головна функція
int main() {
    char word[15];
    int count[26] = {0};
    printf("Введіть слово: ");
    scanf("%s", word);

    int len = strlen(word);

    // Рахуємо кількість входжень кожної букви (нижній та верхній регістр)
    for(int i = 0; i < len; i++) {
        char lowercase = tolower(word[i]);
        count[lowercase-'a']++;
    }

    // Обчислюємо факторіал довжини слова
    long long fact_len = factorial(len);

    // Обчислюємо добуток факторіалів
    for(int i = 0; i < 26; i++) {
        if(count[i] > 1) {
            fact_len /= factorial(count[i]);
        }
    }

    // Виводимо результат
    printf("Кількість анаграм: %lld\n", fact_len);

    return 0;
}
