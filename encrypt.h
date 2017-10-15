// Ida Bagus Krishna Yoga Utama (1506716983)
// Nurian Satya Wardana (1506717071)

#include <stdio.h>

void encrypt(int maxSize){
	int i = 0, length = 0;
	char fname[200], isiFile[10000];
	
	// User agar menulis nama file yang nantinya akan dienkripsi
	printf(" Tulis nama file: ");
	scanf("%s", &fname);
	
	// Menyiapkan variabel untuk membuka file
	FILE *fp;
	fp = fopen(fname, "r");
	
	// Jika file yang dipilih tidak dapat ditemukan oleh program
	if(fp == NULL){
		printf(" File tidak ditemukan.");
		sleep(1);
		mainMenu();
	}
	
	// Menaruh isi file ke array isiFile[] sekaligus mengetahui panjangnya
	for(length = 0; length < maxSize; length++){
		fscanf(fp, "%c", &isiFile[length]);
		if (isiFile[length] == '\0') break;
	}
	
	// Mencetak isi file
	printf(" ");
	for(i = 0; i < length; i++){
		printf("%c", isiFile[i]);	
	}
	
	fclose(fp);
	
	// Menyiapkan variabel untuk mengakses file tempat data terenkripsi disimpan
	FILE *ofp;
	ofp = fopen("encrypted.txt","w");
	
	// Jika file tidak dapat diakses
	if(fp == NULL){
		printf(" Failed to open.");
		sleep(1);
		mainMenu();
	}
	
	// Memanggil fungsi getKey() lalu meng-assign hasil output dari fungsi tersebut ke variabel key
	int key = getKey();
	
	// Deklarasi array untuk menyimpan hasil data terenkripsi
	int encrypted[length];
	
	// Mengenkripsi data, menampilkannya, dan menulisnya ke file.
	// Metode enkripsi ialah "encrypted = representasi ASCII - (100 - (key + urutan karakter))"
	// Apabila metode enkripsi ingin diubah, maka metode dekripsi juga harus diubah menyesuaikannya
	printf("\n Data yang telah terenkripsi adalah: \n ");
	for(i = 0; i < length; i++){
		encrypted[i] = isiFile[i] - (100-(key+i)); 
		printf("%c", encrypted[i]);
		fprintf(ofp, "%c", encrypted[i]);
	}
	
	fclose(ofp);
	
	printf("\n\n Data terinkripsi telah ditulis ke encrypted.txt\n");
}
