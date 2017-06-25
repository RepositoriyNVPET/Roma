#include "iostream"
using namespace std;

void showMenu();

int _roz = 5;

class Mas {
  private:
    int *mas;
  public:
    Mas() {
      mas = new int[_roz];
    }
    void inputMas();
    void outputMas();
    void minElem();
    void maxElem();
    void sort();
    void findEl();
    void countDr();
};

void Mas::inputMas() {
  cout<<"Input Mas"<<endl;
  for(int i = 0; i < _roz; i++) {
    cout<<i<<": ";
    cin>>mas[i];
    cout<<endl;
  }
  cout<<endl;
}

void Mas::outputMas() {
  cout<<"Output Mas"<<endl;
  for(int i = 0; i < _roz; i++) {
    cout<<i<<": "<<mas[i]<<endl;
  }
  cout<<endl;
}

void Mas::minElem() {
  int index, el = 32000;
  
  cout<<"Output min element"<<endl;
  for(int i = 0; i < _roz; i++) {
    if(mas[i] < el) {
      index = i;
      el = mas[i];
    }
  }

  cout<<"Min element:"<<endl;
  cout<<"   Index: "<<index<<endl;
  cout<<"   Elem: "<<el<<endl;
  cout<<endl;
}

void Mas::maxElem() {
  int index, el = -32000;

  cout<<"Output max element"<<endl;
  for(int i = 0; i < _roz; i++) {
    if(mas[i] > el) {
      index = i;
      el = mas[i];
    }
  }

  cout<<"Max element:"<<endl;
  cout<<"   Index: "<<index<<endl;
  cout<<"   Elem: "<<el<<endl;
  cout<<endl;
}

void Mas::sort() {
  int tmp;

  for(int i = 0; i < _roz - 1; i++) {
    for(int j = i + 1; i < _roz; j++) {
      if(mas[i] > mas[j]) {
        tmp = mas[i];
        mas[i] = mas[j];
        mas[j] = tmp;
      }
    }
  }
}

void Mas::findEl() {
  int find;
  cout<<"Find element: ";
  cin>>find;
  cout<<endl;

  for(int i = 0; i < _roz; i++) {
    if(mas[i] == find) {
      cout<<"El :"<<mas[i]<<"\t"<<"Index: "<<i<<endl;
    }
  }
}

void Mas::countDr() {
  cout<<"Dr. elements: "<<endl;

  for(int i = 0 ; i < _roz; i++) {
    int el = mas[i];
    bool dr = false;
    for(int j = 0; j < _roz; j++) {
      if(el == mas[j]) dr = true;
    }

    if(!dr) {
      cout<<"El: "<<el<<endl;
    }
  }
}

int main() {
  Mas first;
  while(true) {
    int action;
    showMenu();
    cin>>action;
    
    switch(action) {
      case 0: return 0;
      case 1: 
        first.inputMas();
        break;
      case 2:
        first.outputMas();
        break;
      case 3:
        first.minElem();
        break;
      case 4:
        first.maxElem();
        break;
      case 5:
        first.sort();
        break;
      case 6:
        break;
      case 7:
        break;
      case 8:
        first.findEl();
        break;
      case 9:
        first.countDr();
        break;
      default:
        cout<<"Command not found!"<<endl;
    }
  }
}

void showMenu() {
  cout<<endl;
  cout<<"0 - Exit"<<endl;
  cout<<"1 - Input mas"<<endl;
  cout<<"2 - Output mas"<<endl;
  cout<<"3 - Min element"<<endl;
  cout<<"4 - Max element"<<endl;
  cout<<"5 - Sort mas"<<endl;
  cout<<"6 - ???"<<endl;
  cout<<"7 - ???"<<endl;
  cout<<"8 - Find element"<<endl;
  cout<<"9 - Count dr. element"<<endl;
}

