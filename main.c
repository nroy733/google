#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "hash.h"
#include "io.h"
#include "stack.h"
#include "main.h"


extern stack_t STACK;

int main(int argc, char *argv[]) {

	int iRC;
	int i;
	char buf[25];
//	char *str1, *token;
//	char *str2, *subtoken;
//	char *saveptr1;
//	char *saveptr2;
//	int j;
	
//	char **words;
//	int word_cnt;

	//printf("argc = %d\n",argc);
	iRC=EXIT_SUCCESS;

//	if (argc != 4) {
//		fprintf(stderr, "Usage: %s string delim subdelim\n",
//	if (argc != 3) {
//		fprintf(stderr, "Usage: %s string delim \n",
	if (argc != 2) {
		fprintf(stderr, "Usage: %s <file>\n", argv[0]);
		iRC=EXIT_FAILURE;
		exit(iRC);
	}


//	f("this",0);
//	f("this",0);
//	f("is",0);
//	f("a",0);
//	f("test",0);

//	for(i=0;i<26;i++) {
//		sprintf(buf,"%d",i);
//		push(&STACK,buf);
//	}


	ReadFile(argv[1]);

//	push(&STACK,"one");
//	push(&STACK,"two");
//	push(&STACK,"three");

//	printf("%s\n",pop(&STACK));
//	printf("%s\n",pop(&STACK));
//	printf("%s\n",pop(&STACK));
	while (stack_not_empty(&STACK)) {
		printf("main.c->%s",pop(&STACK));
	}
	
	exit(iRC);

}



