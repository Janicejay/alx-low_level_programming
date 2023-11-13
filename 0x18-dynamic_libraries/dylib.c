#include <stdio.h>
#include "main.h"

int _putchar(char c) {
    return putchar(c);
}

int _islower(int c) {
    return (c >= 'a' && c <= 'z');
}

int _isalpha(int c) {
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int _abs(int n) {
    return (n < 0 ? -n : n);
}

int _isupper(int c) {
    return (c >= 'A' && c <= 'Z');
}

int _isdigit(int c) {
    return (c >= '0' && c <= '9');
}

int _strlen(char *s) {
    int length = 0;
    while (*s++) length++;
    return length;
}

void _puts(char *s) {
    while (*s) _putchar(*s++);
}

char *_strcpy(char *dest, char *src) {
    char *original_dest = dest;
    while ((*dest++ = *src++));
    return original_dest;
}

int _atoi(char *s) {
    int result = 0;
    while (_isdigit(*s)) result = result * 10 + (*s++ - '0');
    return result;
}

char *_strcat(char *dest, char *src) {
    char *original_dest = dest;
    while (*dest) dest++;
    while ((*dest++ = *src++));
    return original_dest;
}

char *_strncat(char *dest, char *src, int n) {
    char *original_dest = dest;
    while (*dest) dest++;
    while (n-- && (*dest++ = *src++));
    return original_dest;
}

char *_strncpy(char *dest, char *src, int n) {
    char *original_dest = dest;
    while (n-- && (*dest++ = *src++));
    return original_dest;
}

int _strcmp(char *s1, char *s2) {
    while (*s1 && (*s1 == *s2)) {
        s1++;
        s2++;
    }
    return *(unsigned char *)s1 - *(unsigned char *)s2;
}

char *_memset(char *s, char b, unsigned int n) {
    char *original_s = s;
    while (n--) *s++ = b;
    return original_s;
}

char *_memcpy(char *dest, char *src, unsigned int n) {
    char *original_dest = dest;
    while (n--) *dest++ = *src++;
    return original_dest;
}

char *_strchr(char *s, char c) {
    while (*s) {
        if (*s == c) return s;
        s++;
    }
    return NULL;
}

unsigned int _strspn(char *s, char *accept) {
    unsigned int length = 0;
    while (*s && _strchr(accept, *s++)) length++;
    return length;
}

char *_strpbrk(char *s, char *accept) {
    while (*s) {
        if (_strchr(accept, *s)) return s;
        s++;
    }
    return NULL;
}

char *_strstr(char *haystack, char *needle) {
    char *p1 = haystack, *p2 = needle;
    char *p1Adv = haystack;
    while (*++p2) p1Adv++;
    while (*p1Adv) {
        char *p1Begin = p1;
        p2 = needle;
        while (*p1 && *p2 && *p1 == *p2) {
            p1++;
            p2++;
        }
        if (!*p2) return p1Begin;
        p1 = p1Begin + 1;
        p1Adv++;
    }
    return NULL;
}
