# Idoneal

## Descripción del Problema
Este ejercicio requiere verificar si un número entero $n$ dado tiene o no la propiedad de ser un **número idóneo**, según una regla específica del problema. Específicamente, se busca determinar si existen tres enteros positivos y distintos $a, b, c$ (tales que $a < b < c$) que satisfagan la ecuación:

$$n = ab + bc + ac$$

Si se logra encontrar al menos una terna $(a, b, c)$ que cumpla esta condición, se imprime dicha terna. Si no existe ninguna combinación posible, el número es considerado "idoneal" (idóneo) y se imprime este mensaje.

## Solución Propuesta
El problema se aborda mediante **fuerza bruta optimizada matemáticamente**. En lugar de usar tres ciclos anidados (lo que daría *Time Limit Exceeded*), se itera sobre $a$ y $b$, y el tercer valor $c$ se despeja mediante álgebra:
$$c = \frac{n - ab}{a + b}$$

Se garantiza que $a, b, c$ sean enteros al revisar si el residuo `(n - a*b) % (a+b) == 0`. Además, los límites de iteración están fuertemente acotados, asegurando que $a$ y $b$ no crezcan innecesariamente, basándose en la relación matemática de los tres números.

## Temas y Conceptos Abordados
- **Teoría de Números:** Representación de números mediante sumas y productos.
- **Ecuaciones Diofánticas:** Búsqueda de soluciones enteras para una ecuación de múltiples variables.
- **Fuerza Bruta Optimizada:** Reducción de la complejidad de $O(N^3)$ a $O(N \log N)$ o similar al despejar la tercera variable matemática y acotar los límites de búsqueda.

