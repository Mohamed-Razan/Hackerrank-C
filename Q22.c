// Question: https://www.hackerrank.com/challenges/too-high-boxes/problem




struct box
{
	/**
	* Define three fields of type int: length, width and height
	*/
    int height, width, length;
};

typedef struct box box;

int is_lower_than_max_height(box b) {
    /**
    * Return 1 if the box's height is lower than MAX_HEIGHT and 0 otherwise
    */
    if(b.height < MAX_HEIGHT)
        return 1;
    else
        return 0;
}

int get_volume(box b) {
	/**
	* Return the volume of the box
	*/
    if(is_lower_than_max_height(b)){
        return b.height * b.width * b.length;
    }
    else
        return 0;
}



