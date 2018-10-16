// test.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


//memcpy.c
#include <stdio.h>
#include <string.h>

int _tmain(int argc, _TCHAR* argv[])
{
	char* s = "GoldenGlobalView";
	char* s1 = "2sss";
	char d[160];
	//clrscr();
	memcpy(d, s, (strlen(s)));
	memcpy(d + strlen(s), s1, (strlen(s1)));
	printf("%d", strlen(d));
	printf("%s",d);
	getchar();
	return 0;
}

