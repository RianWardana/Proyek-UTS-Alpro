// Ida Bagus Krishna Yoga Utama (1506716983)
// Nurian Satya Wardana (1506717071)

#include <stdio.h>

void printHeader();
int mainMenu();
int helpMenu();



int mainMenu(){
	int size=1000;
	char key,rpt,pilih;
	char arr[size];
	
	do {
		printHeader();
				
		printf("\n Menu Encrypt-Decrypt");
		printf("\n 1. Enkripsi");
		printf("\n 2. Dekripsi");
		printf("\n 3. Kembali ke Main Menu");
		printf("\n 4. Exit");
		printf("\n");
		printf("\n Masukkan pilihan anda (1/2/3/4): ");
		scanf(" %c", &pilih);
			
		switch(pilih){
			case '1' :
				printHeader();
				printf("\n ENKRIPSI\n");
				encrypt(size);
				break;
			case '2' :
				printHeader();
				printf("\n DEKRIPSI\n");
				decrypt(size);
				break;
			case '3' :
				main();
				break;
			case '4' :
				return 0;
				break;
			default :
				printf(" ERROR - Masukkan input yang sesuai!\n");
				break;
		}
		
		printf("\n Apakah ingin memasukkan kata lagi? "
			   "\n Pilih (y) untuk kembali ke awal"
			   "\n Pilih (n) untuk keluar dari program"
			   "\n Pilihan anda (y/n) : ");
		scanf(" %c", &rpt);
	} while(rpt == 'y');
}



void printHeader(){
	system("mode 80");
	system("color F0");
	system("cls");
		
	printf("########################################################################\n"
		   "#                ENIGMOO - Word Encryption-Decryption                  #\n"	
		   "#                                Oleh :                                #\n"
		   "#              1. Ida Bagus Krishna Yoga Utama - 1506716983            #\n"
           "#                 2. Nurian Satya Wardana - 1506717071                 #\n"
	       "########################################################################\n");	   
}



int helpMenu(){ 
	char rpt,pilih;
	
	do{
	
		system("mode 80");
		system("color F0");
		system("cls");
		
		printf("########################################################################\n"
			   "#                ENIGMOO - Word Encryption-Decryption                  #\n"	
			   "#                                Oleh :                                #\n"
			   "#              1. Ida Bagus Krishna Yoga Utama - 1506716983            #\n"
	           "#                 2. Nurian Satya Wardana - 1506717071                 #\n"
		       "########################################################################\n"
			   "# HELP MENU - PETUNJUK PENGOPERASIAN                                   #\n"
			   "# 1. Masuk ke Menu Encrypt-Decrypt                                     #\n"
			   "# 2. Tulis pilihan Anda, masukkan 1 untuk enkripsi,                    #\n"
			   "#    masukkan 2 untuk dekripsi                                         #\n"
			   "# 3. Tulis nama file yang akan dienkripsi atau didekripsi              #\n"
			   "# 4. Tulis key pilihan Anda                                            #\n"
			   "# 5. Hasil enkripsi akan disimpan ke dalam file encrypted.txt,         #\n"
			   "#    Hasil dekripsi akan disimpan ke dalam file decrypted.txt          #\n"
			   "# 5. Untuk informasi lebih lanjut hubungi: Krishna (ibkyu@live.com),   #\n"
			   "#    Rian (rianwardana@live.com) \n\n"
			   "# Anda ingin kemana?                                                   #\n"
			   "# 1. Main Menu                                                         #\n"
			   "# 2. Menu Encrypt-Decrypt                                              #\n"
			   "# 3. Exit                                                              #\n"
			   "Masukkan pilihan anda(1/2/3): ");
		scanf(" %c", &pilih);
		
		switch(pilih){
			case '1' :
				main();
				break;
			case '2' :
				mainMenu();
				break;
			case '3' :
				return 0;
				break;
			default :
				printf(" ERROR - Masukkan input yang sesuai!\n");
				break;
		}
		
		printf("\n Apakah ingin memasukkan kata lagi? "
			   "\n Pilih (y) untuk kembali ke awal"
			   "\n Pilih (n) untuk keluar dari program"
			   "\n Pilihan anda (y/n) : ");
		scanf(" %c", &rpt);
	}while(rpt == 'y');
	
	return 0;
}
