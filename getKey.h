// Ida Bagus Krishna Yoga Utama (1506716983)
// Nurian Satya Wardana (1506717071)

#include <stdio.h>

int getKey() {
	int i, j, temp;
	int keysLength = 0;
	char keys[32];
	
	// Meminta user untuk menulis key
	printf("\n\n Tulis key: ");
	scanf(" %[^\n]%*c", &keys);
	
	// Mencari berapa panjang key yang ditulis user
	while(keys[keysLength] != '\0') keysLength++;
	int lastIndex = keysLength - 1;
	
	// Melakukan bubble sort terhadap key, mengurutkan kode ASCII dari kecil ke besar
	for (i=0; i<lastIndex; i++) {
		for(j=lastIndex; j>i; j--) {
			if(keys[j] < keys[j-1]) {
				temp = keys[j];
				keys[j] = keys[j-1];
				keys[j-1] = temp;
			}
		}
	}
	
	// Ouput fungsi ini ialah kode ASCII dari median key
	return keys[keysLength/2];
}
