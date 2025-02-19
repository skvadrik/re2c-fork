/* Generated by re2c */
#include "re2c/base.h"

namespace re2c_submatch_14__alt2_4 {





#define YYMAXFILL 2


struct input_t {
    FILE* file;
    char *buf;
    char *lim;
    char *cur;
    char *mar;
    char *tok;
    char *yyt1;
char *yyt10;
char *yyt11;
char *yyt12;
char *yyt13;
char *yyt14;
char *yyt15;
char *yyt16;
char *yyt2;
char *yyt3;
char *yyt4;
char *yyt5;
char *yyt6;
char *yyt7;
char *yyt8;
char *yyt9;

    
    taglistpool_t tlp;
    int eof;
};

static inline void free_input(input_t *in) {
    free(in->buf);
    taglistpool_free(&in->tlp);
    if (in->file) fclose(in->file);
}

static inline int fill_buffered_eof(input_t *in) {
    size_t free;
    if (in->eof) return 1;

    free = in->tok - in->buf;
    assert(free > 0);

    memmove(in->buf, in->tok, in->lim - in->tok);
    in->lim -= free;
    in->cur -= free;
    in->mar -= free;
    in->tok -= free;
    if (in->yyt1) in->yyt1 -= free;
if (in->yyt10) in->yyt10 -= free;
if (in->yyt11) in->yyt11 -= free;
if (in->yyt12) in->yyt12 -= free;
if (in->yyt13) in->yyt13 -= free;
if (in->yyt14) in->yyt14 -= free;
if (in->yyt15) in->yyt15 -= free;
if (in->yyt16) in->yyt16 -= free;
if (in->yyt2) in->yyt2 -= free;
if (in->yyt3) in->yyt3 -= free;
if (in->yyt4) in->yyt4 -= free;
if (in->yyt5) in->yyt5 -= free;
if (in->yyt6) in->yyt6 -= free;
if (in->yyt7) in->yyt7 -= free;
if (in->yyt8) in->yyt8 -= free;
if (in->yyt9) in->yyt9 -= free;


    in->lim += fread(in->lim, 1, free, in->file);
    in->lim[0] = 0;

    if (in->lim < in->buf + SIZE) {
        in->eof = 1;
    }

    return 0;
}

static inline int fill_buffered_scc(input_t *in, size_t need) {
    size_t free;
    if (in->eof) return 1;

    free = in->tok - in->buf;
    assert(free >= need);

    memmove(in->buf, in->tok, in->lim - in->tok);
    in->lim -= free;
    in->cur -= free;
    in->mar -= free;
    in->tok -= free;
    if (in->yyt1) in->yyt1 -= free;
if (in->yyt10) in->yyt10 -= free;
if (in->yyt11) in->yyt11 -= free;
if (in->yyt12) in->yyt12 -= free;
if (in->yyt13) in->yyt13 -= free;
if (in->yyt14) in->yyt14 -= free;
if (in->yyt15) in->yyt15 -= free;
if (in->yyt16) in->yyt16 -= free;
if (in->yyt2) in->yyt2 -= free;
if (in->yyt3) in->yyt3 -= free;
if (in->yyt4) in->yyt4 -= free;
if (in->yyt5) in->yyt5 -= free;
if (in->yyt6) in->yyt6 -= free;
if (in->yyt7) in->yyt7 -= free;
if (in->yyt8) in->yyt8 -= free;
if (in->yyt9) in->yyt9 -= free;


    in->lim += fread(in->lim, 1, free, in->file);

    if (in->lim < in->buf + SIZE) {
        in->eof = 1;
        memset(in->lim, 0, YYMAXFILL);
        in->lim += YYMAXFILL;
    }

    return 0;
}

static inline void init_input_simple(input_t *in, const char* fname) {
    FILE* f = fopen(fname, "rb");

    fseek(f, 0, SEEK_END);
    size_t flen = (size_t) ftell(f);
    fseek(f, 0, SEEK_SET);

    in->file = nullptr; // unused
    in->buf = (char*) malloc(flen + 1);
    in->lim = nullptr; // unused
    in->cur = in->mar = in->tok = in->buf;
    in->yyt1 = 0;
in->yyt10 = 0;
in->yyt11 = 0;
in->yyt12 = 0;
in->yyt13 = 0;
in->yyt14 = 0;
in->yyt15 = 0;
in->yyt16 = 0;
in->yyt2 = 0;
in->yyt3 = 0;
in->yyt4 = 0;
in->yyt5 = 0;
in->yyt6 = 0;
in->yyt7 = 0;
in->yyt8 = 0;
in->yyt9 = 0;

    
    taglistpool_init(&in->tlp);
    in->eof = 0; // unused

    fread(in->buf, 1, flen, f);
    in->buf[flen] = 0;

    fclose(f);
}

static inline void init_input_buffered_eof(input_t *in, const char* fname) {
    in->file = fopen(fname, "rb");
    in->buf = (char*) malloc(SIZE + 1);
    in->lim = in->buf + SIZE;
    in->cur = in->lim;
    in->mar = in->lim;
    in->tok = in->lim;
    in->yyt1 = 0;
in->yyt10 = 0;
in->yyt11 = 0;
in->yyt12 = 0;
in->yyt13 = 0;
in->yyt14 = 0;
in->yyt15 = 0;
in->yyt16 = 0;
in->yyt2 = 0;
in->yyt3 = 0;
in->yyt4 = 0;
in->yyt5 = 0;
in->yyt6 = 0;
in->yyt7 = 0;
in->yyt8 = 0;
in->yyt9 = 0;

    
    taglistpool_init(&in->tlp);
    in->eof = 0;
    fill_buffered_eof(in);
}

static inline void init_input_buffered_scc(input_t *in, const char* fname) {
    in->file = fopen(fname, "rb");
    in->buf = (char*) malloc(SIZE + YYMAXFILL);
    in->lim = in->buf + SIZE;
    in->cur = in->lim;
    in->mar = in->lim;
    in->tok = in->lim;
    in->yyt1 = 0;
in->yyt10 = 0;
in->yyt11 = 0;
in->yyt12 = 0;
in->yyt13 = 0;
in->yyt14 = 0;
in->yyt15 = 0;
in->yyt16 = 0;
in->yyt2 = 0;
in->yyt3 = 0;
in->yyt4 = 0;
in->yyt5 = 0;
in->yyt6 = 0;
in->yyt7 = 0;
in->yyt8 = 0;
in->yyt9 = 0;

    
    taglistpool_init(&in->tlp);
    in->eof = 0;
}

#define YYCURSOR cur
#define YYMARKER mar
#define YYTOKEN tok
#define TLP_CLEAR() do { \
    in->tlp.next = in->tlp.head; \
     \
} while (0)

