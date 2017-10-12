#include <stdio.h>

int getKey() {
	int i, j, temp;
	int keysLength = 0;
	char keys[32];
	
	printf("\n\n Tulis key: ");
	scanf(" %[^\n]%*c", &keys);
	
	while(keys[keysLength] != '\0') keysLength++;
	int lastIndex = keysLength - 1;
	
	for (i=0; i<lastIndex; i++) {
		for(j=lastIndex; j>i; j--) {
			if(keys[j] < keys[j-1]) {
				temp = keys[j];
				keys[j] = keys[j-1];
				keys[j-1] = temp;
			}
		}
	}
	
	return keys[keysLength/2];
}
