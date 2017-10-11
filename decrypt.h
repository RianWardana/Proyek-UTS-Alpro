#include <stdio.h>

void decrypt(int size){
	int decrypted[size], i=0, j, keys;
	char fname[200],teks[10000];
	
	printf(" Tulis nama file: ");
	scanf("%s", &fname);
		
	FILE *fp;
	fp = fopen(fname,"r");
	
	if(fp == NULL){
		printf(" Failed to open");
		sleep(1);
		mainMenu();
	}
		
	for(i=0;i<size;i++){
		fscanf(fp,"%c",&teks[i]);
	}
	
	printf(" ");
	for(i=0;i<size;i++){
		printf("%c",teks[i]);	
	}
		
	fclose(fp);
	
	char arrKey[5];
	
	printf("\n\n Tulis key: ");
	scanf(" %[^\n]%*c", arrKey);
			
	int maxKeyNumber = 0;
	for (i = 0; i < 5; i++) {
		if (arrKey[i] > maxKeyNumber) maxKeyNumber = arrKey[i];
	}
			
	keys = maxKeyNumber;

	i = 0;
	while(teks[i]!='\0'){
		decrypted[i]=teks[i]; 
		i++;
	}
	
	for(j=0;j<i;j++){
		decrypted[j] += (100-(keys+j));
	}

	printf("\n Data yang telah terdekripsi adalah: \n ");
	for(j=0;j<i;j++){
		printf("%c",decrypted[j]);
	}
	printf("\n\n Data terdekripsi telah ditulis ke decrypted.txt\n");
	
	//write array to decrypted.txt
	FILE *ofp;
	ofp = fopen("decrypted.txt","w");
	
	if(fp == NULL){
		printf(" Failed to open");
		sleep(1);
		mainMenu();
	}
	
	for(i=0;i<j;i++){
		fprintf(ofp,"%c",decrypted[i]);
	}
	
	fclose(ofp);
	
}
