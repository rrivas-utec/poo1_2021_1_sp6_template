# Task #6: Tarea - Arreglo Dinámico, Matriz Dinámico y Vectores 
**course:** Programación Orientada a Objetos I  
**unit:** Simulacro PC2  
**cmake project:** poo1_sp6
## Indicaciones Específicas
- El tiempo límite para la evaluación es 100 minutos.
- Cada pregunta deberá ser respondida en un archivo fuente (`.cpp`) y un archivo cabecera (`.h`) con el número de la pregunta:  
**NOTA:** Los archivos se encuentra dentro del folder **src**  
    - `p1.cpp, p1.h`
    - `p2.cpp, p2.h`
    - `p3.cpp, p3.h`
- Deberás subir estos archivos directamente a [www.gradescope.com](https://www.gradescope.com) o se puede crear un `.zip` que contenga todos ellos y subirlo.
## Competencias
- Para los alumnos de la carrera de Ciencia de la Computación
    - Aplica conocimientos de computación  apropiados para la solución de problemas definidos y sus requerimientos en la disciplina del programa.(nivel 2)
    - Diseña, implementa y evalúa soluciones a problemas complejos de computación.(nivel 2)
    - Crea, selecciona, adapta y aplica técnicas, recursos y herramientas modernas para la práctica de la computación y comprende sus limitaciones.(nivel 2)

- Para los alumnos de las carreras de Ingeniería
    - Capacidad para aplicar conocimientos de matemática.(nivel 2)
    - Capacidad para diseñar un sistema, un componente o un proceso para satisfacer las necesidades deseadas dentro de restricciones realistas(nivel 2)
## Question #1 - Arreglo Dinámico (7 points)

Implemente una función que tome 3 parámetros de entrada y 1 parámetro de salida, y genere números en un vector o array, según la opción pasada, de la siguiente forma:  
- El primer parámetro es un número entero que define el número de inicio.  
- El segundo parámetro es un número entero que marca el número final.  
- El tercer parámetro es un carácter que define una opción:  
  - **p** genera números pares,  
  - **i** genera números impares, 
  - **e** genera números múltiplos de 3. 
- El cuarto parámetro es un vector o array donde se escriben los números generados 

Luego implemente un programa que solicite ingresar esos 3 parámetros y llame a la función, e imprime el vector o array resultante. 
  
**Use Case:** 
#### Constraints
```cpp
- El ingreso de los valores no requiere utilizar etiquetas (std::cout)
```
#### Ejemplo 1
**Input**
```cpp
4
10
p
```
**Output**
```
4 6 8 10
```
#### Ejemplo 2
**Input**
```cpp
5
12
i
```
**Output**
```
5 7 9 11
```
#### Ejemplo 3
**Input**
```cpp
5
12
e
```
**Output**
```
6 9 12
```

## Question #2 - Matrices Dinamicas (7 points)

Ingresar desde teclado el valor de N, con el cual se genera una matriz cuadrada dinámica de NxN. Los valores ingresados estarán en el rango de 1-9.
- Ingresar desde teclado el valor para C, en cuál indica el número de columna.
- Ingresar desde teclado el valor para OP, el cual indica la operación
  - OP= S, realiza la SUMA de los valores
  - OP= M, realiza la MULTIPLICACIÓN de los valores
  
**Use Case:**  
#### Ejemplo 1
**Input**
```cpp
4
2
S
1 3 4 2
7 3 2 2
3 4 7 1
1 2 2 3
```
**Output**
```
12
```
#### Ejemplo 2
**Input**
```cpp
4
1
M
1 3 4 2
7 3 2 2
3 4 7 1
1 2 2 3
```
**Output**
```
21
```

## Question #3 - Vectores (6 points)

Desarrollar un programa en C++ usando la clase vector. El programa debe rotar una cadena a la derecha o izquierda. Debe ingresar 2 parámetros desde teclado, CADENA y NÚMERO.
- CADENA, es un string que se debe copiar a un vector.
- NÚMERO, es un entero que indica el número de posiciones que se rotan
  - Sí es positivo entonces rota a la derecha
  - Sí es negativo entonces rota a la izquierda 
  
**Use Case:**  
#### Ejemplo 1
**Input**
```cpp
Utec
1
```
**Output**
```
cUte
```
#### Ejemplo 2
**Input**
```cpp
Utec
-1
```
**Output**
```
tecU
```
#### Ejemplo 3
**Input**
```cpp
University
-2
```
**Output**
```
iversityUn
```



