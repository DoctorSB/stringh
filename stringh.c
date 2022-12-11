// strcat function realisation

#include <stdio.h>

void s21_strcat(char *s, char *t);

int main() {
  char s[100] = "Hello, ";
  char t[] = "world!";
  s21_strcat(s, t);
  printf("%s", s);
  return 0;
}

void s21_strcat(char *s, char *t) {
  while (*s != '\0') s++;
  while ((*s = *t) != '\0') {
    s++;
    t++;
  }
}// перевод числа в строку

#include <stdio.h>
#include <string.h>

void s21_itoa(int n, char s[]);
void s21_reverse(char s[]);

int main() {
  char s[100];
  s21_itoa(123, s);
  printf("%s", s);
  return 0;
}

void s21_itoa(int n, char s[]) {
  int i, sign;
  if ((sign = n) < 0) /* записываем знак */
    n = -n; /* делаем n положительным числом */
  i = 0;
  do { /* генерируем цифры в обратном порядке */
    s[i++] = n % 10 + '0'; /* берем следующую цифру */
  } while ((n /= 10) > 0); /* удаляем */
  if (sign < 0) s[i++] = '-';
  s[i] = '\0';
  s21_reverse(s);
}

void s21_reverse(char s[]) {
  int i, j;
  char c;
  for (i = 0, j = strlen(s) - 1; i < j; i++, j--) {
    c = s[i];
    s[i] = s[j];
    s[j] = c;
  }
}
