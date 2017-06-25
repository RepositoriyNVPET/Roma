#include "iostream"
using namespace std;

class Numbers {

  private:
    int numbers[255];
    int n;
  public:
    void inputData() {
      do {
        cout<<endl<<"¬каж≥ть розм≥рн≥сть р€дка: ";
        cin>>n;
      }while(n >= 255);
      cout<<"¬вед≥ть числа: "<<endl;
      for(int i = 0; i < n; i += 2) {
        cin>>numbers[i];
      }
    }

    void sum() {
      int sum = 0;
      for(int i = 0; i < n; i += 2) {
        sum += numbers[i];
      }
      cout<<"—ума чисел: "<<sum;
    }
};

int main() {
		setlocale(0,"");
  Numbers first;
  first.inputData();
  first.sum();
}
