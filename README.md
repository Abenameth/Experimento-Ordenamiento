# Experimento-Ordenamiento
Act 1.1 - Ordenamiento

Metodología para las mediciones:
Para realizar la medición se generaron los 4 vectores de los tamaños requeridos con valores ya en orden ascendente. Se utilizó la librería random para poder generar los 30 valores a buscar de forma al azar con uniform_int_distribution. Se utilizó la librería chrono para medir el tiempo de búsqueda. Se inició a cronometrar el tiempo en la primera búsqueda y se detuvo al finalizar la última búsqueda, dividiendo el total entre 30 para sacar el promedio. Los valores de retorno de las funciones se acumularon en la variable temp con el fin de evitar que el compilador optimizara las llamadas y poder obtener mejores resultados.

Resultados:
============================================================================
Tamaño de Entrada | Busqueda Lineal | Busqueda Binaria | Busqueda Trinaria |
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
