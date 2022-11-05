#include "Header_Files/pedido.h"
#include <iostream>
#include <stdlib.h>



//variable statica para contabilizar las veces que se instancia la clase
int Pedido::Id = 0;




//Default Constructor
Pedido::Pedido(){
	
	Fecha = "";
	SubTotal =   0;
	Iva = 0;
	PrecioTotal = 0;
	
}


//Custom Constructor
Pedido::Pedido( int id_libro, int id_cliente, int tipo_orden, int cantidad){
	Id++;
	IdPedido = Id;
	Id_Libro = id_libro;
	Id_Cliente = id_cliente;
	Fecha = ""  ;
	TipoOrden = tipo_orden;
	Cantidad = cantidad;
	SubTotal =  0;
	Iva = 0;
	PrecioTotal = 0;
	
}



//==============================================================
//Funcion para validar si el dato ingresado es de tipo integer
//==============================================================
int fnValidateIntegerd(){
	int variable;
	
	while(true){
				
		if(std::cin >> variable && (variable > 0 && variable < 8)){	
			break;
		}else{
			std::cout << "El dato ingresado no es una opcion valida, por favor ingrese un numero valido." << std::endl;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		
		}
	}	
	return variable;

}




//===========================================================================================
//								Getters & Setters
//=============================================================================================
	//Id
	int Pedido::getId(){
		return IdPedido;
	};
	
	//Id_Libro
	int Pedido::getIdLibro(){
		return Id_Libro;
		
	};

	
	//Id_Cliente
	int Pedido::getIdCliente(){
		return Id_Cliente;
		
	};
		

	
	//Tipo_Orden 1= Prestamo 2= Venta
	void Pedido::setTipoOrden(int tipo_orden){
		
		TipoOrden = tipo_orden;
	};
	
	int Pedido::getTipoOrden(){
		return TipoOrden;
	};	
	
		
	//Cantidad
	void Pedido::setCantidad(int cantidad){
		
		Cantidad = cantidad;
	};
	
	int Pedido::getCantidad(){
		return Cantidad;
	};	
		
		
		
	//SubTotal
	void Pedido::setSubTotal(float subtotal){
		
		SubTotal = subtotal;
	};
	
	float Pedido::getSubTotal(){
		return SubTotal;
	};
	
	//Iva
	void Pedido::setIva(float iva){
		Iva = iva;
	};
	
	float Pedido::getIva(){
		return Iva;
		
	};
	
	//PrecioTotal
	void Pedido::setPrecioTotal(float precioTotal){
		PrecioTotal = precioTotal;
	};
	
	float Pedido::getPrecioTotal(){
		return PrecioTotal;
		
	};



//=============================================================================================================================================================
//															METHODS
//=============================================================================================================================================================



