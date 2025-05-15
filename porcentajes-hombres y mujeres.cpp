// porcentajes-hombres y mujeres.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

int main()
{
    int cm = 0, cf = 0, n = 0, m=0, f=0, tp=0;
	double pm = 0.0, pf = 0.0;
	char sexo = 0;
	n = cm + cf;

	std::cout << "ingrese el numero de pacientes" << std::endl;
	std::cin >> n;
	
	while (cm + cf <n){
		std::cout << "ingrese el sexo del paciente (m o f)" << std::endl;
		std::cin >> sexo;
		if (sexo == 'm')
			cm = cm + 1;
		if (sexo == 'f')
			cf = cf + 1;
	}
	
	
	
	pm = (cm * 100) / n;
	pf = (cf * 100) / n;
	std::cout << "porcentaje de hombres: " << pm << "%" << std::endl;
	std::cout << "porcentaje de mujeres: " << pf << "%" << std::endl;

	return 0;


}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
