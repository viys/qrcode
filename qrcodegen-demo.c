/* 
 * QR Code generator demo (C)
 * 
 * Run this command-line program with no arguments. The program
 * computes a demonstration QR Codes and print it to the console.
 * 
 * Copyright (c) Project Nayuki. (MIT License)
 * https://www.nayuki.io/page/qr-code-generator-library
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy of
 * this software and associated documentation files (the "Software"), to deal in
 * the Software without restriction, including without limitation the rights to
 * use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
 * the Software, and to permit persons to whom the Software is furnished to do so,
 * subject to the following conditions:
 * - The above copyright notice and this permission notice shall be included in
 *   all copies or substantial portions of the Software.
 * - The Software is provided "as is", without warranty of any kind, express or
 *   implied, including but not limited to the warranties of merchantability,
 *   fitness for a particular purpose and noninfringement. In no event shall the
 *   authors or copyright holders be liable for any claim, damages or other
 *   liability, whether in an action of contract, tort or otherwise, arising from,
 *   out of or in connection with the Software or the use or other dealings in the
 *   Software.
 */

#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "qrcodegen.h"

/*载入自己的pritnf函数*/
QRCode_API MyQRCode_API = {
	.qr_printf = printf,
};

char buff[100]={0};

// The main application program.
int main(void) {

	printf("QRCode developers:viys\r\n");
	printf("Please enter the string to be converted\r\n");
	scanf("%s",buff);
	doBasic((const char*)buff);
	return EXIT_SUCCESS;
}
