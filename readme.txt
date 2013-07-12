	This is a side c++ project of mine, a simple rng that instead of numbers,
generates full songs.

	It should output two files:
		a midi file of the song
		a fLaC file of the song, rendered with common 8 bit music (think oldschool mario)

	It'll be command line based.

	Here's my basic idea:
	struct note
	{
		char note;
		char length;
	};
	struct theme
	{
		note * notes;
		int length;
		int position;
	};
	
	struct song
	{
		theme * song;
		int length;
		int * positions;
	};
