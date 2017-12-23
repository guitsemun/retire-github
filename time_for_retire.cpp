// C++ Program to calculate the weeks that you need to retire

#include <QApplication>
#include <QLabel>
#include <QWidget>
#include <QPushButton>
#include <QTextEdit>
//#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	int age,wretire;
	QApplication app(argc,argv);

	//QTextEdit *txt =new QTextEdit();
	//txt.setGeometry(190,20,120,40);
	//txt->setText("Hello, world!");
	//txt->append("Appending some text…");

	//txt->show();
	
	QWidget ventana;
    	ventana.resize(400,400);
	ventana.setWindowTitle("GUI Retire Program");

	QPushButton boton_calcular("Calculate", &ventana);
    	//boton_calcular.resize(100, 50);
	boton_calcular.setFont(QFont("Times", 18, QFont::Bold));
    	boton_calcular.setGeometry(70,200,120,40);

	QPushButton boton_salir("Exit", &ventana);
    	//boton_salir.resize(100, 50);
	boton_salir.setFont(QFont("Times", 18, QFont::Bold));
    	boton_salir.setGeometry(190,200,120,40);

	QLabel messageAge("Age:",&ventana);
	messageAge.setGeometry(10,10,150,150);

	QObject::connect(&boton_salir, SIGNAL(clicked()), &app, SLOT(quit()));

	ventana.show();
	//cout<<"\nGUI Retire Program\n";
	//cout<<"Age: ";
	//cin>>age;
	wretire=(60-age)*52;
	//cout<<"Weeks to retire: "<<wretire;
	//cout<<"\n";    
	return app.exec();
}
/*

#include <QApplication>
#include <QLabel>
#include <QWidget>
 
int main(int argc, char *argv[ ])
{
  QApplication app(argc, argv);
  QLabel hola("<center>Bienvenido a mi primera aplicaci&oacute;n en QT</center>");
  hola.setWindowTitle("Mi primer programa");
  hola.resize(400, 400);
  hola.show();	
  return app.exec();
}*/

/******** widget_ventana.cpp **********/
/*
#include <QApplication>
#include <QPushButton>
#include <QFont>
#include <QWidget>

int main(int argc, char *argv[])

{

    QApplication aplicacion(argc, argv);
    QWidget ventana;
    ventana.resize(300,200);
    QPushButton boton_salir("Salir", &ventana);
    boton_salir.resize(200, 130);
    boton_salir.setFont(QFont("Times", 18, QFont::Bold));
    boton_salir.setGeometry(20,50,150,40);
    QObject::connect(&boton_salir, SIGNAL(clicked()), &aplicacion, SLOT(quit()));
    ventana.show();
    return aplicacion.exec();

}*/
