//Mason Howard

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
};

class Song
{
	public:
		Theme * themes;
		int length;
		int * positions;
	
};

