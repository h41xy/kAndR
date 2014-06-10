#include <stdio.h>

#define CHARS 26

main() {
	int c, i, nonchar;
	int charcount[CHARS];

	nonchar = 0;

	for (i = 0 ; i < CHARS ; i++)
		charcount[i] = 0;

	while ((c = getchar()) != EOF) {
		if (c >= 'A' && c <= 'Z') {
			charcount[(c+32)-'a']++;
		} else if (c >= 'a' && c <= 'z') {
			charcount[c-'a']++;	
		} else {
			nonchar++;
		}
	}

	for (i = 0 ; i < CHARS ; i++) {
		printf("%c:", (i+97));
		printf("%d\t", charcount[i]);
		if ((i+1) % 10 == 0)
			printf("\n");
	}
	printf("Nonchar(s): %d\n", nonchar);

} 
