#include "s21_string.h"

void s21_strlen_test(const char *test_str, int expected_length) {
    int result = s21_strlen(test_str);
    printf("Input: %s\n", test_str);
    printf("Output: %d\n", result);
    if (result == expected_length) {
        printf("Result: SUCCESS\n");
    } else {
        printf("Result: FAIL\n");
    }
}

void s21_strcmp_test(const char *str1, const char *str2) {
    printf("Input: %s, %s\n", str1, str2);
    int result = s21_strcmp(str1, str2);
    printf("Output: %d\n", result);
    printf("Result: %s\n", (result == 0) ? "SUCCESS" : "FAIL");
}

void s21_strcpy_test() {
    char tcp1[] = "Hello, World!";
    char mem1[20];
    s21_strcpy(mem1, tcp1);
    printf("Test 1:\nInput: %s\nOutput: %s\nResult: %s\n", tcp1, mem1,
           (s21_strcmp(tcp1, mem1) == 0) ? "SUCCESS" : "FAIL");

    char tcp2[] = "";
    char mem2[5];
    s21_strcpy(mem2, tcp2);
    printf("Test 2:\nInput: %s\nOutput: %s\nResult: %s\n", tcp2, mem2,
           (s21_strcmp(tcp2, mem2) == 0) ? "SUCCESS" : "FAIL");

    char tcp3[] = "12345";
    char mem3[5];
    s21_strcpy(mem3, tcp3);
    printf("Test 3:\nInput: %s\nOutput: %s\nResult: %s\n", tcp3, mem3,
           (s21_strcmp(tcp3, mem3) == 0) ? "SUCCESS" : "FAIL");
}

void s21_strcat_test() {
    char dest1[20] = "Hello, ";
    char src1[] = "World!";
    s21_strcat(dest1, src1);
    printf("Test 1:\nInput: %s, %s\nOutput: %s\nResult: %s\n", "Hello, ", "World!", dest1,
           (s21_strcmp(dest1, "Hello, World!") == 0) ? "SUCCESS" : "FAIL");

    char dest2[20] = "123";
    char src2[] = "";
    s21_strcat(dest2, src2);
    printf("Test 2:\nInput: %s, %s\nOutput: %s\nResult: %s\n", "123", "", dest2,
           (s21_strcmp(dest2, "123") == 0) ? "SUCCESS" : "FAIL");

    char dest3[20] = "";
    char src3[] = "abc";
    s21_strcat(dest3, src3);
    printf("Test 3:\nInput: %s, %s\nOutput: %s\nResult: %s\n", "", "abc", dest3,
           (s21_strcmp(dest3, "abc") == 0) ? "SUCCESS" : "FAIL");
}

void s21_strchr_test(const char *str, int c, const char *expected_result) {
    char *result = s21_strchr(str, c);
    printf("Input: %s, %c\n", str, c);
    printf("Output: %s\n", result);
    if (result == NULL && expected_result == NULL) {
        printf("SUCCESS\n");
    } else if (result != NULL && expected_result != NULL && s21_strcmp(result, expected_result) == 0) {
        printf("SUCCESS\n");
    } else {
        printf("FAIL\n");
    }
}

void s21_strstr_test() {
    char str1[] = "Hello, World!";
    char sub1[] = "World";
    printf("Test 1:\nInput: %s, %s\nOutput: %s\nResult: %s\n", "Hello, World!", "World",
           s21_strstr(str1, sub1) ? s21_strstr(str1, sub1) : "NULL",
           (s21_strstr(str1, sub1) == &str1[7]) ? "SUCCESS" : "FAIL");

    char str2[] = "Hello, World!";
    char sub2[] = "Universe";
    printf("Test 2:\nInput: %s, %s\nOutput: %s\nResult: %s\n", "Hello, World!", "Universe",
           s21_strstr(str2, sub2) ? s21_strstr(str2, sub2) : "NULL",
           (s21_strstr(str2, sub2) == NULL) ? "SUCCESS" : "FAIL");

    char str3[] = "Hello, World!";
    char sub3[] = "o";
    printf("Test 3:\nInput: %s, %s\nOutput: %s\nResult: %s\n", "Hello, World!", "o",
           s21_strstr(str3, sub3) ? s21_strstr(str3, sub3) : "NULL",
           (s21_strstr(str3, sub3) == &str3[4]) ? "SUCCESS" : "FAIL");
}

void s21_strtok_test() {
    char str1[] = "apple,banana,cherry";
    const char delim1[] = ",";
    char *token1;

    printf("Input string: %s\n", str1);
    printf("Expected tokens: apple banana cherry\n");

    token1 = s21_strtok(str1, delim1);
    while (token1 != NULL) {
        printf("Token: %s\n", token1);
        token1 = s21_strtok(NULL, delim1);
    }

    char str2[] = "one two three four";
    const char delim2[] = " ";
    char *token2;

    printf("\nInput string: %s\n", str2);
    printf("Expected tokens: one two three four\n");

    token2 = s21_strtok(str2, delim2);
    while (token2 != NULL) {
        printf("Token: %s\n", token2);
        token2 = s21_strtok(NULL, delim2);
    }

    char str3[] = "hello world";
    const char delim3[] = "o";
    char *token3;

    printf("\nInput string: %s\n", str3);
    printf("Expected tokens: hell world\n");

    token3 = s21_strtok(str3, delim3);
    while (token3 != NULL) {
        printf("Token: %s\n", token3);
        token3 = s21_strtok(NULL, delim3);
    }
}
