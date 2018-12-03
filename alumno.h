#ifndef ALUMNO_H
#define ALUMNO_H

#include <string>
#include <cstdlib>
#include <iostream>

using namespace std;

class Alumno{

	private:
		string nombre_;
		string apellidos_;
		string dni_;
		int telefono_;
		string correo_;
		string direccion_;
		int curso_;
		int equipo_;
		bool lider_;

	public:
		Alumno(string nombre="", string dni="");
		//Observadores
		inline string getNombre()const{return nombre_;}
		inline string getApellidos()const{return apellidos_;}
		inline string getDni()const{return dni_;}
		inline int getTelefono()const{return telefono_;}
		inline string getCorreo()const{return correo_;}
		inline string getDireccion()const{return direccion_;}
		inline int getCurso()const{return curso_;}
		inline int getEquipo()const{return equipo_;}
		inline bool isLider()const{return lider_;}

		//Constructores
		bool setNombre(string nuevo);
		bool setApellidos(string nuevo);
		bool setDni(string nuevo);
		bool setTelefono(int nuevo);
		bool setCorreo(string nuevo);
		bool setDireccion(string nuevo);
		bool setCurso(int nuevo);
		bool setEquipo(int nuevo);
		bool setLider(bool nuevo);
}

#endif