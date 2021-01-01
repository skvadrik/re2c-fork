/* Generated by re2c 2.0.3 */
#line 1 "../../../benchmarks/submatch_dfa_aot/src/re2c/datetime.re"
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
char *yyt2;

    
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

#line 4 "../../../benchmarks/submatch_dfa_aot/src/re2c/include_bc/fill.re"


#define YYMAXFILL 26


static inline int fill(input_t *in, size_t need)
{
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
if (in->yyt2) in->yyt2 -= free;


    in->lim += fread(in->lim, 1, free, stdin);

    if (in->lim < in->buf + SIZE) {
        in->eof = 1;
        memset(in->lim, 0, YYMAXFILL);
        in->lim += YYMAXFILL;
    }

    return 0;
}

static inline void init_input(input_t *in)
{
    in->buf = (char*) malloc(SIZE + YYMAXFILL);
    in->lim = in->buf + SIZE;
    in->cur = in->lim;
    in->mar = in->lim;
    in->tok = in->lim;
    in->yyt1 = 0;
in->yyt2 = 0;

    
    taglistpool_init(&in->tlp);
    in->eof = 0;
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
        *s1, *y1, *h1, *m1, *d1, *M1, *z1,
        *s2, *y2, *h2, *m2, *d2, *M2, *z2;
loop:
    in->tok = in->cur;

#line 168 "gen/re2c/datetime-bc-tdfa1-es.c"
{
	char yych;
	if ((in->lim - in->cur) < 26) if (fill(in, 26) != 0) return 1;
	yych = *in->cur;
	switch (yych) {
	case 0x00:
		++in->cur;
		goto yy2;
	case '0':
		in->yyt1 = in->cur;
		++in->cur;
		goto yy6;
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
		in->yyt1 = in->cur;
		++in->cur;
		goto yy7;
	default:
		++in->cur;
		goto yy4;
	}
yy2:
#line 3 "../../../benchmarks/submatch_dfa_aot/src/re2c/include_bc/fill.re"
	{ return 0; }
#line 200 "gen/re2c/datetime-bc-tdfa1-es.c"
yy4:
yy5:
#line 20 "../../../benchmarks/submatch_dfa_aot/src/re2c/datetime.re"
	{ return 1; }
#line 205 "gen/re2c/datetime-bc-tdfa1-es.c"
yy6:
	yych = *(in->mar = in->cur);
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
		++in->cur;
		goto yy8;
	default:	goto yy5;
	}
yy7:
	yych = *(in->mar = in->cur);
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
		++in->cur;
		goto yy10;
	default:	goto yy5;
	}
yy8:
	yych = *in->cur;
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
		++in->cur;
		goto yy11;
	default:	goto yy9;
	}
yy9:
	in->cur = in->mar;
	goto yy5;
yy10:
	yych = *in->cur;
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
		++in->cur;
		goto yy12;
	default:	goto yy9;
	}
yy11:
	yych = *in->cur;
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
		++in->cur;
		goto yy13;
	default:	goto yy9;
	}
yy12:
	yych = *in->cur;
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
		++in->cur;
		goto yy14;
	default:	goto yy9;
	}
yy13:
	yych = *in->cur;
	switch (yych) {
	case '-':
		++in->cur;
		goto yy16;
	default:	goto yy9;
	}
yy14:
	if ((in->lim - in->cur) < 22) if (fill(in, 22) != 0) return 1;
	yych = *in->cur;
	switch (yych) {
	case '-':
		++in->cur;
		goto yy16;
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
		++in->cur;
		goto yy14;
	default:	goto yy9;
	}
yy16:
	yych = *in->cur;
	switch (yych) {
	case '0':
		++in->cur;
		goto yy17;
	case '1':
		++in->cur;
		goto yy18;
	default:	goto yy9;
	}
yy17:
	yych = *in->cur;
	switch (yych) {
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
		++in->cur;
		goto yy19;
	default:	goto yy9;
	}
yy18:
	yych = *in->cur;
	switch (yych) {
	case '0':
	case '1':
	case '2':
		++in->cur;
		goto yy19;
	default:	goto yy9;
	}
yy19:
	yych = *in->cur;
	switch (yych) {
	case '-':
		++in->cur;
		goto yy20;
	default:	goto yy9;
	}
yy20:
	yych = *in->cur;
	switch (yych) {
	case '0':
		++in->cur;
		goto yy21;
	case '1':
	case '2':
		++in->cur;
		goto yy22;
	case '3':
		++in->cur;
		goto yy23;
	default:	goto yy9;
	}
