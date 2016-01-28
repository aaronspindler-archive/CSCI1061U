using namespace std;

class chess_loc{
  private:
    int _x;
    char _y;
  public:
    chess_loc(int x, char y){
      _x = x;
      _y = y;
    }

    chess_loc(const chess_loc& cl){
      _x = cl._x;
      _y = cl._y;
    }

    const chess_loc& operator=(const chess_loc& cl){
      _x = cl._x;
      _y = cl._y;
      return *this;
    }
    int x() {return _x;}
    char y() {return _y;}
    void x(int x1) {_x = x1;}
    void y(char y1) {_y = y1;}
    void show() {cout << "(" << x() << "," << y() << ")" << endl;}
};
