#include <conio.>
#include <cstdio.h>
#include <iostream.h>
#include <string.h>
#include <stdlib.h>

static int p = 0;

class a {
private:
  /* data */
  char busn[5], driver[10], arrival[5], depart[5], from[10], to[10], seat[8][4][10];

public:

  void install();
  void allotment();
  void empty();
  void show();
  void avail();
  void position(int i);
  a (arguments);
  virtual ~name_t ();
};
bus[10];
void vline(char ch){
  for (int i = 80; i > 0; i--) {
    /* code */
    cout <<ch;
  }
}

void a::install(){
  std::cout << "Enter bus no: ";
  std::cin >> bus[p].busn;
  std::cout << "/nEnter Driver's name: ";
  std::cin >> bus[p].driver;
  std::cout << "/nArrival time: ";
  std::cin >> bus[p].arrival;
  std::cout << "/nDeparture: ";
  std::cin >> bus[p].depart;
  std::cout << "/nFrom: \t\t\t";
  std::cin >> bus[p].from;
  std::cout << "/nTo: \t\t\t";
  std::cin >> bus[p].to;
  bus[p].empty();
  p++;
}

void a::allotment(){
  int seat;
  char number [5];
  top:
  std::cout << "Bus no: ";
  std::cin >> number;
  for (int n = 0; n <= p; n++) {
    /* code */
    if (strcmp(bus[n].busn, number) == 0)
      break;
    }
    while(n<=p){
      std::cout << "\nSeat Number: ";
      std::cin >> seat;
      if (seat > 32) {
        /* code */
        std::cout << "There are only 32 seats available in this bus. " << '\n';
      }else{
        if (strcmp(bus[n].seat[seat/4][(seat%4)-1], "Empty") == 0) {
          /* code */
          std::cout << "Enter passanger's name: ";
          std::cin >> bus[n].seat[seat/4][(seat%4) -1];
          break;
        }else{
          std::cout << "The seat no. is already reserved." << '\n';
        }
      }
      if (n>p) {
        /* code */
        std::cout << "Enter correct bus no." << '\n';
        goto top;
      }
}
 void a:: empty()
