#include<iostream>
using namespace std;
int msj1,msj2,msj3,msj4,regalo;
int precios[4]={1879,2435,6190,9490};
void menu();
int pedir(int can_pro);
int calculo(int product,int cant1);
int detalles(int su,int canti);
int main() {

	menu();

}
void menu(){
int can_productos, cant,producto,cant1,cantidad=0;	
	
	cout << " aprobecha nuestas mejores ofertas de temporada " << endl;
	cout << "           >> Regreso a clases << " << endl;
	cout << " " << endl;
	cout << " 1. combo estudio tan solo $1879 pesos" << endl;
	cout << "   escritorio para computo + silla secretaria " << endl;
	cout << " --------------------------------------------------------------------------------------------------" << endl;
	cout << " 2. combo dibujo a tan solo $2435 pesos ojo -10% al pagar con targetas debito o credito " << endl;
	cout << " mesa de dibujo + banco metalico" << endl;
	cout << " --------------------------------------------------------------------------------------------------" << endl;
	cout << " 3. laptop HP14 a tan solo $6190 pesos + oferta especial  regalo mochila o audifonos" << endl;
	cout << " procesador intel celeron ,DD 500 GB,RAM 4 GB  " << endl;
	cout << " --------------------------------------------------------------------------------------------------" << endl;
	cout << " 4.laptop HP 14 a tan solo $9490+ regalo 1 antivirus norton por 1 año" << endl;
	cout << " procesador core i3 ,DD500 GB,RAM 8 GB  " << endl;
	cout << " --------------------------------------------------------------------------------------------------" << endl;
	cout << " cuantos productos  quieres comprar 1 o 2 " << endl;
	cin >> can_productos;	
	
	pedir(can_productos);
	
}

int pedir(int can_pro){
	int producto,cant,cantidad=0,venta_Total,	venta_T;
	int i=0,su;
	do {
		if (can_pro>=0 && can_pro<3) {
			
			cout << " producto " << i+1<< " que deseas comprar " << endl;
			cin >> producto;
			
			if (can_pro==1) {
				cant = 1;
			} else {
				cout << " cuantos deseas comprar " << endl;
				cin >> cant;
			}
				venta_Total= calculo(producto,cant);/////
				venta_T=venta_T+venta_Total;
			i = i+1;
			if (cant>can_pro) {
				cout << " no puedes comprar esa cantidad como maximo elegistes " << can_pro << endl;
				i = i-1;
			} else {
				cantidad = cantidad+cant;
			}
		
			   
	
		} else {
			cout << " no puedes comprar  " << can_pro<< " solo puedes compar 2 como maximo" << endl;
			cantidad = 0;
			can_pro = 0;
		}
		 
	
	} while (cantidad<can_pro);
		detalles(venta_T,cantidad);/////////////////////
}

int calculo(int product,int cant1){
			int venta_pro;
			int pago,descuento,ven_total;
			
			if (product==1) {
			    venta_pro = cant1*precios[0];
			    msj1=msj1+1;
				           
			}
			if (product==2) {
				venta_pro = cant1*precios[1];
				cout << "  con que metodo de pago que desea pagar el primer producto " << endl;
				cout << "         1.tarjeta de crédito o débito   2.efectivo " << endl;
				cin >> pago;
				if (pago==1) {
					cout << " gracias por pagar con tarjeta de crédito o debito" << endl;
					descuento = venta_pro*.10;
					venta_pro = venta_pro-descuento;
				} else {
					cout << "       <<<< gracias por pagar en efectivo >>>>" << endl;
				}
				msj2=msj2+1;
			}
			if (product==3) {
				venta_pro = cant1*precios[2];
				cout << " >> gracias por comprar este producto de regalo te daremos una mochila (1) o audiofonos (2) cual quiere? elige con numeros" << endl;
				cin >> regalo;
				if (regalo==1) {
					cout << " usted eligio una mochila" << endl;
				} else {
					cout << " usted eligio unos audiofonos" << endl;
				}
				msj3=msj3+1;
			}
			if (product==4) {
				venta_pro = cant1*precios[3];
				cout << " al comprar este producto regamos una licencia de antivirus Norton por 12 meses" << endl;
			msj4=msj4+1;
			}
return venta_pro; 
}

int detalles(int su,int canti){
int detalle_venta;
		
	cout << " --------------------------------------------------------------------------------------------------" << endl;
	cout << "                        deseas ver los detalles de la venta preciona 1" << endl;
	cout << " --------------------------------------------------------------------------------------------------" << endl;
	cin >> detalle_venta;
	if (detalle_venta==1) {
		
			
		
		cout << " tu pagaste un total de $" << su<< " pesos por " << canti << " articulos" << endl;
	
			
              if(msj1==1){
				cout << " 1. combo estudio tan solo $1879 pesos" << endl;
	            cout << "   escritorio para computo + silla secretaria " << endl; 
			  }
			  if(msj1==2){
				cout << " 2. combo estudio tan solo $1879 pesos" << endl;
	            cout << "   escritorio para computo + silla secretaria " << endl; 
			  }
			  
		      if(msj2==1){
				cout << " 1. combo dibujo a tan solo $2435 pesos ojo -10% al pagar con targetas debito o credito " << endl;
	            cout << " mesa de dibujo + banco metalico" << endl;
			  }
			  if(msj2==2){
			   cout << " 2. combo dibujo a tan solo $2435 pesos ojo -10% al pagar con targetas debito o credito " << endl;
	           cout << " mesa de dibujo + banco metalico" << endl;
		      }
			
			   if(msj3==1){
				cout << " 1. laptop HP14 a tan solo $6190 pesos + oferta especial  regalo mochila o audifonos" << endl;
	            cout << " procesador intel celeron ,DD 500 GB,RAM 4 GB  " << endl;
	            if (regalo==1) {
					cout << " usted eligio una mochila" << endl;
				} else {
					cout << " usted eligio unos audiofonos" << endl;
				}
	            
				}
				if(msj3==2){
				  cout << " 2. laptop HP14 a tan solo $6190 pesos + oferta especial  regalo mochila o audifonos" << endl;
	              cout << " procesador intel celeron ,DD 500 GB,RAM 4 GB  " << endl;
	              if (regalo==1) {
					cout << " usted eligio una mochila" << endl;
				} else {
					cout << " usted eligio unos audiofonos" << endl;
				}
				}
				
			
	           if(msj4==1){
				 cout << " 1.laptop HP 14 a tan solo $9490+ regalo 1 antivirus norton por 1 año" << endl;
	             cout << " procesador core i3 ,DD500 GB,RAM 8 GB  " << endl;
			    }
				if(msj4==2){
				    cout << " 2.laptop HP 14 a tan solo $9490+ regalo 1 antivirus norton por 1 año" << endl;
	              cout << " procesador core i3 ,DD500 GB,RAM 8 GB  " << endl;
			    }
			
   }	
}


