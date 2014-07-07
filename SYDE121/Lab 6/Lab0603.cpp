#include <iostream>

using namespace std;

int main(){
  double cruisingSpeed = 0;
  double windSpeed = 0;
  double windDirection = 0;
  double flightDistance = 0;
  double flightDirection = 0;

  cout << "This program will compute the necessary heading adjustment for your flight, and provide the estimated flight time." << " \n \n"
       << "Enter the aircraft cruising speed in still air (in km/h): ";
    cin >> cruisingSpeed;
    cout <<"cruising speed = " << cruisingSpeed << "\n \n";

    cout << "Enter the wind speed in km/h:  ";
    cin >> windSpeed;
    cout << "wind speed = " << windSpeed << " \n \n";

    cout << "Enter 1 if the wind is blowing from the West and -1 if wind is blowing from the East: ";
    cin >> windDirection;
    switch (windDirection){
      case 1:
	cout << "The wind is blowing from the East.";
	break;
      case -1:
	cout << "The wind is blowing from the West.";
	break;
      default:
	break;
    }
    
    cout << "Enter the distance between the originating and destination cities, in km: ";
    cin >> flightDistance;
    cout << "flight distance = " << flightDistance;

    cout << "Enter the compass direction of the destination city, relative to the originating cities, using the following values: \n"
	 << "1: ENE \n" << "2: NE \n" << "3: NNE \n" << "4: N \n" << "5: NNW \n" << "6: NW \n" << "7: WNW \n" << "8: W \n" << "9: WSW \n"
	 << "10: SW \n" << "11: SWS \n" << "12: S \n" << "13: SSE \n" <<  "14: SE \n" << "15: ESE \n" << "16: E \n";

 
}
