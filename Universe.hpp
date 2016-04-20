#include <string>

namespace Computing4Final {

class Universe {
 public:
  Universe();
  Universe(double t, double delta_t, std::string filepath);
 private:
  double t_;
  double delta_t_;
  std::string filepath_;
};

}
