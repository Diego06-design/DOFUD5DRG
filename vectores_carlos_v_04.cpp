// ============================================================
// GRAN CONCURSO DE RECETAS
// Fichero: dofUD5-plantilla.cpp
// Alumno/a: DIEGO RUIZ GALLARDO
// Fecha:    24 de Abril de 2025
// ============================================================
#include <iostream>
#include <iomanip>
using namespace std;

const int MAX_CONCURSANTES = 8;
const int MAX_NOMBRE       = 31;
const int MIN_PUN          = 1;
const int MAX_PUN          = 10;

// ============================================================
// ==  CAPA BACK  =============================================
// ============================================================

// ---- Gestión de cadenas de caracteres ----

/** ------------------------------------------------------------
 * @brief Módulo que calcula la longitud de una cadena de caracteres
 * @param const char cadena La cadena, de la cual, queremos averiguar su longitud
 * @pre cadena <= DIM_CADENA
 * @post EL contenido del vector resultante será sobrescrito
 * @return int La longitud de la cadena
 * ------------------------------------------------------------*/

int longitud_cadena(const char cadena[], const int DIM_CADENA) {
	int longitud = 0;
	
	while (cadena[longitud] != '\0') {
		longitud++;
	}
	
	return longitud;
}

/** ------------------------------------------------------------
 * @brief Módulo que copia los valores de un vector de una cadena de caracteres en otra
 * @param char cadena_origen Cadena desde la cual vamos a copiar los datos
 * @param char cadena_destino Cadena donde se van a copiar los valores
 * @pre cadena_origen <= DIM_CADENA_ORIGEN
 * @pre cadena_destino <= DIM_CADENA_DESTINO
 * @post El contenido de la cadena de destino será sobrescrito con lo que hubiera previamente
 * ------------------------------------------------------------*/

void copiar_cadena(const char cadena_origen[], char cadena_destino[], const int DIM_CADENA_ORIGEN, const int DIM_CADENA_DESTINO) {
	int i = 0;	
	
	while (cadena_origen[i] != '\0'){
		cadena_destino[i] = cadena_origen[i];
		i++;
	}
	cadena_destino[i] = '\0';
}

/** ------------------------------------------------------------
 * @brief Módulo que imprime el vector de la cadena de destino
 * @param char cadena_destino
 * @param char util_cadena_destino
 * @post El contenido de la cadena de destino será sobrescrito con lo que hubiera previamente
 * ------------------------------------------------------------*/

void imprimir_cadena(char cadena_destino[], const int DIM_CADENA_DESTINO){
	int i = 0;
	while (cadena_destino[i] != '\0'){
		cout << cadena_destino[i];
		i++;
	}
	cout <<endl;
}

/** ------------------------------------------------------------
 * @brief Módulo que compara dos cadenas de caracteres
 * @param char cadena1
 * @param char cadena2
 * @pre Las dimesiones de las dos cadenas son diferentes
 * @return int El resultado de la comparación de las dos cadenas
 * ------------------------------------------------------------*/

int comparar_cadenas(const char cadena1[], const char cadena2[]) {
	
}

/** ------------------------------------------------------------
 * @brief Módulo que comprueba si la cadena de caracteres está vacía
 * @param char cadena[] Cadena de la cual queremos comprobar si está vacía o no
 * @pre cadena != '\0'
 * @return bool Si está vacía (true) o no lo está (false)
 * ------------------------------------------------------------*/

bool cadena_vacia(const char cadena[]) {
	bool cadena_vacia=false;	
	if (cadena[] != '\0'){
		cadena_vacia=true;	
	} else {
		cadena_vacia=false;
	}	
}

// ---- Gestión de vector de enteros ----

/** ------------------------------------------------------------
 * @brief Módulo que agrega un número entero a un vector de enteros
 * @param int v[] Vector donde vamos a agregar el número
 * @param int v_util[] Variable que nos indica la primera posición libre y el número de elementos que hay dentro del vector
 * @param int valor_a_agregar Valor que vamos a agregar al vector
 * @pre v_util <= DIM_V
 * @post El contenido del vector de salida va a ser sobrescrito (Se borra la información)
 * @return bool
 * ------------------------------------------------------------*/
