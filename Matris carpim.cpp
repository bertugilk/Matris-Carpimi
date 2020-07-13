#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(void) {
	yeniden:
	system("color A");
	int satir1,sutun1,satir2,sutun2,toplam=0,i,j;
	char e,E,h,H,tercih;
	x:
	printf("Birinci Matrisin Satir Sayisini Giriniz: "); scanf("%d",&satir1); 
	printf("Birinci Matrisin Sutun Sayisini Giriniz: "); scanf("%d",&sutun1); printf("\n");
	printf("Ikinci Matrisin Satir Sayisini Giriniz: "); scanf("%d",&satir2); 
	printf("Ikinci Matrisin Sutun Sayisini Giriniz: "); scanf("%d",&sutun2); printf("\n");
	if(sutun1!=satir2) {
		printf("Matrislerde satir-sutun uyumu yok tekrar giriniz!\n\n");
		goto x;
	}
	else{
	
	int matris1[satir1][sutun1],matris2[satir2][sutun2],carpim[satir1][sutun2];
	printf("\n\n---------------------------------------------------------------------------\n\n");
	for(i=0;i<satir1;i++) {
		for(j=0;j<sutun1;j++) {
			printf("Birinci Matrisin %d.satir, %d.sutun elemani'ni giriniz-----> ",i+1,j+1); scanf("%d",&matris1[i][j]);
		}
	}
	
	printf("\n\n---------------------------------------------------------------------------\n\n");
	
	for(i=0;i<satir2;i++) {
		for(j=0;j<sutun2;j++) {
			printf("Ikinci Matrisin %d.satir, %d.sutun elemani'ni giriniz-----> ",i+1,j+1); scanf("%d",&matris2[i][j]);
		}
	}
	printf("\n\n-------------------------- BIRINCI MATRIS ---------------------------------\n\n");
	for(i=0;i<satir1;i++) {
		for(j=0;j<sutun1;j++) {
			printf("%d ",matris1[i][j]);
		}
	printf("\n");
	}
	
	printf("\n\n-------------------------- IKINCI MATRIS ---------------------------------\n\n");
	for(i=0;i<satir2;i++) {
		for(j=0;j<sutun2;j++) {
			printf("%d ",matris2[i][j]);
		}
	printf("\n");
	}
	printf("\n\n---------------------MATRIS CARPIMI --------------------------------------\n\n");
	
	for(i=0;i<satir1;i++) {
		for(j=0;j<sutun2;j++) {
			for(int k=0;k<sutun1;k++) {
				toplam += matris1[i][k] * matris2[k][j]; 
			}
		carpim[i][j]=toplam;
		toplam=0;
		printf("%d ",carpim[i][j]);
		}
	printf("\n\n");
	}
	printf("-----------------------------------------------------------------------------\n\n");
	}
	printf("\n");
	printf("Yeni bir carpim yapmak istiyor musunuz ?(E/H)\n"); scanf("%s",&tercih); printf("\n");
	if(tercih=='E' || tercih=='e') {
		system("CLS");
		goto yeniden;
	}
	if(tercih=='H' || tercih=='h'){
		system("CLS");
		goto y;
		y:
		printf("CIKMAK ICIN BIR TUSA BASIN...\n");	
		return 0;
	}	
	getch();
	return 0;
}
