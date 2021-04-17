#!/bin/bash
#ejercicio uno del miniTP alumna :Sofia Alcaraz
function error(){
	echo "Error, no has ingresado ningun parametro"
}
if test $# -lt 1 #si no ingresa ningun parametro error
then
	error
fi

for nueva in $1
do
 	cd
	echo $nueva

	mkdir $nueva        #crea carpeta con nombre ingresado
	cd		#directorio raiz
	#se toma los .txt de usuario ,se busca las lineas que contengan  ".txt"
	#luego se envian esas lineas a el  txt.
	ls -Ral | grep .txt > $nueva/losTerminadosentxt.txt

	cd $nueva #se ingresa a el nuevo directorio
	date >>	losTerminadosentxt.txt #se copia la fecha  en el txt

	cat losTerminadosentxt.txt # se muestra el contenido del txt

done

