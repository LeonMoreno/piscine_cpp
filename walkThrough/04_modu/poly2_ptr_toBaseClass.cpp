/**
 * https://cplusplus.com/doc/tutorial/polymorphism/
 */

#include <iostream>

class Polygon {
	protected:
		int width, height;
	public:
		void	set_values( int a, int b) {
		width = a; height = b; }
};

class Rectangle : public Polygon {
	public:
		int	area() {
			return width*height;
		}
};

class Triangle : public Polygon {
	public:
		int	area() {
			return width*height / 2;
		}
};

int main( void ) {
	// Rectangle	rect;
	// Triangle	tri;

	// Polygon * ptr1 = &rect;
	// Polygon * ptr2 = &tri;

	Polygon *ptr1 = new Rectangle();
	Polygon *ptr2 = new Triangle();

	std::cout << "size Poly = " << sizeof(Polygon) << std::endl;


	// ptr1 y ptr2 son punteros de tipo Polygon y solo los
	// los miembros heredados de Polygon pueden ser accesibles
	// desde estos ptr y no aquellos miembros propios de Rec y Tri.
	ptr1->set_values(4, 5);
	ptr2->set_values(4,5);

	// La funcion area no existe en Polygon
	// Es por lo anterio que aqui no puedeo acceder desde el PTR;
	std::cout << ptr1->area() << std::endl;
	std::cout << ptr2->area() << std::endl;
	return (0);

}
