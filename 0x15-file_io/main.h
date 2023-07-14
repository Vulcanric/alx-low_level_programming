#ifndef MAIN_H
#define MAIN_H

/* Used header file */
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

/* Prototypes of the functions */
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
#endif
