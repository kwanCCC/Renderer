#include "tga.h"

const TGAColor white = TGAColor(255, 255, 255, 255);
const TGAColor red = TGAColor(255, 0, 0, 255);

int main(int argc, char **argv)
{
    TGAImage image(500, 500, TGAImage::RGB);
    image.line(100, 100, 110, 105, red);
    // image.flip_horizontally();
    // image.flip_vertically();
    image.write_tga_file("output.tga");
    return 0;
}