Pedido Pedido::realizarPedido(CatalogoLibros catalogo_libros, CatalogoClientes catalogo_clientes){
	
	
	
		int idLibro = 0;
		int idCliente = 0;
		int cantidadLibros=0;
		int tipoPedido =0;	
		
		//Declarar variables objetos
		Libro libroSeleccionado;
		Cliente clienteSeleccionado;
		
		
		
		
		std::cout << "================================================" << std::endl;
		std::cout << "        Despacho de Inventario"  << std::endl;
		std::cout << "================================================" << std::endl <<std::endl;			
		std::cout << "A continuacion encontrara el inventario de libros " << std::endl;
	
	
		catalogo_libros.listarLibrosResumidos();
		
		std::cout << "Selecciona el id del libro que deseas despachar: " <<  std::endl;
		idLibro = fnValidateIntegerd();
		libroSeleccionado =  catalogo_libros.obtenerLibro(idLibro);
		
		system("cls");
				
			//=============================Datos Pedido===============================
			std::cout << "===========================================================================" <<std::endl;
			std::cout << "						Datos Pedido							" <<std::endl;
			std::cout << "===========================================================================" <<std::endl;
			std::cout << "Libro seleccionado: " << libroSeleccionado.getTitulo() <<"- Precio de Venta: " << libroSeleccionado.getPrecioVenta() << " - Precio de Prestamo: " << libroSeleccionado.getPrecioPrestamo() << " - En Stock: " << libroSeleccionado.getStock() << std::endl; 
			std::cout << "===========================================================================" << std::endl <<std::endl <<std::endl;
			
			
			
			//Seleccionar al cliente
			catalogo_clientes.listarClientes();
			std::cout << std::endl << std::endl;
			std::cout << "Selecciona el id del Cliente al que deseas despachar: " << std::endl;
			idCliente = fnValidateIntegerd();
			clienteSeleccionado = catalogo_clientes.obtenerCliente(idCliente);
			system("cls");	
			
			//=============================Datos Pedido===============================
			std::cout << "===========================================================================" <<std::endl;
			std::cout << "						Datos Pedido							" <<std::endl;
			std::cout << "===========================================================================" << std::endl;
			std::cout << "Libro: " << libroSeleccionado.getTitulo() << " - Precio de Venta: " << libroSeleccionado.getPrecioVenta() << " - Precio de Prestamo: " << libroSeleccionado.getPrecioPrestamo() << " - En Stock: " << libroSeleccionado.getStock() << std::endl; 
			std::cout << "Cliente: " << clienteSeleccionado.getNombre() << " - NIT: " << clienteSeleccionado.getNIT() << std::endl;
			std::cout << "===========================================================================" << std::endl <<std::endl <<std::endl;
			
			std::cout << "Selecciona la cantidad de ese libro deseas despachar: " << std::endl;
			//Seleccionar el tipo de pedido
			cantidadLibros = fnValidateIntegerd();
			
			system("cls");
			
				//=============================Datos Pedido===============================
			std::cout << "===========================================================================" <<std::endl;
			std::cout << "						Datos Pedido							" <<std::endl;
			std::cout << "===========================================================================" <<std::endl;
			std::cout << "Libro: " << libroSeleccionado.getTitulo() << " - Precio de Venta: " << libroSeleccionado.getPrecioVenta() << " - Precio de Prestamo: " << libroSeleccionado.getPrecioPrestamo() << " - En Stock: " << libroSeleccionado.getStock() << std::endl; 
			std::cout << "Cliente: " << clienteSeleccionado.getNombre() << " - NIT: " << clienteSeleccionado.getNIT() << std::endl;
			std::cout << "Cantidad: " << cantidadLibros << std::endl;
			std::cout << "===========================================================================" << std::endl <<std::endl <<std::endl;
			
			
			std::cout << "Selecciona el tipo pedido: " << std::endl;
			
			std::cout << "========================================" << std::endl;
			std::cout << "   Tipo de Pedido   " << std::endl;
			std::cout << "========================================" << std::endl;
			std::cout << "1. Prestamo" << std::endl;
			std::cout << "2. Venta" << std::endl;
			std::cout << "========================================" << std::endl << std::endl;
			// seleccion la cantidad de libros
			tipoPedido = fnValidateIntegerd();
			
			system("cls");
			
				//=============================Datos Pedido===============================
			std::cout << "===========================================================================" <<std::endl;
			std::cout << "						Datos Pedido							" <<std::endl;
			std::cout << "===========================================================================" <<std::endl;
			std::cout << "Libro: " << libroSeleccionado.getTitulo() << " - Precio de Venta: " << libroSeleccionado.getPrecioVenta() << " - Precio de Prestamo: " << libroSeleccionado.getPrecioPrestamo() << " - En Stock: " << libroSeleccionado.getStock() << std::endl; 
			std::cout << "Cliente: " << clienteSeleccionado.getNombre() << " - NIT: " << clienteSeleccionado.getNIT() << std::endl;
			std::cout << "Cantidad: " << cantidadLibros <<std::endl;
			if(tipoPedido == 1){
				std::cout << "Tipo Pedido: Prestamo " <<std::endl;
			}
			if(tipoPedido == 2){
				std::cout << "Tipo Pedido: Venta " <<std::endl;	
					
			}
			std::cout << "===========================================================================" << std::endl <<std::endl <<std::endl;
			
				
				Pedido pedido = Pedido(libroSeleccionado.getId(),clienteSeleccionado.getId(),tipoPedido,cantidadLibros );
				
				
				if(pedido.getTipoOrden() == 1){
				
					float iva = libroSeleccionado.getPrecioPrestamo() * 0.12;
					float subTotal = libroSeleccionado.getPrecioPrestamo() * cantidadLibros;
					float precioTotal = subTotal + iva;
					 	
					pedido.setIva(iva);
					pedido.setSubTotal(subTotal);
					pedido.setPrecioTotal(precioTotal);
					
					

				}
				
				if(pedido.getTipoOrden() == 2){
					
					float iva = libroSeleccionado.getPrecioPrestamo() * 0.12;
					float subTotal = libroSeleccionado.getPrecioVenta() * cantidadLibros;
					float precioTotal = subTotal + iva;
					 	
					pedido.setIva(iva);
					pedido.setSubTotal(subTotal);
					pedido.setPrecioTotal(precioTotal);
				
					
				}	
				
				
				
				
				
		return pedido;
	
	


	
	
	
}	
	
	
	
	
	
	
	

	
	
	
	
	
	
	
	




