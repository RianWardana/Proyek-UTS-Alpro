#include <stdio.h>

void encrypt(int maxSize){
	int encrypted[maxSize], i=0, j, keys;
	int length;
	char fname[200], teks[10000];
	
	printf(" Tulis nama file: ");
	scanf("%s", &fname);
		
	FILE *fp;
	fp = fopen(fname,"r");
	
	if(fp == NULL){
		printf(" File tidak ditemukan.");
		sleep(1);
		mainMenu();
	}
	
	// menaruh isi file ke array sekaligus mengetahui panjangnya
	for(length = 0; length < maxSize; length++){
		fscanf(fp, "%c", &teks[length]);
		if (teks[length] == '\0') break;
	}
	
	printf(" ");
	for(i=0; i<length; i++){
		printf("%c", teks[i]);	
	}
		
	fclose(fp);
		
	keys = getKey();
	
	i = 0;
	while(teks[i] != '\0'){
		encrypted[i]=teks[i]; 
		i++;
	}
	
	for(j=0; j<i; j++){
		encrypted[j] -= (100-(keys+j));
	}
	
	printf("\n Data yang telah terenkripsi adalah: \n ");
	for(j=0;j<i;j++){
		printf("%c", encrypted[j]);
	}
	printf("\n\n Data terinkripsi telah ditulis ke encrypted.txt\n");
	
	// write array to encrypted.txt
	FILE *ofp;
	ofp = fopen("encrypted.txt","w");
	
	if(fp == NULL){
		printf(" Failed to open");
		sleep(1);
		mainMenu();
	}
	
	for(i=0; i<length; i++){
		fprintf(ofp,"%c",encrypted[i]);
	}
	
	fclose(ofp);
}
