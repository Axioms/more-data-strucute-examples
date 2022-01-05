#include <string>
#include <iostream>
#include "bst.h"

int main() {
	std::string words[] = {
  "now",
  "even",
  "back",
  "also",
  "after",
  "any",
  "come",
  "because",
  "day",
  "its",
  "give",
  "first",
  "how",
  "most",
  "look",
  "new",
  "think",
  "over",
  "other",
  "only",
  "our",
  "then",
  "than",
  "these",
  "want",
  "us",
  "two",
  "use",
  "well",
  "way",
  "work"
};
	binary_search_tree<std::string> bst;
	for (int i = 0; i < 31; i++) {
		bst.insert(words[i]);
	}
	print(bst.get_root(), 0);
	return 0;
}