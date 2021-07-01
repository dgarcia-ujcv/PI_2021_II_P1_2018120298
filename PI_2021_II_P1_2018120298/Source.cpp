
#include<iostream>
#include<string>
#include<stdlib.h>
#include<time.h>
#include<Windows.h> 
#include<clocale> 

using namespace std;

int visitaCine_Mayor(int visitaCine_Op1Cont, int visitaCine_Op2Cont, int visitaCine_Op3Cont, int visitaCine_Op4Cont) {
	int visitaMayor;
	int frecuenciaMayor;
		
	if (visitaCine_Op1Cont> visitaCine_Op2Cont && visitaCine_Op1Cont > visitaCine_Op3Cont && visitaCine_Op1Cont > visitaCine_Op4Cont)
	{
		visitaMayor = visitaCine_Op1Cont;
		frecuenciaMayor = 1;
	}
	else if (visitaCine_Op2Cont > visitaCine_Op3Cont && visitaCine_Op2Cont > visitaCine_Op4Cont)
	{
		visitaMayor = visitaCine_Op2Cont;
		frecuenciaMayor = 2;
	}
	else if (visitaCine_Op3Cont > visitaCine_Op4Cont)
	{
		visitaMayor = visitaCine_Op3Cont;
		frecuenciaMayor = 3;
	}
	else
	{
		visitaMayor = visitaCine_Op4Cont;
		frecuenciaMayor = 4;
	}

		return frecuenciaMayor;
}
int generoCine_Mayor(int generoCine_Op1Cont, int generoCine_Op2Cont, int generoCine_Op3Cont, int generoCine_Op4Cont, int generoCine_Op5Cont) {
	int Mayor;
	int generoMayor;

	if (generoCine_Op1Cont > generoCine_Op2Cont && generoCine_Op1Cont > generoCine_Op3Cont && generoCine_Op1Cont > generoCine_Op4Cont && generoCine_Op1Cont > generoCine_Op5Cont)
	{
		Mayor = generoCine_Op1Cont;
		generoMayor = 1;
	}
	else if (generoCine_Op2Cont > generoCine_Op3Cont && generoCine_Op2Cont > generoCine_Op4Cont && generoCine_Op2Cont > generoCine_Op5Cont)
	{
		Mayor = generoCine_Op2Cont;
		generoMayor = 2;
	}
	else if (generoCine_Op3Cont > generoCine_Op4Cont && generoCine_Op3Cont > generoCine_Op5Cont)
	{
		Mayor = generoCine_Op3Cont;
		generoMayor = 3;
	}

	else if (generoCine_Op4Cont > generoCine_Op5Cont)
	{
		Mayor = generoCine_Op4Cont;
		generoMayor = 4;
	}
	else
	{
		Mayor = generoCine_Op5Cont;
		generoMayor = 5;
	}

	return generoMayor;
}
int acompananteCine_Mayor(int acompCine_Op1Cont, int acompCine_Op2Cont, int acompCine_Op3Cont, int acompCine_Op4Cont) {
	int MayorAc;
	int acomMayor;

	if (acompCine_Op1Cont > acompCine_Op2Cont && acompCine_Op1Cont > acompCine_Op3Cont && acompCine_Op1Cont > acompCine_Op4Cont)
	{
		MayorAc = acompCine_Op1Cont;
		acomMayor = 1;
	}
	else if (acompCine_Op2Cont > acompCine_Op3Cont && acompCine_Op2Cont > acompCine_Op4Cont)
	{
		MayorAc = acompCine_Op2Cont;
		acomMayor = 2;
	}
	else if (acompCine_Op3Cont > acompCine_Op4Cont)
	{
		MayorAc = acompCine_Op3Cont;
		acomMayor = 3;
	}
	else
	{
		MayorAc = acompCine_Op4Cont;
		acomMayor = 4;
	}

	return acomMayor;
}
int compraBoletosCine_Mayor(int compraBoletos_Op1Cont, int compraBoletos_Op2Cont, int compraBoletos_Op3Cont) {
	int Mayorbol;
	int boletoMayor;

	if (compraBoletos_Op1Cont > compraBoletos_Op2Cont && compraBoletos_Op1Cont > compraBoletos_Op3Cont)
	{
		Mayorbol = compraBoletos_Op1Cont;
		boletoMayor = 1;
	}
	else if (compraBoletos_Op2Cont > compraBoletos_Op3Cont)
	{
		Mayorbol = compraBoletos_Op2Cont;
		boletoMayor = 2;
	}

	else
	{
		Mayorbol = compraBoletos_Op3Cont;
		boletoMayor = 3;
	}

	return boletoMayor;
}
int CompraProductosCine_Mayor(int compraproductos_Op1Cont, int compraproductos_Op2Cont, int compraproductos_Op3Cont, int compraproductos_Op4Cont) {
	int mayorProd;
	int prodMayor;

	if (compraproductos_Op1Cont > compraproductos_Op2Cont && compraproductos_Op1Cont > compraproductos_Op3Cont && compraproductos_Op1Cont > compraproductos_Op4Cont)
	{
		mayorProd = compraproductos_Op1Cont;
		prodMayor = 1;
	}
	else if (compraproductos_Op2Cont > compraproductos_Op3Cont && compraproductos_Op2Cont > compraproductos_Op4Cont)
	{
		mayorProd = compraproductos_Op2Cont;
		prodMayor = 2;
	}
	else if (compraproductos_Op3Cont > compraproductos_Op4Cont)
	{
		mayorProd = compraproductos_Op3Cont;
		prodMayor = 3;
	}
	else
	{
		mayorProd = compraproductos_Op4Cont;
		prodMayor = 4;
	}

	return prodMayor;
}


