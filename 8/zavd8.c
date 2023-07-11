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
    int uppercaseCount = 0;
    int lowercaseCount = 0;

    // Рахуємо кількість входжень кожної букви з відповідним регістром
    for(int i = 0; i < len; i++) {
        if(isupper(word[i])) {
            count[word[i]-'A']++;
            uppercaseCount++;
        } else if(islower(word[i])) {
            count[word[i]-'a']++;
            lowercaseCount++;
        }
    }

    // Обчислюємо факторіал довжини слова
    long long fact_len = factorial(len);

    // Обчислюємо добуток факторіалів кількостей входжень
    for(int i = 0; i < 26; i++) {
        if(count[i] > 1) {
            fact_len /= factorial(count[i]);
        }
    }

    // Враховуємо регістр при виведенні результату
    long long anagramCount = fact_len;

    if (uppercaseCount > 0 && lowercaseCount > 0) {
        anagramCount *= 2;  // Множимо на 2, якщо враховуються обидва регістри
    }

    printf("Кількість анаграм: %lld\n", anagramCount);

    return 0;
}