/*
bool agregar_entero_en_vector(int v[], int &v_util, int valor_a_agregar) {
	for (int i=0; i < util_v; i++){
		v[i] = valor_a_agregar
	util_v++;	
	}
}
*/

/** ------------------------------------------------------------
 * @brief Módulo que elimina un número entero de un vector de enteros
 * @param int v[] Vector del cual queremos eliminar el número
 * @param int util_v[] Variable que nos indica la primera posición libre y el número de elementos que tenemos dentro del vector
 * @param int posicion_a_eliminar La posición del vector en la cual queremos eliminar el número
 * @pre util_v <= DIM_V
 * @post El contenido del vector será sobrescrito
 * @return bool Devuelve si el número ha sido eliminado o no
 * ------------------------------------------------------------*/

bool eliminar_entero_en_vector(int v[], int &util_v, int posicion_a_eliminar) {
	for (int i=0; i < util_v; i--){
		v[i] = posicion_a_eliminar;
		util_v--;
	}
}

// ---- Lógica de negocio ----
/** ------------------------------------------------------------
 * @brief Módulo que comprueba si el valor introducido en el vector es válido
 * @param int v Vector del cual queremos comprobar si el valor introducido es válido
 * @param int mn Valor mínimo a comprobar
 * @param int mx Valor máximo a comprobar
 * @pre El valor mínimo debe ser menor que el máximo
 * @post v >= mn && v <= mx
 * @return bool Si el valor introducido en el vector es válido o no
 * ------------------------------------------------------------*/

bool es_valido(int v, int mn, int mx) {
	
}

/** ------------------------------------------------------------
 * @brief Módulo que calcula la media de cada concursante
 * @param int puntuacion_entrante Puntuación del plato entrante
 * @param int puntuacion_primero Puntuación del primer plato
 * @param int puntuacion_postre Puntuación del plato del postre
 * @return double La media de todos los platos
 * ------------------------------------------------------------*/

double calcular_media(int puntuacion_entrante, int puntuacion_primero, int puntuacion_postre) {
	
} 

/** ------------------------------------------------------------
 * @brief Módulo que calcula la media global de todas las puntuaciones de los concursantes
 * @param double v_medias[] Vector donde tenemos almacenadas todas las medias
 * @param int util_v_medias Variable que nos indica la primera posición libre y el número de elementos que tenemos dentro del vector
 * @return double La media global de todas las puntuaciones de los concursantes
 * ------------------------------------------------------------*/

double calcular_media_global(const double v_medias[], int util_v_medias) {
	
}

/** ------------------------------------------------------------
 * @brief Módulo que calcula el índice del mejor concursante del concurso
 * @param double v_medias[] Vector donde almacenamos todas las medias mencionadas anteriormente
 * @param int util_v_medias Variable que nos indica la primera posición libre y el número de elementos que hay dentro del vector
 * @return double El resultado de la media del mejor concursante
 * ------------------------------------------------------------*/

int calcular_indice_mejor_concursante(const double v_medias[], int util_v_medias) {
	
}

/** ------------------------------------------------------------
 * @brief Módulo que calcula el índice del peor concursante del concurso
 * @param double v_medias[] Vector donde almacenamos todas las medias mencionadas anteriormente
 * @param int util_v_medias Variable que nos indica la primera posición libre y el número de elementos que hay dentro del vector
 * @return double El resultado de la media del peor concursante
 * ------------------------------------------------------------*/

int calcular_indice_peor_concursante(const double v_medias[], int util_v_medias) {
	
}

// ============================================================
// ==  CAPA FRONT  ============================================
// ============================================================
/** ------------------------------------------------------------
 * @brief Módulo que muestra la cabecera de la lista de concursantes
 * ------------------------------------------------------------*/

void front_mostrar_cabecera_lista() {
    cout << "\n--- Concursantes activos ---\n";
    cout << left
         << setw(4)  << "#"
         << setw(22) << "Nombre"
         << setw(6)  << "Ent"
         << setw(6)  << "Pri"
         << setw(6)  << "Pos" << "\n";
    cout << string(44, '-') << "\n";
}

/** ------------------------------------------------------------
 * @brief Módulo que muestra la fila de cada concursante del concurso
 * ------------------------------------------------------------*/

