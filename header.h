#include <stdio.h>

void printHeader();
int mainMenu();
int helpMenu();



int mainMenu(){
	int size=1000, pilih;
	char key,rpt;
	char arr[size];
	
	do{
		printHeader();
				
		printf("\n Menu");
		printf("\n 1. Enkripsi");
		printf("\n 2. Dekripsi");
		printf("\n 3. Exit");
		printf("\n");
		printf("\n Masukkan pilihan anda (1/2/3): ");
		scanf("%d", &pilih);
			
		switch(pilih){
			case 1 :
				printHeader();
				printf("\n ENKRIPSI\n");
				encrypt(size);
				break;
			case 2 :
				printHeader();
				printf("\n DEKRIPSI\n");
				decrypt(size);
				break;
			case 3 :
				return 0;
				break;
			default :
				printf("ERROR");
				break;
		}
		
		printf("\n Apakah ingin memasukkan kata lagi (y/n)?");
		scanf(" %c", &rpt);
	} while(rpt == 'y');
}



void printHeader(){
	system("mode 80");
	system("color F0");
	system("cls");
		
	printf("########################################################################\n"
		   "#                  ENIGMOO - Word Encoder and Decoder                  #\n"	
		   "#                                Oleh :                                #\n"
		   "#              1. Ida Bagus Krishna Yoga Utama - 1506716983            #\n"
           "#                 2. Nurian Satya Wardana - 1506717071                 #\n"
	       "########################################################################\n");	   
}



int helpMenu(){
	int pilih;
	
	system("mode 80");
	system("color F0");
	system("cls");
	
	printf("########################################################################\n"
		   "#                  ENIGMOO - Word Encoder and Decoder                  #\n"	
		   "#                                Oleh :                                #\n"
		   "#              1. Ida Bagus Krishna Yoga Utama - 1506716983            #\n"
           "#                 2. Nurian Satya Wardana - 1506717071                 #\n"
	       "########################################################################\n"
		   "# HELP MENU - PETUNJUK PENGOPERASIAN                                   #\n"
		   "# 1. Masuk ke Main Program                                             #\n"
		   "# 2. Tulis kata yang akan dienkripsi (dengan maks. 1000 karakter)      #\n"
		   "# 3. Tulis key pilihan Anda                                            #\n"
		   "# 4. Tulis pilihan Anda, masukkan 1 untuk enkripsi,                    #\n"
		   "#    masukkan 2 untuk dekripsi                                         #\n"
		   "# 5. Untuk informasi lebih lanjut hubungi: Krishna (ibkyu@live.com),   #\n"
		   "#    Rian (rianwardana@live.com) \n\n"
		   "# Anda ingin kemana?                                                   #\n"
		   "# 1. Main Menu                                                         #\n"
		   "# 2. Menu EncryptDecrypt                                               #\n"
		   "# 3. Exit                                                              #\n"
		   "Masukkan pilihan anda(1/2/3): ");
	scanf("%d", &pilih);
	
	switch(pilih){
		case 1 :
			main();
			break;
		case 2 :
			mainMenu();
			break;
		case 3 :
			return 0;
			break;
	}
}
