#include "s21_string.h"

int s21_strlen(const char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int s21_strcmp(const char *s1, const char *s2) {
    while (*s1 && *s2 && *s1 == *s2) {
        s1++;
        s2++;
    }
    return *(char *)s1 - *(char *)s2;
}

void s21_strcpy(char *dest, const char *testcp) {
    while (*testcp) {
        *dest = *testcp;
        dest++;
        testcp++;
    }
    *dest = '\0';
}

void s21_strcat(char *dest, const char *src) {
    int dest_len = 0;
    while (dest[dest_len] != '\0') {
        dest_len++;
    }

    int src_len = 0;
    while (src[src_len] != '\0') {
        dest[dest_len + src_len] = src[src_len];
        src_len++;
    }
    dest[dest_len + src_len] = '\0';
}

char *s21_strchr(const char *str, int c) {
    int i = 0;
    while (str[i] && str[i] != c) ++i;
    return c == str[i] ? (char *)str + i : NULL;
}

char *s21_strstr(const char *a, const char *b) {
    char *result = NULL;

    if (*b == '\0') {
        result = (char *)a;
    } else {
        while (*a != '\0' && result == NULL) {
            const char *h = a;
            const char *n = b;
            while (*n != '\0' && *h == *n) {
                h++;
                n++;
            }
            if (*n == '\0') {
                result = (char *)a;
            }
            a++;
        }
    }

    return result;
}

char *s21_strtok(char *str, const char *delim) {
    char *buffer = NULL;  // текущая позиция в строке
    char *token = NULL;   // найденный токен
    if (str != NULL) {
        buffer = str;
        token = buffer;
        int delim_len = s21_strlen(delim);
        int token_len = 0;
        while (buffer[token_len] != '\0' && s21_strcmp(buffer + token_len, delim) != 0) {
            token_len++;
        }
        buffer += token_len + delim_len;
        if (*buffer != '\0') {
            *buffer = '\0';
            buffer++;
        } else {
            buffer = NULL;
        }
    }
    return token;
}