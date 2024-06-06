Examen Final Database

1.-Realizar un modelo de base de datos simple en el lenguaje c++


2.-COMPARACION DE BASE DE DATOS:

1. MySQL
Características:

Sistema de gestión de bases de datos relacional (RDBMS).
Utiliza SQL (Structured Query Language) para gestionar datos.
Amplio soporte y comunidad activa.
Compatible con múltiples sistemas operativos.
Ventajas:

Fácil de aprender y usar.
Muy utilizado en aplicaciones web.
Buen rendimiento y escalabilidad.
Soporte para replicación y clustering.
Desventajas:

Algunas funcionalidades avanzadas están limitadas en la versión gratuita (MySQL Community Edition).
Menos compatible con sistemas de alta concurrencia comparado con otras opciones como PostgreSQL.
2. PostgreSQL
Características:

Sistema de gestión de bases de datos relacional (RDBMS) avanzado y de código abierto.
Soporte extensivo para tipos de datos avanzados y operaciones complejas.
Fuerte adherencia a los estándares SQL.
Ventajas:

Altamente extensible y personalizable.
Buen rendimiento en transacciones complejas.
Robusto soporte para concurrencia y consistencia.
Amplias capacidades de integración y extensiones.
Desventajas:

Puede ser más complejo de configurar y administrar que MySQL.
Consumo de recursos relativamente alto.
3. SQLite
Características:

Base de datos SQL ligera, embebida.
No requiere un servidor separado.
Almacenamiento de datos en un solo archivo.
Ventajas:

Muy fácil de integrar en aplicaciones.
Bajo consumo de recursos.
Ideal para aplicaciones móviles y de escritorio pequeñas.
Desventajas:

No adecuada para aplicaciones con alto volumen de transacciones.
Soporte limitado para operaciones concurrentes complejas.
4. MongoDB
Características:

Base de datos NoSQL orientada a documentos.
Almacena datos en formato BSON (Binary JSON).
Flexible en cuanto a la estructura de datos.
Ventajas:

Escalable horizontalmente.
Ideal para aplicaciones con datos no estructurados o semi-estructurados.
Buen rendimiento en consultas de lectura.
Desventajas:

Puede ser menos eficiente en operaciones transaccionales complejas.
Requiere una cuidadosa planificación de la estructura de los datos para evitar problemas de rendimiento.
5. LevelDB
Características:

Base de datos de pares clave-valor.
Desarrollada por Google.
Utiliza técnicas avanzadas de almacenamiento para eficiencia.
Ventajas:

Excelente rendimiento en operaciones de lectura y escritura.
Buena para aplicaciones que requieren almacenamiento de datos rápido y eficiente.
Pequeña huella de memoria y almacenamiento.
Desventajas:

No es un sistema de base de datos completo; carece de características avanzadas de gestión de datos.
No soporta consultas SQL.
6. Redis
Características:

Almacén de datos en memoria de pares clave-valor.
Utilizado principalmente como caché y broker de mensajes.
Soporta estructuras de datos como listas, conjuntos y hashes.
Ventajas:

Extremadamente rápido para operaciones de lectura y escritura.
Ideal para almacenamiento en caché y operaciones de sesión.
Soporte para replicación y persistencia en disco.
Desventajas:

No adecuado para grandes cantidades de datos persistentes debido a su naturaleza en memoria.
Funcionalidad limitada comparada con RDBMS tradicionales.


JUSTIFICACION:

 Se debe realizar esta implementacion en base de datos por la facilidad de manejo que tiene y lo dinamico que es a la vez al interactuar con este programa ya que que se puede manejar de forma sencilla sin tanta complejidad.

3.-ESTRUCTURA:

• /BASE_DE_DATOS: Contiene el codigo principal y el readme

• /examen.cpp: Es el codigo donde se resuelve el problema y contiene la base de datos solicitada

• /README.md: Es el archivo que contiene la 
Explicacion de base de datos existentes, comparativa y justificacion de este nuevo desarrollo
Estructura de repositorio
Descripcion de las funciones, estructuras
Diagrama de flujos o Pseudocodigo.
Creditos 
Herramientas utilizadas

4.-



5.-



6.-

