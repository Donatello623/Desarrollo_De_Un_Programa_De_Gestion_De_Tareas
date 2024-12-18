# Lista de Tareas en C++

Este proyecto es un programa interactivo en C++ que permite gestionar una lista de tareas. Puedes agregar, eliminar y visualizar tareas utilizando un menú interactivo.

## Funcionalidades

- **Agregar tarea**: Permite añadir una nueva tarea a la lista.
- **Eliminar tarea**: Permite eliminar una tarea de la lista seleccionándola por su número.
- **Mostrar tareas**: Lista todas las tareas registradas hasta el momento.
- **Salir**: Finaliza la ejecución del programa.

## Requisitos

Para compilar y ejecutar este programa, necesitarás:

- Un compilador de C++ (como `g++`, compatible con el estándar C++11 o superior).
- Un entorno de desarrollo (terminal o IDE, como Visual Studio Code, CLion, etc.).

## Ejecución

1. **Clonar o copiar el código fuente:**

   Guarda el código en un archivo llamado `lista_tareas.cpp`.

2. **Compilar el programa:**

   Si usas `g++`, abre tu terminal y escribe:
   ```bash
   g++ -o lista_tareas lista_tareas.cpp
   ```
   Esto generará un archivo ejecutable llamado `lista_tareas`.

3. **Ejecutar el programa:**

   En la terminal, ejecuta el archivo compilado:
   ```bash
   ./lista_tareas
   ```

4. **Interacción con el programa:**

   Usa el menú principal para interactuar con las opciones disponibles. Ingresa el número de la opción deseada y sigue las instrucciones en pantalla.

## Ejemplo de Uso

```plaintext
--- Lista de Tareas ---
1. Agregar tarea
2. Eliminar tarea
3. Mostrar tareas
4. Salir
Seleccione una opción: 1
Ingrese la tarea: Comprar leche
Tarea 'Comprar leche' agregada.

--- Lista de Tareas ---
1. Agregar tarea
2. Eliminar tarea
3. Mostrar tareas
4. Salir
Seleccione una opción: 3

--- Tareas ---
1. Comprar leche

Seleccione una opción: 4
Saliendo...
```

## Autor

Este programa fue creado como un ejemplo de gestión de datos interactiva en C++.

## Licencia

Este proyecto está disponible para uso y modificación con fines educativos o personales.
