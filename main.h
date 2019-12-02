#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdbool.h>
#include <dirent.h>
#include <sys/types.h>

#include "sha1.h"

#define CHUNKSIZE 10
//256kb로 나누고자 하면 1024 * 256 = 262144로 값 설정

extern int read_and_chunk(int fd, char *fname);
extern int hash(char *buf1, char *buf2, int n);
