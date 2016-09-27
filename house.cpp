#include <iostream>

class Rectangle{
	public:
	  Rectangle(int height, int length);
	  ~Rectangle();
	  int getArea();
	  void setHeight(int height);
	  void setLength(int length);
	  int getHeight();
	  int getLength();
	  void printRectangle();

	private:
	  int height;
	  int length;
};

Rectangle::Rectangle(int hei, int len){
	height=hei;
	length=len;
	std::cout<<"Object Created" <<std::endl;
}

Rectangle::~Rectangle(){
	std::cout<<"does it deconstruct?"<<std::endl;
}

int Rectangle::getArea(){
	return height*length;
}

void Rectangle::setHeight(int hei){
	height=hei;
}

void Rectangle::setLength(int len){
	length=len;
}

int Rectangle::getHeight(){
	return height;
}

int Rectangle::getLength(){
	return length;
}

void Rectangle::printRectangle(){
	std::cout<<"Length is: " + getLength() << std::endl;
	std::cout<<"Height is: " + getHeight() << std::endl;
	std::cout<<"Area is: " + length*height <<std::endl;
}

int main(){
	Rectangle derp(5,4);
	std::cout<<"Length is: "<<derp.getLength()<<std::endl<<"And the height is: "<<derp.getHeight()<<std::endl;
	return 0;
}
