#include <iostream>
#include <chrono>
#include <random>

struct Note
{
	char note;
	char length;
};

struct Theme
{
	Note * notes;
	int length;
	int position;
	char key;
	Note& operator[] (int x)
	{
		return notes[x];
	}
};

class Song
{
	public:
		Theme * themes;
		int length;
		Theme ** positions;
		unsigned seed;
		
		Song();
		~Song();
		
		void genSong();
		void writeSong();
		//accessors and setters
		Theme& operator[] (int x);
}