void front_mostrar_fila_concursante(
        const char nombre[], int ent, int pri, int pos, int idx) {
    cout << left
         << setw(4)  << (idx + 1)
         << setw(22) << nombre
         << setw(6)  << ent
         << setw(6)  << pri
         << setw(6)  << pos << "\n";
}

/** ------------------------------------------------------------
 * @brief Módulo que muestra las opciones del menú del concurso
 * ------------------------------------------------------------*/

void front_mostrar_menu() {
    cout << "\n=== MENU ===\n"
         << "1. Imprimir concursantes y puntuaciones\n"
         << "2. Introducir nuevo concursante\n"
         << "3. Eliminar un concursante\n"
         << "4. Ver resultados individuales\n"
         << "5. Ver clasificacion\n"
         << "6. Ver finalistas\n"
         << "7. Salir\n";
}

/** ------------------------------------------------------------
 * @brief Módulo que pide un número entero y comprueba si es válido o no
 * @param char msg[] Vector que muestra un mensaje de error en el caso de que la condición no se cumpla
 * @param int mn Valor mínimo
 * @param int mx Valor máximo
 * @return int v El vector resultante
 * ------------------------------------------------------------*/

int front_pedir_entero(const char msg[], int mn, int mx) {
    int v;
    do {
        cout << msg;
        cin  >> v;
        if (!es_valido(v, mn, mx))
            cout << "  [!] Fuera de rango (" << mn << "-"
                 << mx << "). Intenta de nuevo.\n";
    } while (!es_valido(v, mn, mx));
    return v;
}

/** ------------------------------------------------------------
 * @brief Módulo que pide al usuario el nombre del concursante
 * @param char dest[] Vector correspondiente
 * @pre
 * @post
 * ------------------------------------------------------------*/

void front_pedir_nombre(char dest[]) {

}

/** ------------------------------------------------------------
 * @brief Módulo que muestra por pantalla todos los resultados del concurso 
 * ------------------------------------------------------------*/

void front_mostrar_resultados(){

}
/** ------------------------------------------------------------
 * @brief Módulo que muestra la clasificiacón o nota de cada concursante del concurso
 * ------------------------------------------------------------*/

void front_mostrar_clasificacion(){
}
/** ------------------------------------------------------------
 * @brief Módulo que muestra los concursantes finalistas del concurso
 * ------------------------------------------------------------*/

void front_mostrar_finalistas(){

}
/** ------------------------------------------------------------
 * @brief Módulo que muestra un mensaje de error en el vector
 * @param char msg[] Vector que contiene el mensaje de error
 * ------------------------------------------------------------*/

void front_mostrar_error(const char msg[]) {
    cout << "[!] " << msg << "\n";
}

// ============================================================
// ==  CAPA CONTROLADOR  ======================================
// ============================================================

// Help! todos los CTRL reciben los 8 vectores de
// nombre + los 3 vectores de puntuaciones + num_concursantes por referencia (o valor).
/** ------------------------------------------------------------
 * @brief Módulo que imprime los concursantes del concurso
 * @param v_puntuaciones_entrante Las puntuaciones de los platos entrantes
 * @param v_puntuaciones_primero Las puntuaciones de los primeros platos del concurso
 * @param v_puntuaciones_postre Las puntuaciones de los postres
 * @param int num_concursantes
 * @pre i < num_concursantes
 * @return
 * ------------------------------------------------------------*/

void ctrl_imprimir_concursantes(
        char v1[], char v2[], char v3[], char v4[],
        char v5[], char v6[], char v7[], char v8[],
        int v_puntuaciones_entrante[], int v_puntuaciones_primero[], int v_puntuaciones_postre[], int &num_concursantes) {
    front_mostrar_cabecera_lista();
    for (int i = 0; i < num_concursantes; i++) {
        char* nom;
        switch (i) {
            case 0: nom = v1; break;
            case 1: nom = v2; break;
            case 2: nom = v3; break;
            case 3: nom = v4; break;
            case 4: nom = v5; break;
            case 5: nom = v6; break;
            case 6: nom = v7; break;
            default: nom = v8; break;
        }
        front_mostrar_fila_concursante(
            nom, v_puntuaciones_entrante[i], v_puntuaciones_primero[i], v_puntuaciones_postre[i], i);
    }
}
/** ------------------------------------------------------------
 * @brief Módulo que agrega un concursante nuevo al vector
 * @param v1[], v2[], v3[], v4[], v5[], v6[], v7[], v8[] Vectores correspondientes
 * @pre num_concursantes <= MAX_CONXURSANTES
 * @post num_concursantes >= MAX_CONCURSANTES
 * @return
 * ------------------------------------------------------------*/
void ctrl_agregar_concursante(
        char v1[], char v2[], char v3[], char v4[],
        char v5[], char v6[], char v7[], char v8[],
        int v_puntuaciones_entrante[], int v_puntuaciones_primero[], int v_puntuaciones_postre[], int &num_concursantes) {
    if (num_concursantes >= MAX_CONCURSANTES) {
        front_mostrar_error("El concurso esta completo (max. 8).");
    }else{
        char tmpNom[MAX_NOMBRE];
        cout << "Nombre: ";
        front_pedir_nombre(tmpNom);
        int e  = front_pedir_entero(
            "  Punt. entrante  (1-10): ", MIN_PUN, MAX_PUN);
        int p  = front_pedir_entero(
            "  Punt. principal (1-10): ", MIN_PUN, MAX_PUN);
        int po = front_pedir_entero(
            "  Punt. postre    (1-10): ", MIN_PUN, MAX_PUN);

	// Llamamos al módulo correspondiente para agregar el elemento al vector


        cout << "[OK] Concursante agregado.\n";
    }
}
/** ------------------------------------------------------------
 * @brief Módulo que elimina un concursante del vector
 * @param v1[], v2[], v3[], v4[], v5[], v6[], v7[], v8[] Vectores correspondientes
 * @pre num_concursantes <= MAX_CONCURSANTES
 * @post num_concursantes >= MAX_CONCURSANTES
 * ------------------------------------------------------------*/
void ctrl_eliminar_concursante(
        char v1[], char v2[], char v3[], char v4[],
        char v5[], char v6[], char v7[], char v8[],
        int v_puntuaciones_entrante[], int v_puntuaciones_primero[], int v_puntuaciones_postre[], int &num_concursantes){
    if (num_concursantes == 0) {
        front_mostrar_error("No hay concursantes para eliminar.");
    }else{
        ctrl_imprimir_concursantes(v1,v2,v3,v4,v5,v6,v7,v8, 
            v_puntuaciones_entrante, v_puntuaciones_primero, v_puntuaciones_postre, num_concursantes);
        
        int selec = front_pedir_entero("Numero de concursante a eliminar: ", 1, num_concursantes) - 1;
        
        // LLamamos al módulo correspondiente

        cout << "[OK] Concursante eliminado.\n";
    }
}

/** ------------------------------------------------------------
 * @brief Módulo que muestra los resultados de cada concursante
 * @param v1[], v2[], v3[], v4[], v5[], v6[], v7[], v8[] Vectores correspondientes
 * @post
 * ------------------------------------------------------------*/
void ctrl_mostrar_resultados(
        char v1[], char v2[], char v3[], char v4[],
        char v5[], char v6[], char v7[], char v8[],
        int v_puntuaciones_entrante[], int v_puntuaciones_primero[], int v_puntuaciones_postre[], int &num_concursantes){

}

/** ------------------------------------------------------------
 * @brief Módulo que muestra la calificación de cada concursante
 * @param v1[], v2[], v3[], v4[], v5[], v6[], v7[], v8[] Vectores correspondientes
 * @post
 * ------------------------------------------------------------*/
void ctrl_mostrar_clasificacion(
        char v1[], char v2[], char v3[], char v4[],
        char v5[], char v6[], char v7[], char v8[],
        int v_puntuaciones_entrante[], int v_puntuaciones_primero[], int v_puntuaciones_postre[], int &num_concursantes){
        
            
}

/** ------------------------------------------------------------
 * @brief Módulo que muestra los finalistas del concurso
 * @param
 * @pre
 * @post
 * @return
 * ------------------------------------------------------------*/
