#include<stdio.h>
#include<string.h>
#include<math.h>

// 1. Kalkulator Dasar.
void kalkulatorDasar(){
	
	double angkaPertama;
	double angkaKedua;
	char operasi;
	
	double hasil;
	
	printf("\n");
	
	printf("Masukan angka pertama : ");
	scanf("%lf", &angkaPertama);
	getchar();
	
	printf("\n");
	
	printf("Masukan angka kedua : ");
	scanf("%lf", &angkaKedua);
	getchar();
	
	printf("\n");
	
	printf("SIMBOL OPERASI :\n");
	printf("+ -> untuk penjumlahan.\n");
	printf("- -> untuk pengurangan.\n");
	printf("x -> untuk perkalian.\n");
	printf(": -> untuk pembagian.\n");
	
	printf("\n");
	
	printf("Masukan tipe operasi : ");
	scanf("%c", &operasi);
	getchar();
	
	printf("\n");
	
	// Penjumlahan
	if(operasi == '+'){
		hasil = angkaPertama + angkaKedua;
		printf("Hasil penjumlahan tersebut adalah : %lf", hasil);
	}
	
	// Pengurangan
	else if(operasi == '-'){
		hasil = angkaPertama - angkaKedua;
		printf("Hasil pengurangan tersebut adalah : %lf", hasil);
	}
	
	// Perkalian
	else if(operasi == 'x'){
		hasil = angkaPertama * angkaKedua;
		printf("Hasil perkalian tersebut adalah : %lf", hasil);
	}
	
	// Pembagian
	else if(operasi == ':'){
		hasil = angkaPertama / angkaKedua;
		printf("Hasil pembagian tersebut adalah : %lf", hasil);
	}
	
	else{
		printf("ERROR, mohon masukan simbol operasi yang benar.");
	}
	
	printf("\n");
}

// 2. Kalkulator Angkat, Pangkat, dan Modulus.
void kalkulatorAkarPangkatModulus(){
	
	double angkaPertama;
	double angkaKedua;
	char operasi;
	
	double root;
	double hasil;
	
	printf("\n");
	
	printf("DAFTAR SIMBOL OPERASI :\n");
	printf("^ untuk Pangkat.\n@ untuk Akar.\n%% untuk Modulus.\n");
	
	printf("\n");
	
	printf("Masukan angka : ");
	scanf("%lf", &angkaPertama);
	getchar();
	
	printf("Masukan simbol operasi : ");
	scanf("%c", &operasi);
	getchar();
	
	printf("Masukan angka : ");
	scanf("%lf", &angkaKedua);
	getchar();
	
	// Pangkat
	if(operasi == '^'){
		hasil = pow(angkaPertama, angkaKedua);
		printf("\nHASIL = %.2lf", hasil);
	}
	// Akar
	else if(operasi == '@'){
		root = 1 / angkaKedua;
		hasil = pow(angkaPertama, root);
		printf("\nHASIL = %.2lf", hasil);
	}
	// Modulus
	else if(operasi == '%'){
		hasil = (int)angkaPertama % (int)angkaKedua;
		printf("\nHASIL = %d", hasil);
	}
	else{
		printf("Error! Mohon masukan simbol operasi yang benar.");
	}
	
	printf("\n");
}