int main() {
	setlocale(LC_ALL, "Spanish");
	SetConsoleCP(1252);

	char resp;
	string noGustaCine;
	int encuestadosCont = 0;

	int visitaCine = 0;
	int visitaCine_Op1Cont = 0, visitaCine_Op2Cont = 0, visitaCine_Op3Cont = 0, visitaCine_Op4Cont = 0;

	int generoCine = 0;
	int generoCine_Op1Cont = 0, generoCine_Op2Cont = 0, generoCine_Op3Cont = 0, generoCine_Op4Cont = 0, generoCine_Op5Cont = 0;

	int acompCine = 0;
	int acompCine_Op1Cont = 0, acompCine_Op2Cont = 0, acompCine_Op3Cont = 0, acompCine_Op4Cont = 0;

	int compraBoletos = 0;
	int compraBoletos_Op1Cont = 0, compraBoletos_Op2Cont = 0, compraBoletos_Op3Cont = 0;

	int compraproductos = 0;
	int compraproductos_Op1Cont = 0, compraproductos_Op2Cont = 0, compraproductos_Op3Cont = 0, compraproductos_Op4Cont = 0;
	const int PORCENTAJE = 100;



	do
	{

		do
		{
			cout << endl;
			cout << " ¿Con qué frecuencia visita el cine?: " << endl << endl;
			cout << "	* 1 -----------> 1 a 2 veces al año" << endl;
			cout << "	* 2 -----------> 3 a 5 veces al año" << endl;
			cout << "	* 3 -----------> Más de 6 veces al año" << endl;
			cout << "	* 4 -----------> Nunca" << endl;

			cin >> visitaCine;
			switch (visitaCine) {
			case 1:
				visitaCine_Op1Cont++;
				break;
			case 2:
				visitaCine_Op2Cont++;
				break;
			case 3:
				visitaCine_Op3Cont++;
				break;
			case 4:
				visitaCine_Op4Cont++;
				cout << "Su opinión es muy importante, ¿Puede decirnos la razón?"<<endl;
				getline(cin, noGustaCine);
				cin.ignore();
				
				system("cls");
				cout << endl << endl;
				cout << "¡Gracias por su respueta! Hasta pronto " << endl<< endl;
		

				system("Pause");
				return 0;


			default:

				cout << "El valor ingresado es incorrecto, escoje una de las opciones del menú" << endl << endl;
				break;
			}
			system("Pause");
			system("cls");

		} while (visitaCine > 4 || visitaCine < 1);

		do
		{
			cout << endl << endl;
			cout << " ¿Cuál es su género de cine favorito? " << endl << endl;
			cout << "	* 1 -----------> Aventura" << endl;
			cout << "	* 2 -----------> Acción" << endl;
			cout << "	* 3 -----------> Supenso / terror" << endl;
			cout << "	* 4 -----------> Drama" << endl;
			cout << "	* 5 -----------> Comedia" << endl;

			cin >> generoCine;
			cout << endl << endl;
			switch (generoCine) {

			case 1:
				generoCine_Op1Cont++;
				break;

			case 2:
				generoCine_Op2Cont++;
				break;

			case 3:
				generoCine_Op3Cont++;
				break;

			case 4:
				generoCine_Op4Cont++;
				break;

			case 5:
				generoCine_Op5Cont++;
				break;

			default:

				cout << "El valor ingresado es incorrecto, escoje una de las opciones del menú" << endl << endl;
				break;
			}
			system("Pause");
			system("cls");

		} while (generoCine > 5 || generoCine < 1);


		do
		{
			cout <<  endl;
			cout << " Cuando visita el cine ¿Cuántas personas lo acompañan? " << endl << endl;
			cout << "	* 1 -----------> 1 persona" << endl;
			cout << "	* 2 -----------> 2 persona " << endl;
			cout << "	* 3 -----------> 3 o más" << endl;
			cout << "	* 4 -----------> Voy solo" << endl;


			cin >> acompCine;
			cout << endl << endl;
			switch (acompCine) {

			case 1:
				acompCine_Op1Cont++;
				break;

			case 2:
				acompCine_Op2Cont++;
				break;

			case 3:
				acompCine_Op3Cont++;
				break;

			case 4:
				acompCine_Op4Cont++;
				break;

			default:

				cout << "El valor ingresado es incorrecto, escoje una de las opciones del menú" << endl << endl;
				break;
			}
			system("Pause");
			system("cls");

		} while (acompCine > 4 || acompCine < 1);

		do
		{
			cout << endl << endl;
			cout << " ¿Dónde compra sus boletos? " << endl << endl;
			cout << "	* 1 -----------> Taquilla del Cine" << endl;
			cout << "	* 2 -----------> Online " << endl;
			cout << "	* 3 -----------> Otro" << endl;

			cin >> compraBoletos;
			cout << endl << endl;
			switch (compraBoletos) {

			case 1:
				compraBoletos_Op1Cont++;
				break;

			case 2:
				compraBoletos_Op2Cont++;
				break;

			case 3:
				compraBoletos_Op3Cont++;
				break;


			default:

				cout << "El valor ingresado es incorrecto, escoje una de las opciones del menú" << endl << endl;
				break;
			}
			system("Pause");
			system("cls");

		} while (compraBoletos > 3 || compraBoletos < 1);

		do
		{
			cout << endl << endl;
			cout << " Aproximadamente ¿Cuanto gasta en le cosumo de alimentos y bebidas?" << endl << endl;
			cout << "	* 1 -----------> Menos de 150 lempiras" << endl;
			cout << "	* 2 -----------> Entre 150 y 300 lempiras" << endl;
			cout << "	* 3 -----------> Entre 300 y 500 lempiras" << endl;
			cout << "	* 4 -----------> Más de 500 lempiras" << endl;

			cin >> compraproductos;
			cout << endl << endl;
			switch (compraproductos) {

			case 1:
				compraproductos_Op1Cont++;
				break;

			case 2:
				compraproductos_Op2Cont++;
				break;

			case 3:
				compraproductos_Op3Cont++;
				break;

			case 4:
				compraproductos_Op4Cont++;
				break;


			default:

				cout << "El valor ingresado es incorrecto, escoje una de las opciones del menú" << endl << endl;
				break;
			}
			system("Pause");
			system("cls");

		} while (compraproductos > 4 || compraproductos < 1);

		encuestadosCont++;

		cout << " ¿Desea llenar otra encuesta?, (S=Si / N=No)" << endl;
		cin >> resp;
		system("cls");

	} while (resp == 'S' || resp == 's');



	cout<<endl << endl;
	


	string frecuenciaTitulo;
	int frecuencia = visitaCine_Mayor(visitaCine_Op1Cont, visitaCine_Op2Cont, visitaCine_Op3Cont, visitaCine_Op4Cont);
	int visita;


	if (frecuencia == 1)
	{
		frecuenciaTitulo = "1 a 2 veces al año";
		visita = visitaCine_Op1Cont;
	}
	else if (frecuencia == 2)
	{
		frecuenciaTitulo = "3 a 5 veces al año";
		visita = visitaCine_Op2Cont;
	}
	else if (frecuencia == 3)
	{
		frecuenciaTitulo = "más de 6 veces al año";
		visita = visitaCine_Op3Cont;
	}
	else if (frecuencia == 4)
	{
		frecuenciaTitulo = "nunca";
		visita = visitaCine_Op4Cont;
	}
	
	double resultadoFrecuencia = (visita / encuestadosCont)* PORCENTAJE;
	// ------------------------ 
	
	string generoTitulo;
	int genero = generoCine_Mayor(generoCine_Op1Cont, generoCine_Op2Cont, generoCine_Op3Cont, generoCine_Op4Cont, generoCine_Op5Cont);
	int generoMasGustado;
	cout << endl << endl;

	if (genero == 1)
	{
		generoTitulo = "aventura";
		generoMasGustado = generoCine_Op1Cont;
	}
	else if (genero == 2)
	{
		generoTitulo = "acción" ;
		generoMasGustado = generoCine_Op2Cont;
	}
	else if (genero == 3)
	{
		generoTitulo = "supenso / terror";
		generoMasGustado = generoCine_Op3Cont;
	}
	else if (genero == 4)
	{
		generoTitulo = "drama";
		generoMasGustado = generoCine_Op4Cont;
	}
	else
	{
		generoTitulo = "comedia";
		generoMasGustado = generoCine_Op5Cont;
	}
		double resultadogenero = (generoMasGustado / encuestadosCont) * PORCENTAJE;

//------------------------------

	string acomTitulo;
	int acompa = acompananteCine_Mayor(acompCine_Op1Cont, acompCine_Op2Cont, acompCine_Op3Cont, acompCine_Op4Cont);
	int acomMayor;
	cout << endl << endl;

	if (acompa == 1)
	{
		acomTitulo = "1 persona";
		acomMayor = acompCine_Op1Cont;
	}
	else if (genero == 2)
	{
		acomTitulo = "2 personas";
		acomMayor = acompCine_Op2Cont;
	}
	else if (genero == 3)
	{
		acomTitulo = "3 o más personas";
		acomMayor = acompCine_Op3Cont;
	}
	else
	{
		acomTitulo = "ninguna persona";
		acomMayor = acompCine_Op4Cont;
	}

	double resultadoacompa = (acomMayor / encuestadosCont) * PORCENTAJE;
	// ---------------------------

	string boletosTitulo;
	int boletos = compraBoletosCine_Mayor(compraBoletos_Op1Cont, compraBoletos_Op2Cont, compraBoletos_Op3Cont);
	int boletosMayor;
	cout << endl << endl;

	if (boletos == 1)
	{
		boletosTitulo = "en taquilla";
		boletosMayor = compraBoletos_Op1Cont;
	}
	else if (genero == 2)
	{
		boletosTitulo = "online";
		boletosMayor = compraBoletos_Op2Cont;
	}
	else
	{
		boletosTitulo = "a través de terceros";
		boletosMayor = compraBoletos_Op3Cont;
	}

	double resultadoaCompraBoleto = (boletosMayor / encuestadosCont) * PORCENTAJE;
	//------------------

	string consumoTitulo;
	int consumo = CompraProductosCine_Mayor(compraproductos_Op1Cont, compraproductos_Op2Cont, compraproductos_Op3Cont, compraproductos_Op4Cont);
	int consumoMayor;


	if (consumo == 1)
	{
		consumoTitulo = "menos de 150 lempiras";
		consumoMayor = visitaCine_Op1Cont;
	}
	else if (consumo == 2)
	{
		consumoTitulo = "entre 150 y 300 lempiras";
		consumoMayor = visitaCine_Op2Cont;
	}
	else if (consumo == 3)
	{
		consumoTitulo = "entre 300 y 500 lempiras";
		consumoMayor = visitaCine_Op3Cont;
	}
	else
	{
		consumoTitulo = "más de 500 lempiras";
		consumoMayor = visitaCine_Op4Cont;
	}

	double resultadoConsumo = (consumoMayor / encuestadosCont) * PORCENTAJE;

	cout << "----------  RESULTADO DE LA ENCUESTA  ---------" << endl << endl;
	cout << " - PREGUNTA #1: Un " << resultadoFrecuencia << "% de los encuestados visita el cine " << frecuenciaTitulo <<endl;
	cout << " - PREGUNTA #2: Para un " << resultadogenero << "% de los encuestados, su género de cine favorito es el cine de " << generoTitulo <<endl;
	cout << " - PREGUNTA #3: Un " << resultadoacompa << "% respondió que, visita el cine acompañado de " << acomTitulo << endl;
	cout << " - PREGUNTA #4: El " << resultadoaCompraBoleto << "% de encuestados compra su boleto " << boletosTitulo << endl;
	cout << " - PREGUNTA #4: El " << resultadoConsumo << "% de encuestados indicaron que su consumo en comidas y bebidas es de " << consumoTitulo <<" por visita" <<endl<< endl;
	system("Pause");
	return 0;
}

