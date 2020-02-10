#ifndef RECT_H
#define RECF_H
class Rect{
private:
	double m_dblWidth;
	double m_dblHeight;
public:
	Rect(double dblWith,double dblHeigh);
	double GetWith(){return m_dblWidth;}
	double GetHeight(){return m_dblHeight;}
	
	double CalcDiagonal();
	double CalcArea();
};

#endif