int lex_simple(input_t *in) {
    char *cur = in->buf, *mar, *tok;
    (void) mar; // maybe unused
    (void) tok; // maybe unused
    char *yyt1;
char *yyt10;
char *yyt11;
char *yyt12;
char *yyt13;
char *yyt14;
char *yyt15;
char *yyt16;
char *yyt2;
char *yyt3;
char *yyt4;
char *yyt5;
char *yyt6;
char *yyt7;
char *yyt8;
char *yyt9;

    
    const char* a1;const char* a2;const char* a3;const char* a4;const char* b1;const char* b2;const char* b3;const char* b4;const char* c1;const char* c2;const char* c3;const char* c4;const char* d1;const char* d2;const char* d3;const char* d4;
    
    long count = 0;
loop:
    tok = cur;
    
{
	char yych;
	yych = *YYCURSOR;
	switch (yych) {
		case 0x00: goto yy1;
		case '\n':
			yyt1 = NULL;
			yyt2 = NULL;
			yyt3 = NULL;
			yyt4 = YYCURSOR;
			yyt5 = NULL;
			yyt6 = NULL;
			yyt7 = NULL;
			yyt8 = YYCURSOR;
			yyt9 = YYCURSOR;
			yyt10 = NULL;
			yyt11 = NULL;
			yyt12 = NULL;
			yyt13 = YYCURSOR;
			yyt14 = NULL;
			yyt15 = NULL;
			yyt16 = NULL;
			goto yy4;
		case 'a':
			yyt8 = YYCURSOR;
			goto yy5;
		case 'b':
			yyt1 = NULL;
			yyt2 = NULL;
			yyt3 = NULL;
			yyt4 = YYCURSOR;
			yyt8 = YYCURSOR;
			yyt9 = YYCURSOR;
			yyt10 = NULL;
			yyt11 = NULL;
			yyt12 = NULL;
			yyt14 = YYCURSOR;
			goto yy6;
		case 'c':
			yyt1 = NULL;
			yyt2 = NULL;
			yyt3 = NULL;
			yyt5 = YYCURSOR;
			yyt8 = YYCURSOR;
			yyt9 = YYCURSOR;
			yyt10 = NULL;
			yyt11 = NULL;
			yyt12 = NULL;
			yyt15 = YYCURSOR;
			goto yy7;
		case 'd':
			yyt1 = NULL;
			yyt2 = NULL;
			yyt3 = NULL;
			yyt6 = YYCURSOR;
			yyt8 = YYCURSOR;
			yyt9 = YYCURSOR;
			yyt10 = NULL;
			yyt11 = NULL;
			yyt12 = NULL;
			yyt16 = YYCURSOR;
			goto yy8;
		default: goto yy2;
	}
yy1:
	++YYCURSOR;
	{ return count; }
yy2:
	++YYCURSOR;
yy3:
	{ return -1; }
yy4:
	++YYCURSOR;
	a1 = yyt8;
	a2 = yyt9;
	b1 = yyt1;
	b2 = yyt10;
	c1 = yyt2;
	c2 = yyt11;
	d1 = yyt3;
	d2 = yyt12;
	a3 = yyt13;
	a4 = yyt4;
	b3 = yyt14;
	b4 = yyt5;
	c3 = yyt15;
	c4 = yyt6;
	d3 = yyt16;
	d4 = yyt7;
	{
        if (a1)      { OUTC('A'); OUTS(a1, a2); }
        else if (b1) { OUTC('B'); OUTS(b1, b2); }
        else if (c1) { OUTC('C'); OUTS(c1, c2); }
        else if (d1) { OUTC('D'); OUTS(d1, d2); }
        if (a3)      { OUTC('A'); OUTS(a3, a4); }
        else if (b3) { OUTC('B'); OUTS(b3, b4); }
        else if (c3) { OUTC('C'); OUTS(c3, c4); }
        else if (d3) { OUTC('D'); OUTS(d3, d4); }
        OUTC('\n');
        goto loop;
    }
yy5:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case '\n':
		case 'a':
		case 'b':
		case 'c':
		case 'd': goto yy10;
		default: goto yy3;
	}
yy6:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case '\n':
		case 'a':
		case 'b':
		case 'c':
		case 'd': goto yy17;
		default: goto yy3;
	}
yy7:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case '\n':
		case 'a':
		case 'b':
		case 'c':
		case 'd': goto yy19;
		default: goto yy3;
	}
yy8:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case '\n':
		case 'a':
		case 'b':
		case 'c':
		case 'd': goto yy21;
		default: goto yy3;
	}
yy9:
	yych = *++YYCURSOR;
yy10:
	switch (yych) {
		case '\n':
			yyt1 = NULL;
			yyt2 = NULL;
			yyt3 = NULL;
			yyt4 = YYCURSOR;
			yyt5 = NULL;
			yyt6 = NULL;
			yyt7 = NULL;
			yyt9 = YYCURSOR;
			yyt10 = NULL;
			yyt11 = NULL;
			yyt12 = NULL;
			yyt13 = YYCURSOR;
			yyt14 = NULL;
			yyt15 = NULL;
			yyt16 = NULL;
			goto yy4;
		case 'a': goto yy9;
		case 'b':
			yyt4 = NULL;
			yyt5 = NULL;
			yyt6 = NULL;
			yyt9 = YYCURSOR;
			yyt10 = NULL;
			yyt11 = NULL;
			yyt12 = NULL;
			yyt14 = YYCURSOR;
			goto yy12;
		case 'c':
			yyt4 = NULL;
			yyt5 = NULL;
			yyt6 = NULL;
			yyt9 = YYCURSOR;
			yyt10 = NULL;
			yyt11 = NULL;
			yyt12 = NULL;
			yyt15 = YYCURSOR;
			goto yy13;
		case 'd':
			yyt4 = NULL;
			yyt5 = NULL;
			yyt6 = NULL;
			yyt9 = YYCURSOR;
			yyt10 = NULL;
			yyt11 = NULL;
			yyt12 = NULL;
			yyt16 = YYCURSOR;
			goto yy14;
		default: goto yy11;
	}
