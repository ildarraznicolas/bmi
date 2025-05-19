# IMC - Índice de Masa Corporal

Este programa en lenguaje C permite calcular el Índice de Masa Corporal de una persona a partir del peso (en kilogramos) y la altura (en metros), e informa en qué categoría se encuentra según los valores de referencia de la Organización Mundial de la Salud (OMS).

## 🧠 ¿Qué hace el programa?

- Solicita al usuario el peso y la altura
- Calcula el IMC utilizando la fórmula: `IMC = peso / (altura * altura)`
- Muestra el valor del IMC con dos decimales
- Presenta una tabla con las categorías de clasificación

## 📁 Archivos incluidos

- `bmi.c`: código fuente del programa en lenguaje C
- `bmi.exe`: ejecutable para sistemas Windows

## 🖥️ Cómo usar

### En Windows

1. Descargar y ejecutar `bmi.exe`
2. Ingresar los datos cuando se solicite
3. El programa mostrará el resultado y esperará una tecla antes de cerrar

### En cualquier sistema operativo

Se puede compilar el archivo `bmi.c` con un compilador C, por ejemplo con GCC:

```bash
gcc bmi.c -o bmi
./bmi
