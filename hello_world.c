 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>

 static int number;
 #define HW_STRING "Hello World\n"

 int main(int argc,char **argv) {

 	char *string;
	number = 27;

	string= 0x1770010;  // =malloc(strlen(HW_STRING) + 1);

	printf("String Virtual Address- %lX\n", (unsigned long) string);

	strcpy(string, HW_STRING);

	printf("%s %i\n", string, number);
	return 0;


				}
