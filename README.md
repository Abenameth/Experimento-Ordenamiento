# Experimento-Ordenamiento
Act 1.1 - Ordenamiento

Metodología para las mediciones:

Para realizar la medición se generaron los 4 vectores de los tamaños requeridos con valores ya en orden ascendente. Se utilizó la librería random para poder generar los 30 valores a buscar de forma al azar con uniform_int_distribution. Se utilizó la librería chrono para medir el tiempo de búsqueda. Se inició a cronometrar el tiempo en la primera búsqueda y se detuvo al finalizar la última búsqueda, dividiendo el total entre 30 para sacar el promedio. Los valores de retorno de las funciones se acumularon en la variable temp con el fin de evitar que el compilador optimizara las llamadas y poder obtener mejores resultados.

Resultados:

Tamaño de Entrada | Búsqueda Lineal | Búsqueda Binaria | Búsqueda Trinaria |
----------------------------------------------------------------------------
      10^5        |     188197 ns   |      300 ns      |     303.333 ns    |
----------------------------------------------------------------------------
      10^6        |  1.53261e+06 ns |      520 ns      |     506.667 ns    |
----------------------------------------------------------------------------
      10^7        |  1.39887e+07 ns |     876.667 ns   |     736.667 ns    |
----------------------------------------------------------------------------
      10^8        |  1.24931e+08 ns |      1410 ns     |     966.667 ns    |
----------------------------------------------------------------------------

Análisis:

Como se puede observar en los resultados, el algoritmo que tuvo un peor desempeño fue la búsqueda lineal. Este resultado era de esperarse considerando la diferencia en la complejidad temporal entre los 3 algoritmos, siendo la búsqueda lineal el único con una complejidad O(n). A pesar de haber tenido un pobre desempeño en estos experimentos, esto no significa que los otros dos algoritmos sean mejores que la búsqueda lineal en todos los contextos, ya que este es el único de los 3 que funciona de forma correcta con conjuntos no ordenados.

En el caso de la búsqueda binaria frente a la búsqueda trinaria, las cosas se complican un poco. Si nos guiamos únicamente por la complejidad temporal, nos daremos cuenta de que ambos algoritmos tienen la misma complejidad asintótica, por lo que esperaríamos resultados muy similares. Sin embargo, en los resultados experimentales podemos observar que la búsqueda trinaria fue más rápida que la binaria en la mayoría de las pruebas, con la diferencia temporal creciendo junto al tamaño del conjunto. Esta diferencia se debe principalmente a que la búsqueda trinaria, al dividir el conjunto en más partes con cada iteración, ocupa menos iteraciones para recorrer todo el conjunto, lo cual reduce el número total de accesos a nuevas posiciones de memoria del conjunto, lo cual es una ventaja que se va a notando mas conforme el tamaño del conjunto va creciendo.

¿Esto significa que la búsqueda trinaria es mejor que la búsqueda binaria? No. La búsqueda trinaria no es objetivamente mejor que la búsqueda binaria. Como se mencionó anteriormente, ambos algoritmos cuentan con la misma complejidad asintótica de O(log n), por lo que realmente no podemos decir que uno es definitivamente mejor que el otro.