// 3. Kalkulator Trigonometri.
void kalkulatorTrigonometri(){
	double angka;
	char sinCosTan[255];
	
	double hasil;
	
	printf("\n");
	
	printf("DAFTAR OPERASI :\n");
	printf("Ketik \'SIN\' untuk mencari nilai SIN dari suatu nilai derajat.\n");
	printf("Ketik \'COS\' untuk mencari nilai COS dari suatu nilai derajat.\n");
	printf("Ketik \'TAN\' untuk mencari nilai TAN dari suatu nilai derajat.\n");
	printf("Ketik \'COT\' untuk mencari nilai COT dari suatu nilai derajat.\n");
	printf("Ketik \'SEC\' untuk mencari nilai SEC dari suatu nilai derajat.\n");
	printf("Ketik \'COSEC\' untuk mencari nilai COSEC dari suatu nilai derajat.\n");
	
	printf("\n");
	
	printf("Pilih : ");
	scanf("%s", &sinCosTan);
	getchar();
	
	printf("Masukan nilai derajat-nya (angka): ");
	scanf("%lf", &angka);
	getchar();
	
	printf("\n");
	
	// SIN
	if(strcmpi(sinCosTan, "SIN") == 0){
		hasil = sin(angka);
		printf("Hasil dari SIN(%.0lf) = %.2lf", angka, hasil);
	}
	// COS
	else if(strcmpi(sinCosTan, "COS") == 0){
		hasil = cos(angka);
		printf("Hasil dari COS(%.0lf) = %.2lf", angka, hasil);
	}
	// TAN
	else if(strcmpi(sinCosTan, "TAN") == 0){
		hasil = tan(angka);
		printf("Hasil dari TAN(%.0lf) = %.2lf", angka, hasil);
	}
	// SEC
	else if(strcmpi(sinCosTan, "SEC") == 0){
		hasil = 1 / cos(angka);
		printf("Hasil dari SEC(%.0lf) = %.2lf", angka, hasil);
	}
	// COT
	else if(strcmpi(sinCosTan, "COT") == 0){
		hasil = 1 / tan(angka);
		printf("Hasil dari COT(%.0lf) = %.2lf", angka, hasil);
	}
	// COSEC
	else if(strcmpi(sinCosTan, "COSEC") == 0){
		hasil = 1 / sin(angka);
		printf("Hasil dari COSEC(%.0lf) = %.2lf", angka, hasil);
	}
	else{
		printf("Error! Mohon masukan operasi sesuai dengan pilihan yang tersedia.");
	}
	
	printf("\n");
	
}

// 4. Kalkulator Logaritma
void kalkulatorLogaritma(){
	
	double angka;
	int pilihan;
	double hasil;
	
	printf("\n");
	
	printf("Pilih jenis Logaritma :\n");
	printf("1. Logaritma base e ( Logaritma Alami )\n");
	printf("2. Logaritma base 10\n");
	
	printf("\n");
	
	printf("Ketik nomor 1 atau 2.\n");
	printf("Pilih : ");
	scanf("%d", &pilihan);
	getchar();
	
	printf("Masukan angka : ");
	scanf("%lf", &angka);
	
	printf("\n");
	
	// Logaritma Alami
	if(pilihan == 1){
		hasil = log(angka);
		printf("Log%.0lf dengan base e = %lf", angka, hasil);
	}
	// Log 10
	else if(pilihan == 2){
		hasil = log10(angka);
		printf("Log%.0lf dengan base 10 = %.lf", angka, hasil);
	}
	else{
		printf("ERROR! Mohon masukan angka sesuai pilihan yang tersedia.\n");
	}
	
	printf("\n");
}

// 5. Kalkulator Bunga.
void kalkulatorBunga(){

	double modalAwal;
	double bunga;
	double tahun;
	double hasil;
	
	printf("\n");
	
	printf("Masukan nilai modal awal : ");
	scanf("%lf", &modalAwal);
	
	printf("Masukan besar bunga : ");
	scanf("%lf%%", &bunga);
	
	printf("Masukan durasi (Tahun) : ");
	scanf("%lf", &tahun);
	
	hasil = modalAwal * pow((1+bunga/100), tahun);
	
	printf("Modal awal %.0lf\n", modalAwal);
	printf("Besar bunga %.2lf%%\n", bunga);
	printf("Dengan durasi %.2lf tahun\n", tahun);
	
	printf("\n");
		
	printf("Maka total nilai dari bunga = %.0lf\n", hasil - modalAwal); 
	printf("dan total Modal Awal + Bunga = %.0lf", hasil);
}

