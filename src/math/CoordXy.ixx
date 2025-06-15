export module CoordXy;

export class CoordXy {
public:
    CoordXy():m_x(0.0),m_y(0.0){}
    double X()const { return m_x;}
    double Y()const { return m_y;}
private:
    double m_x;
    double m_y;
};