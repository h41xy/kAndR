#include <stdio.h>

#define MAXLENGTH 101

main() {
	printf("Wortlaenge max = 100\n");
	int c, i;
	int wlength;
	int words[MAXLENGTH];

	wlength = 0;
	for (i = 0 ; i < MAXLENGTH ; i++)
		words[i] = 0;

	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t') {
			if (wlength > 0)
				words[(wlength-1)]++;
			wlength = -1;
		}
		wlength++;
	}

	printf("Wordlength:\n");
	for (i = 0 ; i < MAXLENGTH ; i++) {
		printf("%d\t", words[i]);
		if ((i + 1) % 10 == 0)
			printf("\n");
	} 
}
