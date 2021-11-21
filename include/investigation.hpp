// Copyright 2021 Your Name <your_email>

#ifndef INCLUDE_INVESTIGATION_HPP_
#define INCLUDE_INVESTIGATION_HPP_

#include <iostream>
#include <string>
#include <stdlib.h>
#include <vector>
#include <ctime>
using namespace std;
const vector <size_t> cache_size { 512 * 1024,          // L1
                                  2 * 1024 * 1024,      // L2
                                  48 * 1024 * 1024 };   // L3

const size_t iteration = 1000;

class Investigation
{
 private:
  string _travel_variant;
  vector <size_t> _buffer_size;      // объём буфера
  vector <double> _duration;         // время
 public:
  explicit Investigation(string travel_variant="");
  ~Investigation();
  void direction();
  void reverse();
  void random();
  void print(ostream& os);
};

#endif // INCLUDE_INVESTIGATION_HPP_
