#ifndef MAIN_H
#define MAIN_H

#define SIZE 1024 /* Buffer size defined */

/* Used header file */
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

/* Prototypes of the functions */
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
#endif
