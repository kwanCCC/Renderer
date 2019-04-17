#include "tga.h"

const TGAColor white = TGAColor(255, 255, 255, 255);
const TGAColor red = TGAColor(255, 0, 0, 0);

void aliased_line();

void anti_aliased_line();

int main(int argc, char** argv) {
  char* a = "test";
  aliased_line();
  anti_aliased_line();
  return 0;
}

void aliased_line() {
  TGAImage image(100, 100, TGAImage::RGB);
  image.line(50, 10, 60, 90, red);
  // image.flip_horizontally();
  image.write_tga_file("output_aliased.tga");
}

void anti_aliased_line() {
  TGAImage image(100, 100, TGAImage::RGBA);
  image.anti_aliasing_line(50.0, 10.0, 60.0, 90.0, red);
  // image.flip_horizontally();
  image.write_tga_file("output_anti_aliased.tga");
}