yy11:
	YYCURSOR = YYMARKER;
	goto yy3;
yy12:
	yych = *++YYCURSOR;
	switch (yych) {
		case '\n':
			yyt1 = yyt4;
			yyt2 = yyt5;
			yyt3 = yyt6;
			yyt4 = NULL;
			yyt5 = YYCURSOR;
			yyt6 = NULL;
			yyt7 = NULL;
			yyt13 = NULL;
			yyt15 = NULL;
			yyt16 = NULL;
			goto yy4;
		case 'b': goto yy12;
		default: goto yy11;
	}
yy13:
	yych = *++YYCURSOR;
	switch (yych) {
		case '\n':
			yyt1 = yyt4;
			yyt2 = yyt5;
			yyt3 = yyt6;
			yyt4 = NULL;
			yyt5 = NULL;
			yyt6 = YYCURSOR;
			yyt7 = NULL;
			yyt13 = NULL;
			yyt14 = NULL;
			yyt16 = NULL;
			goto yy4;
		case 'c': goto yy13;
		default: goto yy11;
	}
yy14:
	yych = *++YYCURSOR;
	switch (yych) {
		case '\n':
			yyt1 = yyt4;
			yyt2 = yyt5;
			yyt3 = yyt6;
			yyt4 = NULL;
			yyt5 = NULL;
			yyt6 = NULL;
			yyt7 = YYCURSOR;
			yyt13 = NULL;
			yyt14 = NULL;
			yyt15 = NULL;
			goto yy4;
		case 'd': goto yy14;
		default: goto yy11;
	}
yy15:
	yych = *++YYCURSOR;
	switch (yych) {
		case '\n':
			yyt1 = yyt4;
			yyt2 = yyt5;
			yyt3 = yyt6;
			yyt4 = YYCURSOR;
			yyt5 = NULL;
			yyt6 = NULL;
			yyt7 = NULL;
			yyt14 = NULL;
			yyt15 = NULL;
			yyt16 = NULL;
			goto yy4;
		case 'a': goto yy15;
		default: goto yy11;
	}
yy16:
	yych = *++YYCURSOR;
yy17:
	switch (yych) {
		case '\n':
			yyt4 = NULL;
			yyt5 = YYCURSOR;
			yyt6 = NULL;
			yyt7 = NULL;
			yyt13 = NULL;
			yyt15 = NULL;
			yyt16 = NULL;
			goto yy4;
		case 'a':
			yyt5 = NULL;
			yyt6 = NULL;
			yyt8 = NULL;
			yyt9 = NULL;
			yyt10 = YYCURSOR;
			yyt11 = NULL;
			yyt12 = NULL;
			yyt13 = YYCURSOR;
			goto yy15;
		case 'b': goto yy16;
		case 'c':
			yyt5 = NULL;
			yyt6 = NULL;
			yyt8 = NULL;
			yyt9 = NULL;
			yyt10 = YYCURSOR;
			yyt11 = NULL;
			yyt12 = NULL;
			yyt15 = YYCURSOR;
			goto yy13;
		case 'd':
			yyt5 = NULL;
			yyt6 = NULL;
			yyt8 = NULL;
			yyt9 = NULL;
			yyt10 = YYCURSOR;
			yyt11 = NULL;
			yyt12 = NULL;
			yyt16 = YYCURSOR;
			goto yy14;
		default: goto yy11;
	}
yy18:
	yych = *++YYCURSOR;
yy19:
	switch (yych) {
		case '\n':
			yyt4 = NULL;
			yyt5 = NULL;
			yyt6 = YYCURSOR;
			yyt7 = NULL;
			yyt13 = NULL;
			yyt14 = NULL;
			yyt16 = NULL;
			goto yy4;
		case 'a':
			yyt4 = NULL;
			yyt6 = NULL;
			yyt8 = NULL;
			yyt9 = NULL;
			yyt10 = NULL;
			yyt11 = YYCURSOR;
			yyt12 = NULL;
			yyt13 = YYCURSOR;
			goto yy15;
		case 'b':
			yyt4 = NULL;
			yyt6 = NULL;
			yyt8 = NULL;
			yyt9 = NULL;
			yyt10 = NULL;
			yyt11 = YYCURSOR;
			yyt12 = NULL;
			yyt14 = YYCURSOR;
			goto yy12;
		case 'c': goto yy18;
		case 'd':
			yyt4 = NULL;
			yyt6 = NULL;
			yyt8 = NULL;
			yyt9 = NULL;
			yyt10 = NULL;
			yyt11 = YYCURSOR;
			yyt12 = NULL;
			yyt16 = YYCURSOR;
			goto yy14;
		default: goto yy11;
	}
yy20:
	yych = *++YYCURSOR;
yy21:
	switch (yych) {
		case '\n':
			yyt4 = NULL;
			yyt5 = NULL;
			yyt6 = NULL;
			yyt7 = YYCURSOR;
			yyt13 = NULL;
			yyt14 = NULL;
			yyt15 = NULL;
			goto yy4;
		case 'a':
			yyt4 = NULL;
			yyt5 = NULL;
			yyt8 = NULL;
			yyt9 = NULL;
			yyt10 = NULL;
			yyt11 = NULL;
			yyt12 = YYCURSOR;
			yyt13 = YYCURSOR;
			goto yy15;
		case 'b':
			yyt4 = NULL;
			yyt5 = NULL;
			yyt8 = NULL;
			yyt9 = NULL;
			yyt10 = NULL;
			yyt11 = NULL;
			yyt12 = YYCURSOR;
			yyt14 = YYCURSOR;
			goto yy12;
		case 'c':
			yyt4 = NULL;
			yyt5 = NULL;
			yyt8 = NULL;
			yyt9 = NULL;
			yyt10 = NULL;
			yyt11 = NULL;
			yyt12 = YYCURSOR;
			yyt15 = YYCURSOR;
			goto yy13;
		case 'd': goto yy20;
		default: goto yy11;
	}
}

}

