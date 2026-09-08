# Experimento-Ordenamiento
Act 1.1 - Ordenamiento

Metodología para las mediciones:
Para realizar la medición se generaron los 4 vectores de los tamaños requeridos con valores ya en orden ascendente. Se utilizó la librería random para poder generar los 30 valores a buscar de forma al azar con uniform_int_distribution. Se utilizó la librería chrono para medir el tiempo de búsqueda. Se inició a cronometrar el tiempo en la primera búsqueda y se detuvo al finalizar la última búsqueda, dividiendo el total entre 30 para sacar el promedio. Los valores de retorno de las funciones se acumularon en la variable temp con el fin de evitar que el compilador optimizara las llamadas y poder obtener mejores resultados.

Resultados:
