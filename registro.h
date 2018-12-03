#ifndef REGISTRO_H
#define REGISTRO_H
#include "alumno.h"
#include <list>

class Registro{
	private:
		list <Alumno> alumnos_; //Lista de alumnos donde se guarda lo que cargue el fichero al iniciar el programa

	public:
		bool checkDni(string dni);//comprueba que el dni pasado no existe en la lista
		bool checkNalumnos();//comprueba si el numero de alumnos s 150
		void showAlumno(string dni="", string apellido="", int opcion, int ordenacion);
			//opcion 0 -> mostrar el alumno por dni
			//opcion 1 -> mostrar el alumno por apellido
			//opcion 2 -> mostrar todos los alumnos
			//ordenacion 0 -> ascendente
			//ordenacion 1 -> descendente
		
		bool cargarDatos();	
		bool guardarDatos();
}

#endif
