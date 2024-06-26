#include "s21_string.h"

int main() {
#ifdef Quest_1
    s21_strlen_test("Hello42", 12);
    s21_strlen_test("", 0);
    s21_strlen_test("0123456789", 10);
#endif
#ifdef Quest_2
    s21_strcmp_test("hello", "hello1");
    s21_strcmp_test("0000", "0000");
    s21_strcmp_test("monkey", "");
#endif
#ifdef Quest_3
    s21_strcpy_test();
#endif
#ifdef Quest_4
    s21_strcat_test();
#endif
#ifdef Quest_5
    s21_strchr_test("Hello, World!", 'o', "o, World!");
    s21_strchr_test("This is a test string", 'x', NULL);
    s21_strchr_test("1234567890", '\0', NULL);
#endif
#ifdef Quest_6
    s21_strstr_test();
#endif
#ifdef Quest_7
    s21_strtok_test();
#endif
    return 0;
}