yy21:
	yych = *in->cur;
	switch (yych) {
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
		++in->cur;
		goto yy24;
	default:	goto yy9;
	}
yy22:
	yych = *in->cur;
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
		++in->cur;
		goto yy24;
	default:	goto yy9;
	}
yy23:
	yych = *in->cur;
	switch (yych) {
	case '0':
	case '1':
		++in->cur;
		goto yy24;
	default:	goto yy9;
	}
yy24:
	yych = *in->cur;
	switch (yych) {
	case 'T':
		++in->cur;
		goto yy25;
	default:	goto yy9;
	}
yy25:
	yych = *in->cur;
	switch (yych) {
	case '0':
	case '1':
		++in->cur;
		goto yy26;
	case '2':
		++in->cur;
		goto yy27;
	default:	goto yy9;
	}
yy26:
	yych = *in->cur;
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
		++in->cur;
		goto yy28;
	default:	goto yy9;
	}
yy27:
	yych = *in->cur;
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
		++in->cur;
		goto yy28;
	default:	goto yy9;
	}
yy28:
	yych = *in->cur;
	switch (yych) {
	case ':':
		++in->cur;
		goto yy29;
	default:	goto yy9;
	}
yy29:
	yych = *in->cur;
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
		++in->cur;
		goto yy30;
	default:	goto yy9;
	}
yy30:
	yych = *in->cur;
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
		++in->cur;
		goto yy31;
	default:	goto yy9;
	}
yy31:
	yych = *in->cur;
	switch (yych) {
	case ':':
		++in->cur;
		goto yy32;
	default:	goto yy9;
	}
yy32:
	yych = *in->cur;
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
		++in->cur;
		goto yy33;
	default:	goto yy9;
	}
yy33:
	yych = *in->cur;
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
		++in->cur;
		goto yy34;
	default:	goto yy9;
	}
yy34:
	yych = *in->cur;
	switch (yych) {
	case '+':
	case '-':
		in->yyt2 = in->cur;
		++in->cur;
		goto yy35;
	case 'Z':
		in->yyt2 = in->cur;
		++in->cur;
		goto yy36;
	default:	goto yy9;
	}
yy35:
	yych = *in->cur;
	switch (yych) {
	case '0':
	case '1':
		++in->cur;
		goto yy37;
	case '2':
		++in->cur;
		goto yy38;
	default:	goto yy9;
	}
yy36:
	yych = *in->cur;
	switch (yych) {
	case '\n':
		++in->cur;
		goto yy39;
	default:	goto yy9;
	}
yy37:
	yych = *in->cur;
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
		++in->cur;
		goto yy41;
	default:	goto yy9;
	}
yy38:
	yych = *in->cur;
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
		++in->cur;
		goto yy41;
	default:	goto yy9;
	}
yy39:
	y1 = in->yyt1;
	z1 = in->yyt2;
	y2 = in->yyt2 - 15;
	m1 = in->yyt2 - 14;
	m2 = in->yyt2 - 12;
	d1 = in->yyt2 - 11;
	d2 = in->yyt2 - 9;
	h1 = in->yyt2 - 8;
	h2 = in->yyt2 - 6;
	M1 = in->yyt2 - 5;
	M2 = in->yyt2 - 3;
	s1 = in->yyt2 - 2;
	s2 = in->yyt2;
	z2 = in->cur - 1;
#line 21 "../../../benchmarks/submatch_dfa_aot/src/re2c/datetime.re"
	{
        OUT("year: ",    y1, y2);
        OUT("month: ",   m1, m2);
        OUT("day: ",     d1, d2);
        OUT("hours: ",   h1, h2);
        OUT("minutes: ", M1, M2);
        OUT("seconds: ", s1, s2);
        OUT("tz: ",      z1, z2);
        outc(out, '\n');
        goto loop;
    }
#line 655 "gen/re2c/datetime-bc-tdfa1-es.c"
yy41:
	yych = *in->cur;
	switch (yych) {
	case ':':
		++in->cur;
		goto yy42;
	default:	goto yy9;
	}
yy42:
	yych = *in->cur;
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
		++in->cur;
		goto yy43;
	default:	goto yy9;
	}
yy43:
	yych = *in->cur;
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
		++in->cur;
		goto yy36;
	default:	goto yy9;
	}
}
#line 32 "../../../benchmarks/submatch_dfa_aot/src/re2c/datetime.re"

}
