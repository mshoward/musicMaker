#include <iostream>
#include <chrono>
#include <random>

Song::Song()
{
  	themes = 0;
	length = 0;
	positions = 0;
	seed = std::chrono::system_clock::now().time_since_epoch().count()
}

Song::~Song()
{
}

Song::genSong()
{
}

Song::writeSong()
{
}
