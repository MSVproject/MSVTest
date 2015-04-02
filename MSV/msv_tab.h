typedef union{
   char     * cString;   /* A character string */
   int       nInteger;   /* An integer value */
   float floatval;	/* A float value added by Jane 2012-06-06 */
   char character;	/* A character added by Jane 2012-06-06*/
   CSyntaxNode *tnode;    /* Node in the syntax tree */
   enum NODETYPE  nodetype;
   enum RETURNTYPE  returntype;
} YYSTYPE;
#define	IF	258
#define	ELSE	259
#define	EMPTY	260
#define	AWAIT	261
#define	PROJECTION	262
#define	PBEGIN	263
#define	PEND	264
#define	POINTERNULL	265
#define	ARRAY	266
#define	STRUCT	267
#define	DOT	268
#define	UNION	269
#define	FOPEN	270
#define	FCLOSE	271
#define	FILEDECLARATION	272
#define	FGETS	273
#define	FPUTS	274
#define	FGETC	275
#define	FPUTC	276
#define	MORE	277
#define	DEFINE	278
#define	MY_TRUE	279
#define	MY_FALSE	280
#define	EXIST	281
#define	FRAME	282
#define	FOR	283
#define	WHILE	284
#define	DO	285
#define	REPEAT	286
#define	UNTIL	287
#define	DISPLAY	288
#define	SKIP	289
#define	THEN	290
#define	COMMA	291
#define	COLON	292
#define	INTDECLARATION	293
#define	STRDECLARATION	294
#define	POINTERDECLARATION	295
#define	CHARDECLARATION	296
#define	VOIDDECLARATION	297
#define	FLOATDECLARATION	298
#define	LISTDECLARATION	299
#define	OPEN_PAR	300
#define	CLOSE_PAR	301
#define	TIMES	302
#define	OPEN_BPAR	303
#define	CLOSE_BPAR	304
#define	OPEN_MPAR	305
#define	CLOSE_MPAR	306
#define	FUNCTION	307
#define	OVER	308
#define	CYLINDER	309
#define	OVEREP	310
#define	INTER_OR	311
#define	NON_DETERMINED	312
#define	SEND	313
#define	RECEIVE	314
#define	PROCESS	315
#define	CHANNEL	316
#define	PUT	317
#define	GET	318
#define	ERROR_TOKEN	319
#define	STRFUNCHEAD	320
#define	STRFUNCTAIL	321
#define	STRFUNCCAT	322
#define	STRFUNCCMP	323
#define	STRFUNCCPY	324
#define	STRFUNCLEN	325
#define	SIZEOF	326
#define	SYSTEM	327
#define	CEIL	328
#define	FLOOR	329
#define	ROUND	330
#define	SIN	331
#define	COS	332
#define	TAN	333
#define	ASIN	334
#define	ACOS	335
#define	ATAN	336
#define	SINH	337
#define	COSH	338
#define	TANH	339
#define	EXP	340
#define	LOG	341
#define	LOG10	342
#define	SQRT	343
#define	ATAN2	344
#define	POW	345
#define	ABS	346
#define	FABS	347
#define	LABS	348
#define	FMOD	349
#define	MODF	350
#define	LDEXP	351
#define	FREXP	352
#define	UNSIGNED	353
#define	SIGNED	354
#define	MALLOC	355
#define	FREE	356
#define	CHOP	357
#define	IMPLY	358
#define	IFF	359
#define	PROPIMPLY	360
#define	OR	361
#define	PARALLEL	362
#define	AND	363
#define	ASS_EQU	364
#define	UNITASSIGN	365
#define	CON	366
#define	ADDRESS	367
#define	NE	368
#define	EQU	369
#define	GE	370
#define	LE	371
#define	GT	372
#define	LT	373
#define	LST	374
#define	RST	375
#define	ADD	376
#define	SUB	377
#define	MUL	378
#define	DIV	379
#define	MOD	380
#define	BNE	381
#define	CHOPSTAR	382
#define	NEXT	383
#define	NEGATION	384
#define	LENGTH	385
#define	REQUEST	386
#define	FINAL	387
#define	KEEP	388
#define	ALWAYS	389
#define	HALT	390
#define	W_NEXT	391
#define	PREFIX	392
#define	PREVIOUS	393
#define	SOMETIMES	394
#define	ID	395
#define	STR	396
#define	STRUCT_TYPE	397
#define	INTEGER	398
#define	FLOATLITERAL	399
#define	CHARLITERAL	400


extern YYSTYPE yylval;