#undef YYCURSOR
#undef YYMARKER
#undef YYTOKEN
#undef TLP_CLEAR

#define YYCURSOR in->cur
#define YYMARKER in->mar
#define YYLIMIT in->lim
#define YYTOKEN in->tok
#define TLP_CLEAR() do { \
    in->tlp.next = in->tlp.head; \
     \
} while (0)

int lex_buffered_eof(input_t *in) {
    const char* a1;const char* a2;const char* a3;const char* a4;const char* b1;const char* b2;const char* b3;const char* b4;const char* c1;const char* c2;const char* c3;const char* c4;const char* d1;const char* d2;const char* d3;const char* d4;
    
    long count = 0;
loop:
    in->tok = in->cur;
    
{
	char yych;
yyFillLabel0:
	yych = *YYCURSOR;
	switch (yych) {
		case '\n':
			in->yyt1 = NULL;
			in->yyt2 = NULL;
			in->yyt3 = NULL;
			in->yyt4 = YYCURSOR;
			in->yyt5 = NULL;
			in->yyt6 = NULL;
			in->yyt7 = NULL;
			in->yyt8 = YYCURSOR;
			in->yyt9 = YYCURSOR;
			in->yyt10 = NULL;
			in->yyt11 = NULL;
			in->yyt12 = NULL;
			in->yyt13 = YYCURSOR;
			in->yyt14 = NULL;
			in->yyt15 = NULL;
			in->yyt16 = NULL;
			goto yy25;
		case 'a':
			in->yyt8 = YYCURSOR;
			goto yy26;
		case 'b':
			in->yyt1 = NULL;
			in->yyt2 = NULL;
			in->yyt3 = NULL;
			in->yyt4 = YYCURSOR;
			in->yyt8 = YYCURSOR;
			in->yyt9 = YYCURSOR;
			in->yyt10 = NULL;
			in->yyt11 = NULL;
			in->yyt12 = NULL;
			in->yyt14 = YYCURSOR;
			goto yy27;
		case 'c':
			in->yyt1 = NULL;
			in->yyt2 = NULL;
			in->yyt3 = NULL;
			in->yyt5 = YYCURSOR;
			in->yyt8 = YYCURSOR;
			in->yyt9 = YYCURSOR;
			in->yyt10 = NULL;
			in->yyt11 = NULL;
			in->yyt12 = NULL;
			in->yyt15 = YYCURSOR;
			goto yy28;
		case 'd':
			in->yyt1 = NULL;
			in->yyt2 = NULL;
			in->yyt3 = NULL;
			in->yyt6 = YYCURSOR;
			in->yyt8 = YYCURSOR;
			in->yyt9 = YYCURSOR;
			in->yyt10 = NULL;
			in->yyt11 = NULL;
			in->yyt12 = NULL;
			in->yyt16 = YYCURSOR;
			goto yy29;
		default:
			if (YYLIMIT <= YYCURSOR) {
				if (fill_buffered_eof(in) == 0) goto yyFillLabel0;
				goto yy43;
			}
			goto yy23;
	}
yy23:
	++YYCURSOR;
yy24:
	{ return -1; }
yy25:
	++YYCURSOR;
	a1 = in->yyt8;
	a2 = in->yyt9;
	b1 = in->yyt1;
	b2 = in->yyt10;
	c1 = in->yyt2;
	c2 = in->yyt11;
	d1 = in->yyt3;
	d2 = in->yyt12;
	a3 = in->yyt13;
	a4 = in->yyt4;
	b3 = in->yyt14;
	b4 = in->yyt5;
	c3 = in->yyt15;
	c4 = in->yyt6;
	d3 = in->yyt16;
	d4 = in->yyt7;
	{
        if (a1)      { OUTC('A'); OUTS(a1, a2); }
        else if (b1) { OUTC('B'); OUTS(b1, b2); }
        else if (c1) { OUTC('C'); OUTS(c1, c2); }
        else if (d1) { OUTC('D'); OUTS(d1, d2); }
        if (a3)      { OUTC('A'); OUTS(a3, a4); }
        else if (b3) { OUTC('B'); OUTS(b3, b4); }
        else if (c3) { OUTC('C'); OUTS(c3, c4); }
        else if (d3) { OUTC('D'); OUTS(d3, d4); }
        OUTC('\n');
        goto loop;
    }
yy26:
	YYMARKER = ++YYCURSOR;
yyFillLabel1:
	yych = *YYCURSOR;
	switch (yych) {
		case '\n':
		case 'a':
		case 'b':
		case 'c':
		case 'd': goto yy31;
		default:
			if (YYLIMIT <= YYCURSOR) {
				if (fill_buffered_eof(in) == 0) goto yyFillLabel1;
			}
			goto yy24;
	}
yy27:
	YYMARKER = ++YYCURSOR;
yyFillLabel2:
	yych = *YYCURSOR;
	switch (yych) {
		case '\n':
		case 'a':
		case 'b':
		case 'c':
		case 'd': goto yy38;
		default:
			if (YYLIMIT <= YYCURSOR) {
				if (fill_buffered_eof(in) == 0) goto yyFillLabel2;
			}
			goto yy24;
	}
yy28:
	YYMARKER = ++YYCURSOR;
yyFillLabel3:
	yych = *YYCURSOR;
	switch (yych) {
		case '\n':
		case 'a':
		case 'b':
		case 'c':
		case 'd': goto yy40;
		default:
			if (YYLIMIT <= YYCURSOR) {
				if (fill_buffered_eof(in) == 0) goto yyFillLabel3;
			}
			goto yy24;
	}
yy29:
	YYMARKER = ++YYCURSOR;
yyFillLabel4:
	yych = *YYCURSOR;
	switch (yych) {
		case '\n':
		case 'a':
		case 'b':
		case 'c':
		case 'd': goto yy42;
		default:
			if (YYLIMIT <= YYCURSOR) {
				if (fill_buffered_eof(in) == 0) goto yyFillLabel4;
			}
			goto yy24;
	}
yy30:
	++YYCURSOR;
yyFillLabel5:
	yych = *YYCURSOR;
yy31:
	switch (yych) {
		case '\n':
			in->yyt1 = NULL;
			in->yyt2 = NULL;
			in->yyt3 = NULL;
			in->yyt4 = YYCURSOR;
			in->yyt5 = NULL;
			in->yyt6 = NULL;
			in->yyt7 = NULL;
			in->yyt9 = YYCURSOR;
			in->yyt10 = NULL;
			in->yyt11 = NULL;
			in->yyt12 = NULL;
			in->yyt13 = YYCURSOR;
			in->yyt14 = NULL;
			in->yyt15 = NULL;
			in->yyt16 = NULL;
			goto yy25;
		case 'a': goto yy30;
		case 'b':
			in->yyt4 = NULL;
			in->yyt5 = NULL;
			in->yyt6 = NULL;
			in->yyt9 = YYCURSOR;
			in->yyt10 = NULL;
			in->yyt11 = NULL;
			in->yyt12 = NULL;
			in->yyt14 = YYCURSOR;
			goto yy33;
		case 'c':
			in->yyt4 = NULL;
			in->yyt5 = NULL;
			in->yyt6 = NULL;
			in->yyt9 = YYCURSOR;
			in->yyt10 = NULL;
			in->yyt11 = NULL;
			in->yyt12 = NULL;
			in->yyt15 = YYCURSOR;
			goto yy34;
		case 'd':
			in->yyt4 = NULL;
			in->yyt5 = NULL;
			in->yyt6 = NULL;
			in->yyt9 = YYCURSOR;
			in->yyt10 = NULL;
			in->yyt11 = NULL;
			in->yyt12 = NULL;
			in->yyt16 = YYCURSOR;
			goto yy35;
		default:
			if (YYLIMIT <= YYCURSOR) {
				if (fill_buffered_eof(in) == 0) goto yyFillLabel5;
			}
			goto yy32;
	}
yy32:
	YYCURSOR = YYMARKER;
	goto yy24;
yy33:
	++YYCURSOR;
yyFillLabel6:
	yych = *YYCURSOR;
	switch (yych) {
		case '\n':
			in->yyt1 = in->yyt4;
			in->yyt2 = in->yyt5;
			in->yyt3 = in->yyt6;
			in->yyt4 = NULL;
			in->yyt5 = YYCURSOR;
			in->yyt6 = NULL;
			in->yyt7 = NULL;
			in->yyt13 = NULL;
			in->yyt15 = NULL;
			in->yyt16 = NULL;
			goto yy25;
		case 'b': goto yy33;
		default:
			if (YYLIMIT <= YYCURSOR) {
				if (fill_buffered_eof(in) == 0) goto yyFillLabel6;
			}
			goto yy32;
	}
yy34:
	++YYCURSOR;
yyFillLabel7:
	yych = *YYCURSOR;
	switch (yych) {
		case '\n':
			in->yyt1 = in->yyt4;
			in->yyt2 = in->yyt5;
			in->yyt3 = in->yyt6;
			in->yyt4 = NULL;
			in->yyt5 = NULL;
			in->yyt6 = YYCURSOR;
			in->yyt7 = NULL;
			in->yyt13 = NULL;
			in->yyt14 = NULL;
			in->yyt16 = NULL;
			goto yy25;
		case 'c': goto yy34;
		default:
			if (YYLIMIT <= YYCURSOR) {
				if (fill_buffered_eof(in) == 0) goto yyFillLabel7;
			}
			goto yy32;
	}
yy35:
	++YYCURSOR;
yyFillLabel8:
	yych = *YYCURSOR;
	switch (yych) {
		case '\n':
			in->yyt1 = in->yyt4;
			in->yyt2 = in->yyt5;
			in->yyt3 = in->yyt6;
			in->yyt4 = NULL;
			in->yyt5 = NULL;
			in->yyt6 = NULL;
			in->yyt7 = YYCURSOR;
			in->yyt13 = NULL;
			in->yyt14 = NULL;
			in->yyt15 = NULL;
			goto yy25;
		case 'd': goto yy35;
		default:
			if (YYLIMIT <= YYCURSOR) {
				if (fill_buffered_eof(in) == 0) goto yyFillLabel8;
			}
			goto yy32;
	}
yy36:
	++YYCURSOR;
yyFillLabel9:
	yych = *YYCURSOR;
	switch (yych) {
		case '\n':
			in->yyt1 = in->yyt4;
			in->yyt2 = in->yyt5;
			in->yyt3 = in->yyt6;
			in->yyt4 = YYCURSOR;
			in->yyt5 = NULL;
			in->yyt6 = NULL;
			in->yyt7 = NULL;
			in->yyt14 = NULL;
			in->yyt15 = NULL;
			in->yyt16 = NULL;
			goto yy25;
		case 'a': goto yy36;
		default:
			if (YYLIMIT <= YYCURSOR) {
				if (fill_buffered_eof(in) == 0) goto yyFillLabel9;
			}
			goto yy32;
	}
yy37:
	++YYCURSOR;
yyFillLabel10:
	yych = *YYCURSOR;
yy38:
	switch (yych) {
		case '\n':
			in->yyt4 = NULL;
			in->yyt5 = YYCURSOR;
			in->yyt6 = NULL;
			in->yyt7 = NULL;
			in->yyt13 = NULL;
			in->yyt15 = NULL;
			in->yyt16 = NULL;
			goto yy25;
		case 'a':
			in->yyt5 = NULL;
			in->yyt6 = NULL;
			in->yyt8 = NULL;
			in->yyt9 = NULL;
			in->yyt10 = YYCURSOR;
			in->yyt11 = NULL;
			in->yyt12 = NULL;
			in->yyt13 = YYCURSOR;
			goto yy36;
		case 'b': goto yy37;
		case 'c':
			in->yyt5 = NULL;
			in->yyt6 = NULL;
			in->yyt8 = NULL;
			in->yyt9 = NULL;
			in->yyt10 = YYCURSOR;
			in->yyt11 = NULL;
			in->yyt12 = NULL;
			in->yyt15 = YYCURSOR;
			goto yy34;
		case 'd':
			in->yyt5 = NULL;
			in->yyt6 = NULL;
			in->yyt8 = NULL;
			in->yyt9 = NULL;
			in->yyt10 = YYCURSOR;
			in->yyt11 = NULL;
			in->yyt12 = NULL;
			in->yyt16 = YYCURSOR;
			goto yy35;
		default:
			if (YYLIMIT <= YYCURSOR) {
				if (fill_buffered_eof(in) == 0) goto yyFillLabel10;
			}
			goto yy32;
	}
yy39:
	++YYCURSOR;
yyFillLabel11:
	yych = *YYCURSOR;
yy40:
	switch (yych) {
		case '\n':
			in->yyt4 = NULL;
			in->yyt5 = NULL;
			in->yyt6 = YYCURSOR;
			in->yyt7 = NULL;
			in->yyt13 = NULL;
			in->yyt14 = NULL;
			in->yyt16 = NULL;
			goto yy25;
		case 'a':
			in->yyt4 = NULL;
			in->yyt6 = NULL;
			in->yyt8 = NULL;
			in->yyt9 = NULL;
			in->yyt10 = NULL;
			in->yyt11 = YYCURSOR;
			in->yyt12 = NULL;
			in->yyt13 = YYCURSOR;
			goto yy36;
		case 'b':
			in->yyt4 = NULL;
			in->yyt6 = NULL;
			in->yyt8 = NULL;
			in->yyt9 = NULL;
			in->yyt10 = NULL;
			in->yyt11 = YYCURSOR;
			in->yyt12 = NULL;
			in->yyt14 = YYCURSOR;
			goto yy33;
		case 'c': goto yy39;
		case 'd':
			in->yyt4 = NULL;
			in->yyt6 = NULL;
			in->yyt8 = NULL;
			in->yyt9 = NULL;
			in->yyt10 = NULL;
			in->yyt11 = YYCURSOR;
			in->yyt12 = NULL;
			in->yyt16 = YYCURSOR;
			goto yy35;
		default:
			if (YYLIMIT <= YYCURSOR) {
				if (fill_buffered_eof(in) == 0) goto yyFillLabel11;
			}
			goto yy32;
	}
yy41:
	++YYCURSOR;
yyFillLabel12:
	yych = *YYCURSOR;
yy42:
	switch (yych) {
		case '\n':
			in->yyt4 = NULL;
			in->yyt5 = NULL;
			in->yyt6 = NULL;
			in->yyt7 = YYCURSOR;
			in->yyt13 = NULL;
			in->yyt14 = NULL;
			in->yyt15 = NULL;
			goto yy25;
		case 'a':
			in->yyt4 = NULL;
			in->yyt5 = NULL;
			in->yyt8 = NULL;
			in->yyt9 = NULL;
			in->yyt10 = NULL;
			in->yyt11 = NULL;
			in->yyt12 = YYCURSOR;
			in->yyt13 = YYCURSOR;
			goto yy36;
		case 'b':
			in->yyt4 = NULL;
			in->yyt5 = NULL;
			in->yyt8 = NULL;
			in->yyt9 = NULL;
			in->yyt10 = NULL;
			in->yyt11 = NULL;
			in->yyt12 = YYCURSOR;
			in->yyt14 = YYCURSOR;
			goto yy33;
		case 'c':
			in->yyt4 = NULL;
			in->yyt5 = NULL;
			in->yyt8 = NULL;
			in->yyt9 = NULL;
			in->yyt10 = NULL;
			in->yyt11 = NULL;
			in->yyt12 = YYCURSOR;
			in->yyt15 = YYCURSOR;
			goto yy34;
		case 'd': goto yy41;
		default:
			if (YYLIMIT <= YYCURSOR) {
				if (fill_buffered_eof(in) == 0) goto yyFillLabel12;
			}
			goto yy32;
	}
yy43:
	{ return count; }
}

}

