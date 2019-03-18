//
// Created by naoki on 19/03/09.
//
#include "main.h"
void log_info(const char *msg, ...){
    fprintf(stdout, "[INFO]:");
    va_list ap;
    va_start(ap, msg);
    vfprintf(stdout, msg, ap);
    va_end(ap);
    fputc('\n', stdout);
}

void log_error(const char *msg, ...){
    fprintf(stdout, "[ERROR]:");
    va_list ap;
    va_start(ap, msg);
    vfprintf(stdout, msg, ap);
    va_end(ap);
    fputc('\n', stdout);
}

void log_warn(const char *msg, ...){
    fprintf(stdout, "[WARN]:");
    va_list ap;
    va_start(ap, msg);
    vfprintf(stdout, msg, ap);
    va_end(ap);
    fputc('\n', stdout);
}

void log_debug(const char *msg, ...){
    fprintf(stdout, "[DEBUG]:");
    va_list ap;
    va_start(ap, msg);
    vfprintf(stdout, msg, ap);
    va_end(ap);
    fputc('\n', stdout);
}