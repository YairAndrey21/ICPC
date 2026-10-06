# Shuffling Robot

## Descripción del Problema
Un robot mezcla una serie de elementos (o cartas) siguiendo un patrón constante dado por una permutación. El objetivo es determinar la cantidad de veces (pasos) que el robot debe repetir este proceso exacto para que todos los elementos regresen a su estado o posición original.

## Solución Propuesta
Si simulamos el proceso paso a paso, fácilmente caeríamos en un límite de tiempo excedido (*Time Limit Exceeded*), ya que el número de mezclas necesarias puede ser astronómicamente grande. 

La solución óptima modela el problema como un **Grafo Funcional** donde las posiciones forman ciclos (ciclos de una permutación). Cada elemento es parte de un ciclo cerrado y, por lo tanto, regresará a su posición inicial después de una cantidad de pasos igual a la **longitud de su ciclo**.

Para que toda la secuencia regrese a su posición original al mismo tiempo, el número total de pasos necesarios es el **Mínimo Común Múltiplo (MCM / LCM)** de las longitudes de todos los ciclos disjuntos encontrados en la permutación.

## Temas y Conceptos Abordados
- **Permutaciones:** Representación de transformaciones y mapeos de posiciones.
- **Teoría de Grafos:** Detección de ciclos en grafos dirigidos / funcionales. Se utiliza un arreglo de visitados para encontrar las componentes fuertemente conexas (que son ciclos simples).
- **Matemáticas (Teoría de Números):** Uso de la función del Mínimo Común Múltiplo (`lcm`) para unificar la ciclicidad de los múltiples elementos que se mueven en la permutación.