int lex_buffered_scc(input_t *in) {
    const char* a1;const char* a2;const char* a3;const char* a4;const char* b1;const char* b2;const char* b3;const char* b4;const char* c1;const char* c2;const char* c3;const char* c4;const char* d1;const char* d2;const char* d3;const char* d4;
    
    long count = 0;
loop:
    in->tok = in->cur;
    
{
	char yych;
	if ((YYLIMIT - YYCURSOR) < 2) if (fill_buffered_scc(in, 2) != 0) return -2;
	yych = *YYCURSOR;
	switch (yych) {
		case 0x00: goto yy45;
		case '\n':
			in->yyt1 = NULL;
			in->yyt2 = NULL;
			in->yyt3 = NULL;
			in->yyt4 = YYCURSOR;
			in->yyt5 = NULL;
			in->yyt6 = NULL;
			in->yyt7 = NULL;
			in->yyt8 = YYCURSOR;
			in->yyt9 = YYCURSOR;
			in->yyt10 = NULL;
			in->yyt11 = NULL;
			in->yyt12 = NULL;
			in->yyt13 = YYCURSOR;
			in->yyt14 = NULL;
			in->yyt15 = NULL;
			in->yyt16 = NULL;
			goto yy48;
		case 'a':
			in->yyt8 = YYCURSOR;
			goto yy49;
		case 'b':
			in->yyt1 = NULL;
			in->yyt2 = NULL;
			in->yyt3 = NULL;
			in->yyt4 = YYCURSOR;
			in->yyt8 = YYCURSOR;
			in->yyt9 = YYCURSOR;
			in->yyt10 = NULL;
			in->yyt11 = NULL;
			in->yyt12 = NULL;
			in->yyt14 = YYCURSOR;
			goto yy50;
		case 'c':
			in->yyt1 = NULL;
			in->yyt2 = NULL;
			in->yyt3 = NULL;
			in->yyt5 = YYCURSOR;
			in->yyt8 = YYCURSOR;
			in->yyt9 = YYCURSOR;
			in->yyt10 = NULL;
			in->yyt11 = NULL;
			in->yyt12 = NULL;
			in->yyt15 = YYCURSOR;
			goto yy51;
		case 'd':
			in->yyt1 = NULL;
			in->yyt2 = NULL;
			in->yyt3 = NULL;
			in->yyt6 = YYCURSOR;
			in->yyt8 = YYCURSOR;
			in->yyt9 = YYCURSOR;
			in->yyt10 = NULL;
			in->yyt11 = NULL;
			in->yyt12 = NULL;
			in->yyt16 = YYCURSOR;
			goto yy52;
		default: goto yy46;
	}
yy45:
	++YYCURSOR;
	{ return count; }
yy46:
	++YYCURSOR;
yy47:
	{ return -1; }
yy48:
	++YYCURSOR;
	a1 = in->yyt8;
	a2 = in->yyt9;
	b1 = in->yyt1;
	b2 = in->yyt10;
	c1 = in->yyt2;
	c2 = in->yyt11;
	d1 = in->yyt3;
	d2 = in->yyt12;
	a3 = in->yyt13;
	a4 = in->yyt4;
	b3 = in->yyt14;
	b4 = in->yyt5;
	c3 = in->yyt15;
	c4 = in->yyt6;
	d3 = in->yyt16;
	d4 = in->yyt7;
	{
        if (a1)      { OUTC('A'); OUTS(a1, a2); }
        else if (b1) { OUTC('B'); OUTS(b1, b2); }
        else if (c1) { OUTC('C'); OUTS(c1, c2); }
        else if (d1) { OUTC('D'); OUTS(d1, d2); }
        if (a3)      { OUTC('A'); OUTS(a3, a4); }
        else if (b3) { OUTC('B'); OUTS(b3, b4); }
        else if (c3) { OUTC('C'); OUTS(c3, c4); }
        else if (d3) { OUTC('D'); OUTS(d3, d4); }
        OUTC('\n');
        goto loop;
    }
yy49:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case '\n':
		case 'a':
		case 'b':
		case 'c':
		case 'd': goto yy54;
		default: goto yy47;
	}
yy50:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case '\n':
		case 'a':
		case 'b':
		case 'c':
		case 'd': goto yy61;
		default: goto yy47;
	}
