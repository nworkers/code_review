#ifndef SHOPPING_H_
#define SHOPPING_H_

#include <vector>
#include <functional>
#include "./goods.h"

// Shopping class presents List of shopping.
// Example:
//     Shopping tobuylist;
//     Goods obj1;
//     Goods obj2;
//     ...
//     tobuylist.PushList(obj1);
//     tobuylist.PushList(obj2);
//     tobuylist.PrintList();
class Shopping{
 public:
  void PushList(Goods object);
  Goods GetLastElement();
  void PrintList();
  static bool CompareByPrice(Goods &good1, Goods &good2);
  static bool CompareByIndex(Goods &good1, Goods &good2);
  void SortByPrice();
  void SortByIndex();
  
  void Sort(std::function<bool(Goods &, Goods&)> comparer);
 private:
  std::vector<Goods> shopping_list_;
};

#endif  // SHOPPING_H_
