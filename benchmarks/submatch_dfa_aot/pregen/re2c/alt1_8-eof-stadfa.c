/* Generated by re2c 2.0.3 */
#line 1 "../../../benchmarks/submatch_dfa_aot/src/re2c/alt1_8.re"
#include <assert.h>
#include <stdlib.h>
#include "common.h"

#line 15 "../../../benchmarks/submatch_dfa_aot/src/re2c/common.re"


typedef struct taglist_t {
    struct taglist_t *pred;
    long dist;
} taglist_t;

typedef struct taglistpool_t {
    taglist_t *head;
    taglist_t *next;
    taglist_t *last;
} taglistpool_t;

typedef struct {
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
} input_t;

static inline void taglistpool_clear(taglistpool_t *tlp, input_t *in)
{
    tlp->next = tlp->head;
    
}

static inline void taglistpool_init(taglistpool_t *tlp)
{
    static const unsigned size = 1024 * 1024;
    tlp->head = (taglist_t*)malloc(size * sizeof(taglist_t));
    tlp->next = tlp->head;
    tlp->last = tlp->head + size;
}

static inline void taglistpool_free(taglistpool_t *tlp)
{
    free(tlp->head);
    tlp->head = tlp->next = tlp->last = NULL;
}

static inline void taglist(taglist_t **ptl, const char *b, const char *t, taglistpool_t *tlp)
{
#ifdef GROW_MTAG_LIST
    if (tlp->next >= tlp->last) {
        const unsigned size = tlp->last - tlp->head;
        taglist_t *head = (taglist_t*)malloc(2 * size * sizeof(taglist_t));
        memcpy(head, tlp->head, size * sizeof(taglist_t));
        free(tlp->head);
        tlp->head = head;
        tlp->next = head + size;
        tlp->last = head + size * 2;
    }
#else
    assert(tlp->next < tlp->last);
#endif
    taglist_t *tl = tlp->next++;
    tl->pred = *ptl;
    tl->dist = t - b;
    *ptl = tl;
}

#line 6 "../../../benchmarks/submatch_dfa_aot/src/re2c/include_eof/fill.re"


static inline int fill(input_t *in)
{
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


    in->lim += fread(in->lim, 1, free, stdin);
    in->lim[0] = 0;

    if (in->lim < in->buf + SIZE) {
        in->eof = 1;
    }

    return 0;
}

static inline void init_input(input_t *in)
{
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
    fill(in);
}


static inline void free_input(input_t *in)
{
    free(in->buf);
    taglistpool_free(&in->tlp);
}

static int lex(input_t *in, Output *out);

int main(int argc, char **argv)
{
    PRE;
    input_t in;
    Output out;

    init_input(&in);
    init_output(&out);

    switch (lex(&in, &out)) {
        case 0:  break;
        case 1:  fprintf(stderr, "*** %s: syntax error\n", argv[0]); break;
        case 2:  fprintf(stderr, "*** %s: yyfill error\n", argv[0]); break;
        default: fprintf(stderr, "*** %s: panic\n", argv[0]); break;
    }

    flush(&out);
    free_output(&out);
    free_input(&in);

    POST;
    return 0;
}