yy51:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case '\n':
		case 'a':
		case 'b':
		case 'c':
		case 'd': goto yy63;
		default: goto yy47;
	}
yy52:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case '\n':
		case 'a':
		case 'b':
		case 'c':
		case 'd': goto yy65;
		default: goto yy47;
	}
yy53:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) if (fill_buffered_scc(in, 1) != 0) return -2;
	yych = *YYCURSOR;
yy54:
	switch (yych) {
		case '\n':
			in->yyt1 = NULL;
			in->yyt2 = NULL;
			in->yyt3 = NULL;
			in->yyt4 = YYCURSOR;
			in->yyt5 = NULL;
			in->yyt6 = NULL;
			in->yyt7 = NULL;
			in->yyt9 = YYCURSOR;
			in->yyt10 = NULL;
			in->yyt11 = NULL;
			in->yyt12 = NULL;
			in->yyt13 = YYCURSOR;
			in->yyt14 = NULL;
			in->yyt15 = NULL;
			in->yyt16 = NULL;
			goto yy48;
		case 'a': goto yy53;
		case 'b':
			in->yyt4 = NULL;
			in->yyt5 = NULL;
			in->yyt6 = NULL;
			in->yyt9 = YYCURSOR;
			in->yyt10 = NULL;
			in->yyt11 = NULL;
			in->yyt12 = NULL;
			in->yyt14 = YYCURSOR;
			goto yy56;
		case 'c':
			in->yyt4 = NULL;
			in->yyt5 = NULL;
			in->yyt6 = NULL;
			in->yyt9 = YYCURSOR;
			in->yyt10 = NULL;
			in->yyt11 = NULL;
			in->yyt12 = NULL;
			in->yyt15 = YYCURSOR;
			goto yy57;
		case 'd':
			in->yyt4 = NULL;
			in->yyt5 = NULL;
			in->yyt6 = NULL;
			in->yyt9 = YYCURSOR;
			in->yyt10 = NULL;
			in->yyt11 = NULL;
			in->yyt12 = NULL;
			in->yyt16 = YYCURSOR;
			goto yy58;
		default: goto yy55;
	}
