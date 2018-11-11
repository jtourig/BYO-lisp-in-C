/* 
 * ch5 first example of how to build a grammar with 
 * mpc - 'Micro Parser Combinators' - https://github.com/orangeduck/mpc 
 */

/* "Doge Speak" */

/* NOTE: not meant to be compiled (yet)

/* build adjective parser */
mpc_parser_t * Adjective = mpc_or(4,
	mpc_sym("wow"), mpc_sym("many"),
	mpc_sym("so"), mpc_sym("such")
);

/* noun parser */
mpc_parser_t * Noun = mpc_or(5,
	mpc_sym("lisp"), mpc_sym("language"),
	mpc_sym("book"), mpc_sym("build"),
	mpc_sym("c")
);

/* phrase parser for adj and nouns */
mpc_parser_t* Phrase = mpc_and(2, mpcf_strfold, Adjective, Noun, free);

/* Doge parser takes 0 or more  of the other parser */
mpc_parser_t * Doge = mpc_many(mpcf_strfold, Phrase);
