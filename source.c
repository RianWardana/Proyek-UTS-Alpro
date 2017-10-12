// Ida Bagus Krishna Yoga Utama (1506716983)
// Nurian Satya Wardana (1506717071)

#include <stdio.h>
#include "header.h"
#include "encrypt.h"
#include "decrypt.h"
#include "getKey.h"

int main(){	
	int pilih;

	printHeader();
	
	printf("\n 1. Masuk ke Menu Encrypt-Decrypt \n"
		   " 2. Petunjuk penggunaan program \n"
		   " 3. Exit \n"
		   "\n"
		   " Masukkan pilihan Anda (1/2/3): ");
	scanf("%d", &pilih);
	
	switch(pilih){
		case 1 :
			mainMenu();
			break;
		case 2 :
			helpMenu();
			break;
		case 3 :
			return 0;
			break;
	}
	
	return 0;
}
