#pragma once
#include <iostream>
#include <string>
using namespace std;

// Klasa abstrakcyjna ze szkieletową reprezentacją prostych
// obiektów geometrycznych z co najmniej jedną osią symetrii. 
// Zakładamy, że obiekt może być scharakteryzowany przez 
// podanie 2 parametrów całkowitych a, b.
//
class FiguraSymetryczna {
protected:
  int a, b;
public:
  FiguraSymetryczna(int aa=0, int bb=0): a(aa), b(bb) {}
 
  string sygnatura() const {
    return nazwa() + "(" + to_string(a)+","+to_string(b)+")";
  }
  virtual double pole() const = 0;
  virtual double obwod() const = 0;
  virtual string nazwa() const {
    return string("FiguraSymetryczna");
  }
};

// Klasa konkretna: Prostokat.
// Parametry a, b: boki prostokąta;
// dwie osie symetrii: symetralne boków.
class Prostokat: public FiguraSymetryczna {
public:
  Prostokat(int a=0, int b=0);
  double pole() const;
  double obwod() const;
  string nazwa() const;
};

// Klasa konkretna: Trojkat (równoramienny). 
// Parametry a, b: podstawa i wysokość trójkąta;
// jedna oś symetrii: symetralna podstawy.
class Trojkat: public FiguraSymetryczna {
public:
  Trojkat(int a=0, int b=0);
  double pole() const;
  double obwod() const;
  string nazwa() const;
};
