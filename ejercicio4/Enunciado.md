# Descripcion

Semana 1

Cada cuadrado de un tablero de ajedrez puede ser descrito por una combinación de una letra un número. Por ejemplo:  g 5, a7, etc.

El siguiente pseudocódigo describe el algoritmo para determinar si un cuadrado del tablero de ajedrez es de color blanco o negro, si se da como dato una letra y un número.

``` cpp

if the letter is an a, c, e or g
	if the number is odd
		color = "black"

	else
		color = "white"
else
	if the number is even
		color = "black"
	else
		color = "white"
``` 

Desarrolle un programa en C++ en que lea las coordenadas y el programa indique si corresponde a un cuadrado negro o blanco.