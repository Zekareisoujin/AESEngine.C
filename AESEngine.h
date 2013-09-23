// AES Encryption in C

#ifndef _AES_SC_H_
#define _AES_SC_H_
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void init(int encryption, char* AESKey);
void deinit();
int getBlockSize();
void encrypt(char* in, int inLength, char** out, int* outLength);

#endif