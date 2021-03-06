#ifndef main_h
#define main_h
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "string.h"
#include "unistd.h"
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(char fd, char *text_content);
int append_text_to_file(char fd, char *text_content);
#endif
