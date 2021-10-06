#include <stdio.h>
#include <string.h>
#define MAXLINE 80
#define SUCCESS 0

int main(void) {
	char line[MAXLINE] = "Hello, World!";

	printf("%s\n",line);

	for (int i=0;i<MAXLINE;i++) {
		if (line[i] != '\0')
			printf("%c\n",line[i]);
	}

/*	char line[MAXLINE];

	printf("Please enter your text: ");
	fgets(line, sizeof(line), stdin);

	printf("You typed %s\n", line);

	float f;
	sscanf(line,"%f",&f);

	printf("%0.2f\n",f);
	return(SUCCESS);
*/
}
