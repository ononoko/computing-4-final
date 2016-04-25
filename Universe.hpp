#include <SFML/Graphics.hpp>
#include <string>
#include <vector>
#include <iostream>

namespace Computing4Final : public sf::Drawable {

class Universe {
 public:
  Universe();
  // using the file at filepath, instantiate elements in bodies_
  Universe(double t, double delta_t, std::string filepath);
  // runs the universe simulation by calling update_universe(), then draw()
  // draw window loops runs in here
  // if time_elapsed >= t_, kill simulation in here
  void run();
  // calls step() on each Body in bodies_ vector with arg delta_t_
  void update_universe();
  // given universe coordinates, return sfml vector
  sf::Vector2f get_sfml_coords(double x_coord, double y_coord);
  // prints an equivalent of the input for the universe after runing the simulation
  std::ostream& print_universe_data();
 private:
  // iterate through both bodies_ and stars_ vectors and call their draw() functions
  virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
  std::vector<Body> bodies_;
  std::vector<Star> stars_;
  double t_;
  double delta_t_;
  double time_elapsed_;
  std::string filepath_;
};

}
