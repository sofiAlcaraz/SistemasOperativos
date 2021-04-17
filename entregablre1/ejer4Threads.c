#include <stdio.h>
#include <unistd.h>
#include <time.h>
#include<pthread.h>
//punto 4 del miniTp alumna:Alcaraz Sofia COM:01

void *do_nothing(void *arg){
	usleep(2000000);//espera dos segundos
}
int main(){
	//inicializacion
	int hilo1, hilo2, hilo3, hilo4, hilo5;
	pthread_t thd1, thd2, thd3, thd4, thd5;
	//creacion de hilos
	hilo1 = pthread_create(&thd1,NULL,do_nothing,NULL);
	hilo2 = pthread_create(&thd2,NULL,do_nothing,NULL);
	hilo3 = pthread_create(&thd3,NULL,do_nothing,NULL);
	hilo4 = pthread_create(&thd4,NULL,do_nothing,NULL);
	hilo5 = pthread_create(&thd5,NULL,do_nothing,NULL);

	/*do_nothing();
	do_nothing();
	do_nothing();
	do_nothing();
	do_nothing();*/

	//compruebo que ninguno de error
	if(0!=hilo1 || 0!=hilo2 || 0!=hilo3 || 0!=hilo4 || 0!=hilo5){
		return -1;
	}
	//para que un hilo espero por otro
	pthread_join(thd1,NULL);
	pthread_join(thd2,NULL);
	pthread_join(thd3,NULL);
	pthread_join(thd4,NULL);
	pthread_join(thd5,NULL);
	//para que el main espere a que ejecuten todos los hilos
	pthread_exit(NULL);
	return 0;
}
