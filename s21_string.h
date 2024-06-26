#ifndef S21_STRING_H
#define S21_STRING_H

#include <stdio.h>
#include <stdlib.h>

int s21_strlen(const char *str);
int s21_strcmp(const char *s1, const char *s2);
void s21_strcpy(char *dest, const char *testcp);
void s21_strcat(char *dest, const char *src);
char *s21_strchr(const char *str, int c);
char *s21_strstr(const char *a, const char *b);
char *s21_strtok(char *str, const char *delim);
void s21_strlen_test(const char *test_str, int expected_length);
void s21_strcmp_test(const char *str1, const char *str2);
void s21_strcpy_test();
void s21_strcat_test();
void s21_strchr_test();
void s21_strstr_test();
void s21_strtok_test();

#endif