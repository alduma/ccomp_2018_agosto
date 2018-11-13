#ifndef POINT_H
#define POINT_H
template <typename Tipodato>
class Point
{
    public:
        Point(){
            x = 0;
            y = 0;
        }
        Point(Tipodato xh, Tipodato yh){
            x=xh;
            y=yh;
        }
        Point(Point &o){
            x = o.x;
            y = o.y;
        }

        Tipodato print();
        Tipodato offset(Tipodato, Tipodato);
        Tipodato getX();
        Tipodato getY();
        Tipodato setX(Tipodato x);
        Tipodato setY(Tipodato y);

    private:
        Tipodato x, y;
};

#endif // POINT_H