yy55:
	YYCURSOR = YYMARKER;
	goto yy47;
yy56:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) if (fill_buffered_scc(in, 1) != 0) return -2;
	yych = *YYCURSOR;
	switch (yych) {
		case '\n':
			in->yyt1 = in->yyt4;
			in->yyt2 = in->yyt5;
			in->yyt3 = in->yyt6;
			in->yyt4 = NULL;
			in->yyt5 = YYCURSOR;
			in->yyt6 = NULL;
			in->yyt7 = NULL;
			in->yyt13 = NULL;
			in->yyt15 = NULL;
			in->yyt16 = NULL;
			goto yy48;
		case 'b': goto yy56;
		default: goto yy55;
	}
yy57:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) if (fill_buffered_scc(in, 1) != 0) return -2;
	yych = *YYCURSOR;
	switch (yych) {
		case '\n':
			in->yyt1 = in->yyt4;
			in->yyt2 = in->yyt5;
			in->yyt3 = in->yyt6;
			in->yyt4 = NULL;
			in->yyt5 = NULL;
			in->yyt6 = YYCURSOR;
			in->yyt7 = NULL;
			in->yyt13 = NULL;
			in->yyt14 = NULL;
			in->yyt16 = NULL;
			goto yy48;
		case 'c': goto yy57;
		default: goto yy55;
	}
yy58:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) if (fill_buffered_scc(in, 1) != 0) return -2;
	yych = *YYCURSOR;
	switch (yych) {
		case '\n':
			in->yyt1 = in->yyt4;
			in->yyt2 = in->yyt5;
			in->yyt3 = in->yyt6;
			in->yyt4 = NULL;
			in->yyt5 = NULL;
			in->yyt6 = NULL;
			in->yyt7 = YYCURSOR;
			in->yyt13 = NULL;
			in->yyt14 = NULL;
			in->yyt15 = NULL;
			goto yy48;
		case 'd': goto yy58;
		default: goto yy55;
	}
yy59:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) if (fill_buffered_scc(in, 1) != 0) return -2;
	yych = *YYCURSOR;
	switch (yych) {
		case '\n':
			in->yyt1 = in->yyt4;
			in->yyt2 = in->yyt5;
			in->yyt3 = in->yyt6;
			in->yyt4 = YYCURSOR;
			in->yyt5 = NULL;
			in->yyt6 = NULL;
			in->yyt7 = NULL;
			in->yyt14 = NULL;
			in->yyt15 = NULL;
			in->yyt16 = NULL;
			goto yy48;
		case 'a': goto yy59;
		default: goto yy55;
	}