void ctrl_mostrar_finalistas(
        char v1[], char v2[], char v3[], char v4[],
        char v5[], char v6[], char v7[], char v8[],
        int v_puntuaciones_entrante[], int v_puntuaciones_primero[], int v_puntuaciones_postre[], int &num_concursantes){
        
}
/*
// ============================================================
int main() {
    char v_nombre_concursante1[MAX_NOMBRE] = "Ana Garcia";
    char v_nombre_concursante2[MAX_NOMBRE] = "Pedro Ruiz";
    char v_nombre_concursante3[MAX_NOMBRE] = "Laura Blanco";
    char v_nombre_concursante4[MAX_NOMBRE];
    char v_nombre_concursante5[MAX_NOMBRE];
    char v_nombre_concursante6[MAX_NOMBRE];
    char v_nombre_concursante7[MAX_NOMBRE];
    char v_nombre_concursante8[MAX_NOMBRE];

    int v_puntuaciones_entrante[MAX_CONCURSANTES]  = {8, 6, 9};
    int v_puntuaciones_principal[MAX_CONCURSANTES] = {7, 5, 8};
    int v_puntuaciones_postre[MAX_CONCURSANTES]    = {9, 7, 10};
	
    int v_medias_concursantes[MAX_CONCURSANTES];

    int num_concursantes = 3;

    cout << "=== CRISTO CHEF ===\n";

    int opcion;
    do {
        front_mostrar_menu();
        opcion = front_pedir_entero("Elige opcion: ", 1, 7);
        switch (opcion) {
            case 1:
                ctrl_imprimir_concursantes(
                    v_nombre_concursante1, v_nombre_concursante2,
                    v_nombre_concursante3, v_nombre_concursante4,
                    v_nombre_concursante5, v_nombre_concursante6,
                    v_nombre_concursante7, v_nombre_concursante8,
                    v_puntuaciones_entrante, v_puntuaciones_principal,
                    v_puntuaciones_postre, num_concursantes);
                break;
            case 2:
                ctrl_agregar_concursante(
                    v_nombre_concursante1, v_nombre_concursante2,
                    v_nombre_concursante3, v_nombre_concursante4,
                    v_nombre_concursante5, v_nombre_concursante6,
                    v_nombre_concursante7, v_nombre_concursante8,
                    v_puntuaciones_entrante, v_puntuaciones_principal,
                    v_puntuaciones_postre, num_concursantes);
                break;
            case 3:
                ctrl_eliminar_concursante(
                    v_nombre_concursante1, v_nombre_concursante2,
                    v_nombre_concursante3, v_nombre_concursante4,
                    v_nombre_concursante5, v_nombre_concursante6,
                    v_nombre_concursante7, v_nombre_concursante8,
                    v_puntuaciones_entrante, v_puntuaciones_principal,
                    v_puntuaciones_postre, num_concursantes);
                break;
            case 4:
                ctrl_mostrar_resultados(
                    v_nombre_concursante1, v_nombre_concursante2,
                    v_nombre_concursante3, v_nombre_concursante4,
                    v_nombre_concursante5, v_nombre_concursante6,
                    v_nombre_concursante7, v_nombre_concursante8,
                    v_puntuaciones_entrante, v_puntuaciones_principal,
                    v_puntuaciones_postre, num_concursantes);
                break;
            case 5:
                ctrl_mostrar_clasificacion(
                    v_nombre_concursante1, v_nombre_concursante2,
                    v_nombre_concursante3, v_nombre_concursante4,
                    v_nombre_concursante5, v_nombre_concursante6,
                    v_nombre_concursante7, v_nombre_concursante8,
                    v_puntuaciones_entrante, v_puntuaciones_principal,
                    v_puntuaciones_postre, num_concursantes);
                break;
            case 6:
                ctrl_mostrar_finalistas(
                    v_nombre_concursante1, v_nombre_concursante2,
                    v_nombre_concursante3, v_nombre_concursante4,
                    v_nombre_concursante5, v_nombre_concursante6,
                    v_nombre_concursante7, v_nombre_concursante8,
                    v_puntuaciones_entrante, v_puntuaciones_principal,
                    v_puntuaciones_postre, num_concursantes);
                break;
            case 7:
                cout << "Hasta la proxima!\n";
                break;
        }
    } while (opcion != 7);
    return 0;
}
*/

int main(){
	char cadena[MAX_NOMBRE] = "diego";
	char copiaCadena[MAX_NOMBRE] = "";
	
	copiar_cadena(cadena, copiaCadena, MAX_NOMBRE, MAX_NOMBRE);
	imprimir_cadena(copiaCadena, MAX_NOMBRE);

	cadena_vacia (cadena);

}
