// Ida Bagus Krishna Yoga Utama (1506716983)
// Nurian Satya Wardana (1506717071)

#include <stdio.h>

void decrypt(int maxSize){
	int i = 0, length = 0;
	char fname[200], isiFile[10000];
	
	printf(" Tulis nama file: ");
	scanf("%s", &fname);
	
	FILE *fp;
	fp = fopen(fname, "r");
	
	if(fp == NULL){
		printf(" File tidak ditemukan.");
		sleep(1);
		mainMenu();
	}
	
	for(length = 0; length < maxSize; length++){
		fscanf(fp, "%c", &isiFile[length]);
		if (isiFile[length] == '\0') break;
	}
	
	printf(" ");
	for(i = 0; i < length; i++){
		printf("%c", isiFile[i]);	
	}
	
	fclose(fp);
	
	FILE *ofp;
	ofp = fopen("decrypted.txt","w");
	
	if(fp == NULL){
		printf(" Failed to open.");
		sleep(1);
		mainMenu();
	}
	
	int key = getKey();
	int decrypted[length];
	
	printf("\n Data yang telah terdekripsi adalah: \n ");
	for(i = 0; i < length; i++){
		decrypted[i] = isiFile[i] + (100-(key+i)); 
		printf("%c", decrypted[i]);
		fprintf(ofp, "%c", decrypted[i]);
	}
	
	fclose(ofp);
	
	printf("\n\n Data terdekripsi telah ditulis ke decrypted.txt\n");
}
