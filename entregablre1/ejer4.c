#include <stdio.h>
#include <unistd.h>
#include <time.h>
#include<pthread.h>

void do_nothing(){
	usleep(2000000);//espera dos segundos
}
int main(){
	do_nothing();
	do_nothing();
	do_nothing();
	do_nothing();
	do_nothing();
	return 0;
}