// 6. Kalkulator Untung Rugi
void kalkulatorUntungRugi(){
	int jumlahBarang;
	int hargaBeli;
	int hargaJual;
	
	int hasil;
	
	// hb * jb - hj * jb
	
	printf("Masukan harga beli : ");
	scanf("%d", &hargaBeli);
	
	printf("Masukan harga jual : ");
	scanf("%d", &hargaJual);
	
	printf("Masukan jumlah barang : ");
	scanf("%d", &jumlahBarang);
	
	hasil = (hargaJual * jumlahBarang) - (hargaBeli * jumlahBarang);
	
	if(hasil > 0){
		printf("Untung, total keuntungan = Rp%d", hasil);
	}
	else if(hasil < 0){
		printf("Rugi, total kerugian = Rp%d", hasil * -1);
	}
	else if(hasil == 0){
		printf("Tidak Untung dan Tidak Rugi");
	}
	else{
		printf("ERROR! Masukan data dengan benar.");
	}
	printf("\n");
}

// 7. Kalkulator Matrix
void kalkulatorMatrix(){
	
	int pilihanUser;
	int baris;
	int kolom;
	
	int i;
	int j;
	int matrix1[50][50];
	int matrix2[50][50];
	int hasilPenjumlahan[50][50];
	int hasilPengurangan[50][50];
	
	int baris1;
	int kolom1;
	
	int baris2;
	int kolom2;
	int hasilPerkalian[50][50];
	
	printf("\n");
	
	printf("Pilih operasi Matrix yang ingin kamu lakukan : \n");
	printf("1. Penjumlahan dua matrix\n");
	printf("2. Pengurangan dua matrix\n");
	printf("3. Perkalian dua matrix\n");
	
	printf("\n");
	
	printf("Pilih (ketik 1 / 2 / 3) : ");
	scanf("%d", &pilihanUser);	
	
	// Penjumlahan matrix
	if(pilihanUser == 1){
		
		// Minta user masukan jumlah baris & kolom pada matrix yang mau dihitung.
		printf("Masukan jumlah baris : \n");
		scanf("%d", &baris);
		
		printf("Masukan jumlah Kolom : \n");
		scanf("%d", &kolom);
		
		// elemen matrix pertama.
		printf("Masukan angka-angka untuk matrix pertama : \n");
		for(i=0; i<baris; i++){
			for(j=0; j<kolom; j++){
				scanf("%d", &matrix1[i][j]);
			}
		}
		
		// elemen matrix kedua.
		printf("Masukan angka-angka untuk matrix kedua : \n");
		for(i=0; i<baris; i++){
			for(j=0; j<kolom; j++){
				scanf("%d", &matrix2[i][j]);
			}
		}
		
		// tunjukan hasil penjumlahan kedua matrix.
		printf("Hasil Penjumlahan kedua matrix tersebut adalah : \n");
		for(i=0; i<baris; i++){
			for(j=0; j<kolom; j++){
				hasilPenjumlahan[i][j] = matrix1[i][j]+ matrix2[i][j];
				printf("%d\t", hasilPenjumlahan[i][j]);
			}
			printf("\n");
		}

	}
	// Pengurangan matrix
	else if(pilihanUser == 2){
		
		// Minta user masukan jumlah baris & kolom pada matrix yang mau dihitung.
		printf("Masukan jumlah baris : \n");
		scanf("%d", &baris);
		
		printf("Masukan jumlah Kolom : \n");
		scanf("%d", &kolom);
		
		// elemen matrix pertama.
		printf("Masukan angka-angka untuk matrix pertama : \n");
		for(i=0; i<baris; i++){
			for(j=0; j<kolom; j++){
				scanf("%d", &matrix1[i][j]);
			}
		}
		
		// elemen matrix kedua.
		printf("Masukan angka-angka untuk matrix kedua : \n");
		for(i=0; i<baris; i++){
			for(j=0; j<kolom; j++){
				scanf("%d", &matrix2[i][j]);
			}
		}
		
		// tunjukan hasil pengurangan kedua matrix.
		printf("Hasil Pengurangan kedua matrix tersebut adalah : \n");
		for(i=0; i<baris; i++){
			for(j=0; j<kolom; j++){
				hasilPengurangan[i][j] = matrix1[i][j]- matrix2[i][j];
				printf("%d\t", hasilPengurangan[i][j]);
			}
			printf("\n");
		}
		
	}
	// Perkalian matrix
	else if(pilihanUser == 3){
		
		int hasil = 0;
		int k;
		
		// Minta user masukan jumlah baris & kolom pada matrix pertama yang mau dihitung.
		printf("Matrix Pertama\n");
		
		printf("Masukan jumlah baris : \n");
		scanf("%d", &baris1);
		
		printf("Masukan jumlah Kolom : \n");
		scanf("%d", &kolom1);
		
		// elemen matrix pertama.
		printf("Masukan angka-angka untuk matrix pertama : \n");
		for(i=0; i<baris1; i++){
			for(j=0; j<kolom1; j++){
				scanf("%d", &matrix1[i][j]);
			}
		}
		
		printf("Matrix Kedua\n");
		
		// Minta user masukan jumlah baris & kolom pada matrix kedua yang mau dihitung.
		printf("Masukan jumlah baris : \n");
		scanf("%d", &baris2);
		
		printf("Masukan jumlah Kolom : \n");
		scanf("%d", &kolom2);
		
		if (kolom1 != baris2) {
			printf("Perkalian tidak mungkin untuk dilakukan.\n");
		}
    	else{
    		// elemen matrix kedua.
			printf("Masukan angka-angka untuk matrix kedua : \n");
			for(i=0;i<baris2; i++){
				for(j=0; j<kolom2; j++){
					scanf("%d", &matrix2[i][j]);
				}
			}	
			
			// Perkalian antar matrix.
			for(i=0;i<baris1; i++) {
      			for(j=0;j<kolom2; j++) {
        			for(k=0;k<baris2; k++) {
          				hasil = hasil + matrix1[i][k]*matrix2[k][j];
        			}
 
        			hasilPerkalian[i][j] = hasil;
        			hasil = 0;
      			}
   	 		}
   	 		
   	 		printf("Hasil perkalian kedua matrix tersebut adalah : \n");
 			
			// print matrix hasil perkalian
    		for(i=0;i<baris1; i++) {
      			for(j = 0;j < kolom2; j++)
        			printf("%d\t", hasilPerkalian[i][j]);
      				printf("\n");
    		}
		}
			
	}
	else{
		printf("ERROR! Mohon masukan angka sesuai yang tersedia pada menu.");
	}
	
	printf("\n");
}


