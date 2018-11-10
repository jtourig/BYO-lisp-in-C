## chapter 3 notes

must declare types of variables and functions

structures declare new types:
	``` C
	typedef struct {
		type var1;
		type var2;
		type varN;
	} type_name;
	```
- access with dot notation

strings are represented by `char *`
- stored as list of characters, with final *null terminator*
- can be declared literally with `" "`
