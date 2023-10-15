//-----------------------------------------------------------------------------
//
// Source code for MIPT ILab
// Slides: https://sourceforge.net/projects/cpp-lects-rus/files/cpp-graduate/
// Licensed after GNU GPL v3
//
//-----------------------------------------------------------------------------
//
//  Example for LRU cache in C++: simple driver program
//
//----------------------------------------------------------------------------

#include <cassert>
#include <iostream>
#include <string.h>
#include "cache.hpp"

// slow get page imitation
std::string slow_get_page_str(int key) {
  std::string str;
  getchar();
  std::getline(std::cin, str);
  return str; }

int main() {
  int hits = 0;
  int n;
  size_t m;

  std::cin >> m >> n;
  assert(std::cin.good());
  caches::cache_t<std::string> c{m};

  for (int i = 0; i < n; ++i) {
    std::string q;
    int key;
    std::cin >> key;
    assert(std::cin.good());
    if (c.lookup_update(key, slow_get_page_str)){
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      hits += 1;
      std::cout << c.hash_[key]->second << std::endl;
    }
      
  }

  std::cout << hits << std::endl;
}