int main(){
	
	int tipeKalkulator;
	
	printf("Selamat Datang di aplikasi Kalkulator!\n");
	
	printf("\n");
	
	printf("Pilih Tipe Kalkulator yang ingin kamu gunakan :\n");
	printf("\n");
	
	printf("1. Kalkulator Dasar\n");
	printf("2. Kalkulator Akar, Pangkat, dan Modulus\n");
	printf("3. Kalkulator Trigonometri\n");
	printf("4. Kalkulator Logaritma\n");
	printf("5. Kalkulator Bunga\n");
	printf("6. Kalkulator Untung Rugi\n");
	printf("7. Kalkulator Matrix\n");
	
	printf("\n");
	
	printf("*Ketik 1/2/3/4/5/6/7*\n");
	
	printf("\n");
	
	printf("Pilih : ");
	scanf("%d", &tipeKalkulator);
	
	if(tipeKalkulator == 1) {
		printf("\n--KALKULATOR DASAR--\n");
		kalkulatorDasar();
	}
	else if(tipeKalkulator == 2){
		printf("\n--KALKULATOR AKAR, PANGKAT, dan MODULUS--\n");
		kalkulatorAkarPangkatModulus();
	}
	else if(tipeKalkulator == 3){
		printf("\n--KALKULATOR TRIGONOMETRI--\n");
		kalkulatorTrigonometri();
	}
	else if(tipeKalkulator == 4){
		printf("\n--KALKULATOR LOGARITMA--\n");
		kalkulatorLogaritma();
	}
	else if(tipeKalkulator == 5){
		printf("\n--KALKULATOR BUNGA--\n");
		kalkulatorBunga();
	}
	else if(tipeKalkulator == 6){
		printf("\n--KALKULATOR UNTUNG RUGI--\n");
		kalkulatorUntungRugi();
	}
	else if(tipeKalkulator == 7){
		printf("\n--Kalkulator Matrix--\n");
		kalkulatorMatrix();
	}
	else{
		printf("\nERROR! Mohon masukan angka sesuai pilihan yang tersedia.\n");
	}
	
	return 0;
}