yy60:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) if (fill_buffered_scc(in, 1) != 0) return -2;
	yych = *YYCURSOR;
yy61:
	switch (yych) {
		case '\n':
			in->yyt4 = NULL;
			in->yyt5 = YYCURSOR;
			in->yyt6 = NULL;
			in->yyt7 = NULL;
			in->yyt13 = NULL;
			in->yyt15 = NULL;
			in->yyt16 = NULL;
			goto yy48;
		case 'a':
			in->yyt5 = NULL;
			in->yyt6 = NULL;
			in->yyt8 = NULL;
			in->yyt9 = NULL;
			in->yyt10 = YYCURSOR;
			in->yyt11 = NULL;
			in->yyt12 = NULL;
			in->yyt13 = YYCURSOR;
			goto yy59;
		case 'b': goto yy60;
		case 'c':
			in->yyt5 = NULL;
			in->yyt6 = NULL;
			in->yyt8 = NULL;
			in->yyt9 = NULL;
			in->yyt10 = YYCURSOR;
			in->yyt11 = NULL;
			in->yyt12 = NULL;
			in->yyt15 = YYCURSOR;
			goto yy57;
		case 'd':
			in->yyt5 = NULL;
			in->yyt6 = NULL;
			in->yyt8 = NULL;
			in->yyt9 = NULL;
			in->yyt10 = YYCURSOR;
			in->yyt11 = NULL;
			in->yyt12 = NULL;
			in->yyt16 = YYCURSOR;
			goto yy58;
		default: goto yy55;
	}
yy62:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) if (fill_buffered_scc(in, 1) != 0) return -2;
	yych = *YYCURSOR;
yy63:
	switch (yych) {
		case '\n':
			in->yyt4 = NULL;
			in->yyt5 = NULL;
			in->yyt6 = YYCURSOR;
			in->yyt7 = NULL;
			in->yyt13 = NULL;
			in->yyt14 = NULL;
			in->yyt16 = NULL;
			goto yy48;
		case 'a':
			in->yyt4 = NULL;
			in->yyt6 = NULL;
			in->yyt8 = NULL;
			in->yyt9 = NULL;
			in->yyt10 = NULL;
			in->yyt11 = YYCURSOR;
			in->yyt12 = NULL;
			in->yyt13 = YYCURSOR;
			goto yy59;
		case 'b':
			in->yyt4 = NULL;
			in->yyt6 = NULL;
			in->yyt8 = NULL;
			in->yyt9 = NULL;
			in->yyt10 = NULL;
			in->yyt11 = YYCURSOR;
			in->yyt12 = NULL;
			in->yyt14 = YYCURSOR;
			goto yy56;
		case 'c': goto yy62;
		case 'd':
			in->yyt4 = NULL;
			in->yyt6 = NULL;
			in->yyt8 = NULL;
			in->yyt9 = NULL;
			in->yyt10 = NULL;
			in->yyt11 = YYCURSOR;
			in->yyt12 = NULL;
			in->yyt16 = YYCURSOR;
			goto yy58;
		default: goto yy55;
	}
yy64:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) if (fill_buffered_scc(in, 1) != 0) return -2;
	yych = *YYCURSOR;
yy65:
	switch (yych) {
		case '\n':
			in->yyt4 = NULL;
			in->yyt5 = NULL;
			in->yyt6 = NULL;
			in->yyt7 = YYCURSOR;
			in->yyt13 = NULL;
			in->yyt14 = NULL;
			in->yyt15 = NULL;
			goto yy48;
		case 'a':
			in->yyt4 = NULL;
			in->yyt5 = NULL;
			in->yyt8 = NULL;
			in->yyt9 = NULL;
			in->yyt10 = NULL;
			in->yyt11 = NULL;
			in->yyt12 = YYCURSOR;
			in->yyt13 = YYCURSOR;
			goto yy59;
		case 'b':
			in->yyt4 = NULL;
			in->yyt5 = NULL;
			in->yyt8 = NULL;
			in->yyt9 = NULL;
			in->yyt10 = NULL;
			in->yyt11 = NULL;
			in->yyt12 = YYCURSOR;
			in->yyt14 = YYCURSOR;
			goto yy56;
		case 'c':
			in->yyt4 = NULL;
			in->yyt5 = NULL;
			in->yyt8 = NULL;
			in->yyt9 = NULL;
			in->yyt10 = NULL;
			in->yyt11 = NULL;
			in->yyt12 = YYCURSOR;
			in->yyt15 = YYCURSOR;
			goto yy57;
		case 'd': goto yy64;
		default: goto yy55;
	}
}

}

#undef YYCURSOR
#undef YYMARKER
#undef YYLIMIT
#undef YYTOKEN
#undef TLP_CLEAR

#define FN_BENCH(suffix) \
void bench_##suffix::operator()( \
        benchmark::State &state, const char* input, long expected) const { \
    long count = 0; \
    for (auto _ : state) { \
        input_t in; \
        init_input_##suffix(&in, input); \
        count = lex_##suffix(&in); \
        free_input(&in); \
    } \
    if (count != expected) state.SkipWithError("error"); \
}
FN_BENCH(simple)
FN_BENCH(buffered_eof)
FN_BENCH(buffered_scc)
#undef FN_BENCH

#define FN_TEST(suffix) \
bool test_##suffix(const char* input, long expected) { \
    input_t in; \
    init_input_##suffix(&in, input); \
    long count = lex_##suffix(&in); \
    switch (count) { \
    default: \
        if (count != expected) { \
            fprintf(stderr, "wrong count, expected %ld, got %ld\n", expected, count); \
        } \
        break; \
    case -1: \
        fprintf(stderr, "syntax error\n"); \
        break; \
    case -2: \
        fprintf(stderr, "yyfill error\n"); \
        break; \
    } \
    free_input(&in); \
    return count == expected; \
}
FN_TEST(simple)
FN_TEST(buffered_eof)
FN_TEST(buffered_scc)
#undef FN_TEST


} // namespace re2c_submatch_14__alt2_4

