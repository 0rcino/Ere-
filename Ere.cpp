#include <iostream>
#include <chrono>
#include <thread>

using namespace std;

int main()
{
  cout << "Tatlong bilyon ikaw lamang ang aking gusto," << endl;
  this_thread::sleep_for(chrono::seconds(2)); // Delay for 2 seconds
  cout << "Pasensya na kung ngayon ako'y di para saiyo " << endl;
  this_thread::sleep_for(chrono::seconds(2));
  cout << "Tayo ay papunta na sa'ting bagong yugto " << endl;
  this_thread::sleep_for(chrono::seconds(2));
  cout << "Yokong mabuhay sa isang mundong walang tayo " << endl;
  this_thread::sleep_for(chrono::seconds(2));
  cout << "Pasensya na kung ngayon ako'y di para sa'yo  " << endl;
  this_thread::sleep_for(chrono::seconds(2));
  cout << "Tayo ay papunta na sa'ting bagong yugto " << endl;
  this_thread::sleep_for(chrono::seconds(2));
  cout << "Yokong mabuhay sa isang mundong walang tayo " << endl;
  this_thread::sleep_for(chrono::seconds(2));
  cout << "Di ba? Nakakaputang ina: " << endl;
  this_thread::sleep_for(chrono::seconds(2));
  cout << "ayaw ko na mag IT hahahahah by Allen " << endl;
}
