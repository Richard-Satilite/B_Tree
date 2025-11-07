#ifndef MACROS_H
#define MACROS_H

#include <stdio.h>
#include <stdlib.h>

// Macro para log de erro
#define LOG_ERR(msg) \
    do { \
        fprintf(stderr, "[ERROR] - %s\n", msg); \
        exit(EXIT_FAILURE); \
    } while (0)

// Macro para log de informação
#define LOG_INFO(msg) \
    do { \
        printf("[INFO] - %s\n", msg); \
    } while (0)

// Macro para log de depuração
#define LOG_DEBUG(msg) \
    do { \
        printf("[DEBUG] - %s\n", msg); \
    } while (0)

#endif