static int lex(input_t *in, Output *out)
{
    const char
        *a1, *b1, *c1, *d1, *e1, *f1, *g1, *h1,
        *a2, *b2, *c2, *d2, *e2, *f2, *g2, *h2;
loop:
    in->tok = in->cur;

#line 207 "gen/re2c/alt1_8-eof-stadfa.c"
{
	char yych;
yyFillLabel3_0:
	yych = *in->cur;
	switch (yych) {
	case '\n':	goto yy4;
	case 'a':	goto yy6;
	case 'b':	goto yy7;
	case 'c':	goto yy8;
	case 'd':	goto yy9;
	case 'e':	goto yy10;
	case 'f':	goto yy11;
	case 'g':	goto yy12;
	case 'h':	goto yy13;
	default:
		if (in->lim <= in->cur) {
			if (fill(in) == 0) goto yyFillLabel3_0;
			goto yy39;
		}
		goto yy2;
	}
yy2:
	++in->cur;
yy3:
#line 11 "../../../benchmarks/submatch_dfa_aot/src/re2c/alt1_8.re"
	{ return 1; }
#line 234 "gen/re2c/alt1_8-eof-stadfa.c"
yy4:
	++in->cur;
	in->yyt3 = in->yyt4 = in->yyt5 = in->yyt6 = in->yyt7 = in->yyt8 = in->yyt9 = in->yyt10 = in->yyt11 = in->yyt12 = in->yyt13 = in->yyt14 = in->yyt15 = in->yyt16 = NULL;
	in->yyt1 = in->yyt2 = in->cur - 1;
yy5:
	a1 = in->yyt1;
	a2 = in->yyt2;
	b1 = in->yyt3;
	b2 = in->yyt4;
	c1 = in->yyt5;
	c2 = in->yyt6;
	d1 = in->yyt7;
	d2 = in->yyt8;
	e1 = in->yyt9;
	e2 = in->yyt10;
	f1 = in->yyt11;
	f2 = in->yyt12;
	g1 = in->yyt13;
	g2 = in->yyt14;
	h1 = in->yyt15;
	h2 = in->yyt16;
#line 22 "../../../benchmarks/submatch_dfa_aot/src/re2c/alt1_8.re"
	{
        if (a1)      { outc(out, 'A'); outs(out, a1, a2); }
        else if (b1) { outc(out, 'B'); outs(out, b1, b2); }
        else if (c1) { outc(out, 'C'); outs(out, c1, c2); }
        else if (d1) { outc(out, 'D'); outs(out, d1, d2); }
        else if (e1) { outc(out, 'E'); outs(out, e1, e2); }
        else if (f1) { outc(out, 'F'); outs(out, f1, f2); }
        else if (g1) { outc(out, 'G'); outs(out, g1, g2); }
        else if (h1) { outc(out, 'H'); outs(out, h1, h2); }
        outc(out, '\n');
        goto loop;
    }
#line 269 "gen/re2c/alt1_8-eof-stadfa.c"
yy6:
	in->mar = ++in->cur;
	in->yyt1 = in->cur - 1;
yyFillLabel3_1:
	yych = *in->cur;
	switch (yych) {
	case '\n':	goto yy14;
	case 'a':	goto yy15;
	default:
		if (in->lim <= in->cur) {
			if (fill(in) == 0) goto yyFillLabel3_1;
		}
		goto yy3;
	}
yy7:
	in->mar = ++in->cur;
	in->yyt3 = in->cur - 1;
yyFillLabel3_2:
	yych = *in->cur;
	switch (yych) {
	case '\n':	goto yy18;
	case 'b':	goto yy19;
	default:
		if (in->lim <= in->cur) {
			if (fill(in) == 0) goto yyFillLabel3_2;
		}
		goto yy3;
	}
yy8:
	in->mar = ++in->cur;
	in->yyt5 = in->cur - 1;
yyFillLabel3_3:
	yych = *in->cur;
	switch (yych) {
	case '\n':	goto yy21;
	case 'c':	goto yy22;
	default:
		if (in->lim <= in->cur) {
			if (fill(in) == 0) goto yyFillLabel3_3;
		}
		goto yy3;
	}
yy9:
	in->mar = ++in->cur;
	in->yyt7 = in->cur - 1;
yyFillLabel3_4:
	yych = *in->cur;
	switch (yych) {
	case '\n':	goto yy24;
	case 'd':	goto yy25;
	default:
		if (in->lim <= in->cur) {
			if (fill(in) == 0) goto yyFillLabel3_4;
		}
		goto yy3;
	}
yy10:
	in->mar = ++in->cur;
	in->yyt9 = in->cur - 1;
yyFillLabel3_5:
	yych = *in->cur;
	switch (yych) {
	case '\n':	goto yy27;
	case 'e':	goto yy28;
	default:
		if (in->lim <= in->cur) {
			if (fill(in) == 0) goto yyFillLabel3_5;
		}
		goto yy3;
	}
yy11:
	in->mar = ++in->cur;
	in->yyt11 = in->cur - 1;
yyFillLabel3_6:
	yych = *in->cur;
	switch (yych) {
	case '\n':	goto yy30;
	case 'f':	goto yy31;
	default:
		if (in->lim <= in->cur) {
			if (fill(in) == 0) goto yyFillLabel3_6;
		}
		goto yy3;
	}
yy12:
	in->mar = ++in->cur;
	in->yyt13 = in->cur - 1;
yyFillLabel3_7:
	yych = *in->cur;
	switch (yych) {
	case '\n':	goto yy33;
	case 'g':	goto yy34;
	default:
		if (in->lim <= in->cur) {
			if (fill(in) == 0) goto yyFillLabel3_7;
		}
		goto yy3;
	}
yy13:
	in->mar = ++in->cur;
	in->yyt15 = in->cur - 1;
yyFillLabel3_8:
	yych = *in->cur;
	switch (yych) {
	case '\n':	goto yy36;
	case 'h':	goto yy37;
	default:
		if (in->lim <= in->cur) {
			if (fill(in) == 0) goto yyFillLabel3_8;
		}
		goto yy3;
	}
yy14:
	++in->cur;
	in->yyt3 = in->yyt4 = in->yyt5 = in->yyt6 = in->yyt7 = in->yyt8 = in->yyt9 = in->yyt10 = in->yyt11 = in->yyt12 = in->yyt13 = in->yyt14 = in->yyt15 = in->yyt16 = NULL;
	in->yyt2 = in->cur - 1;
	goto yy5;
yy15:
	++in->cur;
yyFillLabel3_9:
	yych = *in->cur;
	switch (yych) {
	case '\n':	goto yy14;
	case 'a':	goto yy15;
	default:
		if (in->lim <= in->cur) {
			if (fill(in) == 0) goto yyFillLabel3_9;
		}
		goto yy17;
	}
yy17:
	in->cur = in->mar;
	goto yy3;
yy18:
	++in->cur;
	in->yyt1 = in->yyt2 = in->yyt5 = in->yyt6 = in->yyt7 = in->yyt8 = in->yyt9 = in->yyt10 = in->yyt11 = in->yyt12 = in->yyt13 = in->yyt14 = in->yyt15 = in->yyt16 = NULL;
	in->yyt4 = in->cur - 1;
	goto yy5;
yy19:
	++in->cur;
yyFillLabel3_10:
	yych = *in->cur;
	switch (yych) {
	case '\n':	goto yy18;
	case 'b':	goto yy19;
	default:
		if (in->lim <= in->cur) {
			if (fill(in) == 0) goto yyFillLabel3_10;
		}
		goto yy17;
	}
yy21:
	++in->cur;
	in->yyt1 = in->yyt2 = in->yyt3 = in->yyt4 = in->yyt7 = in->yyt8 = in->yyt9 = in->yyt10 = in->yyt11 = in->yyt12 = in->yyt13 = in->yyt14 = in->yyt15 = in->yyt16 = NULL;
	in->yyt6 = in->cur - 1;
	goto yy5;
yy22:
	++in->cur;
yyFillLabel3_11:
	yych = *in->cur;
	switch (yych) {
	case '\n':	goto yy21;
	case 'c':	goto yy22;
	default:
		if (in->lim <= in->cur) {
			if (fill(in) == 0) goto yyFillLabel3_11;
		}
		goto yy17;
	}
yy24:
	++in->cur;
	in->yyt1 = in->yyt2 = in->yyt3 = in->yyt4 = in->yyt5 = in->yyt6 = in->yyt9 = in->yyt10 = in->yyt11 = in->yyt12 = in->yyt13 = in->yyt14 = in->yyt15 = in->yyt16 = NULL;
	in->yyt8 = in->cur - 1;
	goto yy5;
yy25:
	++in->cur;
yyFillLabel3_12:
	yych = *in->cur;
	switch (yych) {
	case '\n':	goto yy24;
	case 'd':	goto yy25;
	default:
		if (in->lim <= in->cur) {
			if (fill(in) == 0) goto yyFillLabel3_12;
		}
		goto yy17;
	}
yy27:
	++in->cur;
	in->yyt1 = in->yyt2 = in->yyt3 = in->yyt4 = in->yyt5 = in->yyt6 = in->yyt7 = in->yyt8 = in->yyt11 = in->yyt12 = in->yyt13 = in->yyt14 = in->yyt15 = in->yyt16 = NULL;
	in->yyt10 = in->cur - 1;
	goto yy5;
yy28:
	++in->cur;
yyFillLabel3_13:
	yych = *in->cur;
	switch (yych) {
	case '\n':	goto yy27;
	case 'e':	goto yy28;
	default:
		if (in->lim <= in->cur) {
			if (fill(in) == 0) goto yyFillLabel3_13;
		}
		goto yy17;
	}
yy30:
	++in->cur;
	in->yyt1 = in->yyt2 = in->yyt3 = in->yyt4 = in->yyt5 = in->yyt6 = in->yyt7 = in->yyt8 = in->yyt9 = in->yyt10 = in->yyt13 = in->yyt14 = in->yyt15 = in->yyt16 = NULL;
	in->yyt12 = in->cur - 1;
	goto yy5;
yy31:
	++in->cur;
yyFillLabel3_14:
	yych = *in->cur;
	switch (yych) {
	case '\n':	goto yy30;
	case 'f':	goto yy31;
	default:
		if (in->lim <= in->cur) {
			if (fill(in) == 0) goto yyFillLabel3_14;
		}
		goto yy17;
	}
yy33:
	++in->cur;
	in->yyt1 = in->yyt2 = in->yyt3 = in->yyt4 = in->yyt5 = in->yyt6 = in->yyt7 = in->yyt8 = in->yyt9 = in->yyt10 = in->yyt11 = in->yyt12 = in->yyt15 = in->yyt16 = NULL;
	in->yyt14 = in->cur - 1;
	goto yy5;
yy34:
	++in->cur;
yyFillLabel3_15:
	yych = *in->cur;
	switch (yych) {
	case '\n':	goto yy33;
	case 'g':	goto yy34;
	default:
		if (in->lim <= in->cur) {
			if (fill(in) == 0) goto yyFillLabel3_15;
		}
		goto yy17;
	}
yy36:
	++in->cur;
	in->yyt1 = in->yyt2 = in->yyt3 = in->yyt4 = in->yyt5 = in->yyt6 = in->yyt7 = in->yyt8 = in->yyt9 = in->yyt10 = in->yyt11 = in->yyt12 = in->yyt13 = in->yyt14 = NULL;
	in->yyt16 = in->cur - 1;
	goto yy5;
yy37:
	++in->cur;
yyFillLabel3_16:
	yych = *in->cur;
	switch (yych) {
	case '\n':	goto yy36;
	case 'h':	goto yy37;
	default:
		if (in->lim <= in->cur) {
			if (fill(in) == 0) goto yyFillLabel3_16;
		}
		goto yy17;
	}
yy39:
#line 5 "../../../benchmarks/submatch_dfa_aot/src/re2c/include_eof/fill.re"
	{ return 0; }
#line 532 "gen/re2c/alt1_8-eof-stadfa.c"
}
#line 34 "../../../benchmarks/submatch_dfa_aot/src/re2c/alt1_8.re"

}
