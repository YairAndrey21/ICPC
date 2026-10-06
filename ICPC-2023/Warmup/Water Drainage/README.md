# Water Drainage

## Descripción del Problema
Este problema presenta un terreno descrito por una serie de puntos en un plano cartesiano, donde cada punto tiene una coordenada en $x$ y una altura en $y$. El objetivo es evaluar si el terreno tiene un sistema seguro para el drenaje de agua natural ("safe") o si corre el riesgo de acumular agua y causar un desastre ("disaster").

## Solución Propuesta
El agua se acumula si existe algún "valle" o depresión local en el terreno. Por tanto, el problema se reduce a identificar la existencia de un **mínimo local** estricto en la secuencia de alturas ($Y$).

El algoritmo recorre la secuencia de alturas analizando cada elemento (junto con su vecino izquierdo y su vecino derecho). Si encuentra un elemento en la posición $i$ que cumple que `Y[i] < Y[i-1]` (el terreno baja) y `Y[i] < Y[i+1]` (el terreno vuelve a subir), significa que el agua quedará atrapada en esa posición. Si se encuentra al menos uno, se declara `disaster`; si se recorre todo el arreglo y no hay valles, es `safe`.

Las coordenadas en el eje de las abscisas ($x$) son descartadas ya que para determinar estancamiento solo nos importa el relieve topográfico en el eje de las ordenadas ($y$).

## Temas y Conceptos Abordados
- **Arreglos (Vectores):** Recorrido y análisis de subsegmentos (ventanas deslizantes de tamaño 3).
- **Lógica Ad-Hoc / Simulación Básica:** Modelar las reglas del comportamiento del agua en un arreglo de alturas de manera trivial.
- **Geometría Computacional Básica:** Análisis de relieve local o derivadas discretas (cambio de pendiente).

