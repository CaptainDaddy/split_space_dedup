#ifndef _SPACEJMSDED_H_
#define _SPACEJMSDED_H_
//Joshua Michael Suggs
//Deduplication for 4 dimensional finite sets (vectors)
//spaceJMSded.h
//this header defines a library for deduplicating a 3 dimensional space of integers
//some operations involving prefiltering may be done elsewhere

//for reasons that do not concern you (unless you are me) I am planning on using this
//class inside of a ruby program


class pixel_space{
	public:
		pixel_space();
		pixel_space(int ***);
		pixel_space(int ***, char *);
		int *** get_data();
		int *** set_data();
		char * prcessing_status();
		unsigned int color_width();
		unsigned int color_mode();
		unsigned int color_mean();		
	private:
		int *** data_space;
		int operations_flag;//use bits to determine what has been done to the data
		int ** color_shifts;
		char * info;//information about what has been done to this space
}
#endif
