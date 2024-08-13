#include <iostream>
using namespace std;
class Temperature {
private:
    int temperature = 0;
public:
    Temperature(int temperature) {
      setTemperature(temperature);
    }

    Temperature(){

    }

    int getTemperature(){
      return this->temperature;
    }

    void setTemperature(int temperature) {
      this->temperature = temperature;
    }
};

int main(){
  Temperature temp1;
  Temperature temp2(100000);
  cout << temp1.getTemperature() << "\n";

  cout << temp2.getTemperature() << "\n";

}