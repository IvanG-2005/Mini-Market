#include <iostream>
#include <string>
#include <iomanip> //bryan
using namespace std;

int main() {
	//Ivan
	string productos[25][2] = {
		{"Leche", "6.10"}, {"Manzana", "0.70"}, {"Lechuga", "1.00"}, {"Tomate", "0.45"},
		{"Zanahoria", "0.50"}, {"China", "0.40"}, {"Leche de cabra", "4.00"}, {"Carne de vaca", "15.00"},
		{"Carne  de cerdo", "10.00"}, {"Carne de cordero", "10.00"}, {"Cebolla", "0.60"}, {"Pan", "1.50"},
		{"Maiz", "0.70"}, {"Huevos", "5.00"}, {"Papas", "2.20"}, {"Queso", "3.25"},
		{"Espinaca", "2.15"}, {"Pimiento", "0.90"}, {"Limon", "0.50"}, {"Uvas", "4.50"},
		{"Ñame", "2.40"}, {"Yautia", "2.30"}, {"Yuca", "1.80"}, {"Batata", "1.00"}, {"Miel", "5.00"}
	};
    
	double ivu = 0.115; //Bryan
	int opcion, cantidad; //Angel 
	double total = 0.0; //Bryan 

	//Angel
	cout<< "Bienvenidos al Rincon de la compra, oprima 1 para ver los productos, para salir oprima cualquier otro numero: ";
	cin>> opcion;
	cout<<"\n";
	if (opcion == 1) {
		cout<< "Lista de productos:\n";
		cout<<"\n";
		
		//Ivan
		for (int i = 0; i < 25; i++) {
			cout<< i + 1 << ". " << productos[i][0] << " - $" << productos[i][1] <<endl;
		}

		cout<<"Elija el numero del producto que desea comprar (entre el 0 para terminar la compra): " <<endl;
		while (true) {
			int seleccionP;
			cin>>seleccionP;

			
			if (seleccionP == 0) 

			break; 

             //Angel
			if (seleccionP > 0 && seleccionP <= 25) {
				
				double precio = stod(productos[seleccionP - 1][1]);

				cout<<"Entre la cantidad de "<< productos[seleccionP - 1][0]<< ": ";
				cin>> cantidad;
				total += precio * cantidad;  
			} else {
				cout<<"Opcion no valida. Por favor entre un numero que este en la lista de productos."<< endl;
			
			    
			}
		}
        
        //Bryan
		double TotalConIvu = total + (total * ivu);

		cout<< fixed << setprecision(2) <<endl;
		cout<<"Subtotal: $"<< total <<endl;
		cout<<"IVU: $"<<total * ivu <<endl;
		cout<<"Total con IVU: $"<< TotalConIvu <<endl;
	}

	cout<< "Gracias por comprar con nosotros, vuelva pronto!" << endl;
	return 0;
}
