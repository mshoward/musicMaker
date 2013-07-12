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
		
		//generates the song
		void genSong();
		
		void writeSongFlac();
		void writeSongMidi();
		//accessors and setters
		
		//returns the theme beginning at position x, or 0
		Theme& operator[] (int x);
}
