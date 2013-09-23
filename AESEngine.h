// AES Encryption in C

#ifndef _AES_SC_H_
#define _AES_SC_H_
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void AESEngineInit(int encryption, char* AESKey);
void AESEngineDeinit();
int AESEngineGetBlockSize();
void AESEngineProcess(char* in, int inLength, char** out, int* outLength);

#endif