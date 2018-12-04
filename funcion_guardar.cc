#include <iostream>
#include <fstream>
#include <string.h>
#include <list>

using namespace std;

struct Persona {
	char nombre[256];
	int edad;
	char telefono[256];
};

int main(){
	Persona p1;
	Persona p2;

	strcpy( p1.nombre, "Baltasar" );
	strcpy( p1.telefono, "988387028" );
	p1.edad = 33;

	strcpy( p2.nombre, "Pedro" );
	strcpy( p2.telefono, "988387018" );
	p2.edad = 33;

	ofstream f( "datos.bin", ios::binary );
	
	if ( f.is_open() ) {
		f.write( (char *) &p1, sizeof( Persona ) );
		f.write( (char *) &p2, sizeof( Persona ) );
	}else cout << "Error de apertura de archivo." << endl;

}