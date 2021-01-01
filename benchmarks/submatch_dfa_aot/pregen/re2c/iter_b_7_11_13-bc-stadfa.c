/* Generated by re2c 2.0.3 */
#line 1 "../../../benchmarks/submatch_dfa_aot/src/re2c/iter_b_7_11_13.re"
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
    
    taglist_t *yyt1;
taglist_t *yyt10;
taglist_t *yyt11;
taglist_t *yyt12;
taglist_t *yyt13;
taglist_t *yyt2;
taglist_t *yyt3;
taglist_t *yyt4;
taglist_t *yyt5;
taglist_t *yyt6;
taglist_t *yyt7;
taglist_t *yyt8;
taglist_t *yyt9;

    taglistpool_t tlp;
    int eof;
} input_t;

static inline void taglistpool_clear(taglistpool_t *tlp, input_t *in)
{
    tlp->next = tlp->head;
    in->yyt1 = 0;
in->yyt10 = 0;
in->yyt11 = 0;
in->yyt12 = 0;
in->yyt13 = 0;
in->yyt2 = 0;
in->yyt3 = 0;
in->yyt4 = 0;
in->yyt5 = 0;
in->yyt6 = 0;
in->yyt7 = 0;
in->yyt8 = 0;
in->yyt9 = 0;

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


#define YYMAXFILL 37


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
in->yyt10 = 0;
in->yyt11 = 0;
in->yyt12 = 0;
in->yyt13 = 0;
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


static const char *print(Output *out, const char *tok, const taglist_t *t)
{
    if (!t) return tok;

    const char *s = print(out, tok, t->pred);
    const char *e = tok + t->dist;
    outs(out, s, e);
    outc(out, '.');
    return e;
}

static int lex(input_t *in, Output *out)
{
    taglist_t *t = NULL;

loop:
    in->tok = in->cur;

#line 211 "gen/re2c/iter_b_7_11_13-bc-stadfa.c"
{
	char yych;
	if ((in->lim - in->cur) < 37) if (fill(in, 37) != 0) return 1;
	yych = *in->cur;
	in->yyt1 = in->yyt2;
	switch (yych) {
	case 0x00:	goto yy2;
	case '\n':	goto yy6;
	case 'a':	goto yy8;
	default:	goto yy4;
	}
yy2:
	++in->cur;
#line 3 "../../../benchmarks/submatch_dfa_aot/src/re2c/include_bc/fill.re"
	{ return 0; }
#line 227 "gen/re2c/iter_b_7_11_13-bc-stadfa.c"
yy4:
	++in->cur;
yy5:
#line 23 "../../../benchmarks/submatch_dfa_aot/src/re2c/iter_b_7_11_13.re"
	{ return 1; }
#line 233 "gen/re2c/iter_b_7_11_13-bc-stadfa.c"
yy6:
	++in->cur;
	taglist(&in->yyt1, in->tok, in->tok - 1, &in->tlp);
yy7:
	t = in->yyt1;
#line 24 "../../../benchmarks/submatch_dfa_aot/src/re2c/iter_b_7_11_13.re"
	{
        print(out, in->tok, t);
        outc(out, '\n');
        taglistpool_clear(&in->tlp, in);
        goto loop;
    }
#line 246 "gen/re2c/iter_b_7_11_13-bc-stadfa.c"
yy8:
	yych = *(in->mar = ++in->cur);
	in->yyt3 = in->yyt2;
	in->yyt5 = in->yyt2;
	in->yyt4 = in->yyt2;
	switch (yych) {
	case 'a':	goto yy9;
	default:	goto yy5;
	}
yy9:
	yych = *++in->cur;
	in->yyt6 = in->yyt3;
	switch (yych) {
	case 'a':	goto yy11;
	default:	goto yy10;
	}
yy10:
	in->cur = in->mar;
	goto yy5;
yy11:
	yych = *++in->cur;
	in->yyt8 = in->yyt6;
	in->yyt7 = in->yyt5;
	switch (yych) {
	case 'a':	goto yy12;
	default:	goto yy10;
	}
yy12:
	yych = *++in->cur;
	in->yyt10 = in->yyt8;
	in->yyt9 = in->yyt7;
	switch (yych) {
	case 'a':	goto yy13;
	default:	goto yy10;
	}
yy13:
	yych = *++in->cur;
	in->yyt12 = in->yyt10;
	in->yyt11 = in->yyt9;
	switch (yych) {
	case 'a':	goto yy14;
	default:	goto yy10;
	}
yy14:
	yych = *++in->cur;
	in->yyt13 = in->yyt12;
	in->yyt5 = in->yyt11;
	switch (yych) {
	case 'a':	goto yy15;
	default:	goto yy10;
	}
yy15:
	yych = *++in->cur;
	in->yyt2 = in->yyt13;
	in->yyt7 = in->yyt5;
	in->yyt1 = in->yyt13;
	switch (yych) {
	case '\n':	goto yy16;
	case 'a':	goto yy17;
	default:	goto yy10;
	}
yy16:
	++in->cur;
	taglist(&in->yyt1, in->tok, in->cur, &in->tlp);
	in->yyt1->dist += -1;
	goto yy7;
yy17:
	yych = *++in->cur;
	in->yyt9 = in->yyt7;
	in->yyt3 = in->yyt2;
	taglist(&in->yyt3, in->tok, in->cur, &in->tlp);
	in->yyt3->dist += -1;
	switch (yych) {
	case 'a':	goto yy18;
	default:	goto yy10;
	}
yy18:
	yych = *++in->cur;
	in->yyt6 = in->yyt3;
	in->yyt11 = in->yyt9;
	switch (yych) {
	case 'a':	goto yy19;
	default:	goto yy10;
	}
yy19:
	yych = *++in->cur;
	in->yyt8 = in->yyt6;
	in->yyt5 = in->yyt11;
	switch (yych) {
	case 'a':	goto yy20;
	default:	goto yy10;
	}
yy20:
	yych = *++in->cur;
	in->yyt2 = in->yyt5;
	in->yyt10 = in->yyt8;
	in->yyt1 = in->yyt5;
	switch (yych) {
	case '\n':	goto yy16;
	case 'a':	goto yy21;
	default:	goto yy10;
	}
yy21:
	yych = *++in->cur;
	in->yyt12 = in->yyt10;
	in->yyt3 = in->yyt2;
	taglist(&in->yyt3, in->tok, in->cur, &in->tlp);
	in->yyt3->dist += -1;
	in->yyt5 = in->yyt2;
	taglist(&in->yyt5, in->tok, in->cur, &in->tlp);
	in->yyt5->dist += -1;
	switch (yych) {
	case 'a':	goto yy22;
	default:	goto yy10;
	}
yy22:
	yych = *++in->cur;
	in->yyt2 = in->yyt4;
	in->yyt6 = in->yyt3;
	in->yyt13 = in->yyt12;
	in->yyt1 = in->yyt4;
	switch (yych) {
	case '\n':	goto yy16;
	case 'a':	goto yy23;
	default:	goto yy10;
	}
yy23:
	yych = *++in->cur;
	in->yyt8 = in->yyt6;
	in->yyt7 = in->yyt5;
	in->yyt1 = in->yyt13;
	in->yyt3 = in->yyt2;
	taglist(&in->yyt3, in->tok, in->cur, &in->tlp);
	in->yyt3->dist += -1;
	in->yyt5 = in->yyt2;
	taglist(&in->yyt5, in->tok, in->cur, &in->tlp);
	in->yyt5->dist += -1;
	in->yyt4 = in->yyt2;
	taglist(&in->yyt4, in->tok, in->cur, &in->tlp);
	in->yyt4->dist += -1;
	in->yyt2 = in->yyt13;
	switch (yych) {
	case '\n':	goto yy16;
	case 'a':	goto yy24;
	default:	goto yy10;
	}
yy24:
	yych = *++in->cur;
	in->yyt6 = in->yyt3;
	in->yyt10 = in->yyt8;
	in->yyt9 = in->yyt7;
	in->yyt3 = in->yyt2;
	taglist(&in->yyt3, in->tok, in->cur, &in->tlp);
	in->yyt3->dist += -1;
	switch (yych) {
	case 'a':	goto yy25;
	default:	goto yy10;
	}
yy25:
	yych = *++in->cur;
	in->yyt8 = in->yyt6;
	in->yyt12 = in->yyt10;
	in->yyt7 = in->yyt5;
	in->yyt11 = in->yyt9;
	in->yyt6 = in->yyt3;
	switch (yych) {
	case 'a':	goto yy26;
	default:	goto yy10;
	}
yy26:
	yych = *++in->cur;
	in->yyt10 = in->yyt8;
	in->yyt13 = in->yyt12;
	in->yyt9 = in->yyt7;
	in->yyt5 = in->yyt11;
	in->yyt8 = in->yyt6;
	switch (yych) {
	case 'a':	goto yy27;
	default:	goto yy10;
	}
yy27:
	yych = *++in->cur;
	in->yyt2 = in->yyt13;
	in->yyt12 = in->yyt10;
	in->yyt11 = in->yyt9;
	in->yyt7 = in->yyt5;
	in->yyt1 = in->yyt13;
	in->yyt10 = in->yyt8;
	switch (yych) {
	case '\n':	goto yy16;
	case 'a':	goto yy28;
	default:	goto yy10;
	}
yy28:
	yych = *++in->cur;
	in->yyt13 = in->yyt12;
	in->yyt5 = in->yyt11;
	in->yyt9 = in->yyt7;
	in->yyt3 = in->yyt2;
	taglist(&in->yyt3, in->tok, in->cur, &in->tlp);
	in->yyt3->dist += -1;
	in->yyt12 = in->yyt10;
	switch (yych) {
	case 'a':	goto yy29;
	default:	goto yy10;
	}
yy29:
	yych = *++in->cur;
	in->yyt2 = in->yyt13;
	in->yyt6 = in->yyt3;
	in->yyt7 = in->yyt5;
	in->yyt11 = in->yyt9;
	in->yyt1 = in->yyt13;
	in->yyt13 = in->yyt12;
	switch (yych) {
	case '\n':	goto yy16;
	case 'a':	goto yy30;
	default:	goto yy10;
	}
yy30:
	yych = *++in->cur;
	in->yyt8 = in->yyt6;
	in->yyt9 = in->yyt7;
	in->yyt5 = in->yyt11;
	in->yyt1 = in->yyt13;
	in->yyt3 = in->yyt2;
	taglist(&in->yyt3, in->tok, in->cur, &in->tlp);
	in->yyt3->dist += -1;
	in->yyt2 = in->yyt13;
	switch (yych) {
	case '\n':	goto yy16;
	case 'a':	goto yy31;
	default:	goto yy10;
	}
yy31:
	yych = *++in->cur;
	in->yyt6 = in->yyt3;
	in->yyt10 = in->yyt8;
	in->yyt11 = in->yyt9;
	in->yyt1 = in->yyt5;
	in->yyt3 = in->yyt2;
	taglist(&in->yyt3, in->tok, in->cur, &in->tlp);
	in->yyt3->dist += -1;
	in->yyt2 = in->yyt5;
	switch (yych) {
	case '\n':	goto yy16;
	case 'a':	goto yy32;
	default:	goto yy10;
	}
yy32:
	yych = *++in->cur;
	in->yyt8 = in->yyt6;
	in->yyt12 = in->yyt10;
	in->yyt5 = in->yyt11;
	in->yyt6 = in->yyt3;
	in->yyt3 = in->yyt2;
	taglist(&in->yyt3, in->tok, in->cur, &in->tlp);
	in->yyt3->dist += -1;
	switch (yych) {
	case 'a':	goto yy33;
	default:	goto yy10;
	}
yy33:
	yych = *++in->cur;
	in->yyt2 = in->yyt5;
	in->yyt10 = in->yyt8;
	in->yyt13 = in->yyt12;
	in->yyt1 = in->yyt5;
	in->yyt8 = in->yyt6;
	in->yyt6 = in->yyt3;
	switch (yych) {
	case '\n':	goto yy16;
	case 'a':	goto yy34;
	default:	goto yy10;
	}
yy34:
	yych = *++in->cur;
	in->yyt12 = in->yyt10;
	in->yyt1 = in->yyt13;
	in->yyt3 = in->yyt2;
	taglist(&in->yyt3, in->tok, in->cur, &in->tlp);
	in->yyt3->dist += -1;
	in->yyt5 = in->yyt2;
	taglist(&in->yyt5, in->tok, in->cur, &in->tlp);
	in->yyt5->dist += -1;
	in->yyt2 = in->yyt13;
	in->yyt10 = in->yyt8;
	in->yyt8 = in->yyt6;
	switch (yych) {
	case '\n':	goto yy16;
	case 'a':	goto yy35;
	default:	goto yy10;
	}
yy35:
	yych = *++in->cur;
	in->yyt6 = in->yyt3;
	in->yyt13 = in->yyt12;
	in->yyt1 = in->yyt4;
	in->yyt3 = in->yyt2;
	taglist(&in->yyt3, in->tok, in->cur, &in->tlp);
	in->yyt3->dist += -1;
	in->yyt2 = in->yyt4;
	in->yyt12 = in->yyt10;
	in->yyt10 = in->yyt8;
	switch (yych) {
	case '\n':	goto yy16;
	case 'a':	goto yy36;
	default:	goto yy10;
	}
yy36:
	yych = *++in->cur;
	in->yyt8 = in->yyt6;
	in->yyt7 = in->yyt5;
	in->yyt1 = in->yyt13;
	in->yyt6 = in->yyt3;
	in->yyt3 = in->yyt2;
	taglist(&in->yyt3, in->tok, in->cur, &in->tlp);
	in->yyt3->dist += -1;
	in->yyt5 = in->yyt2;
	taglist(&in->yyt5, in->tok, in->cur, &in->tlp);
	in->yyt5->dist += -1;
	in->yyt4 = in->yyt2;
	taglist(&in->yyt4, in->tok, in->cur, &in->tlp);
	in->yyt4->dist += -1;
	in->yyt2 = in->yyt13;
	in->yyt13 = in->yyt12;
	in->yyt12 = in->yyt10;
	switch (yych) {
	case '\n':	goto yy16;
	case 'a':	goto yy37;
	default:	goto yy10;
	}
yy37:
	yych = *++in->cur;
	in->yyt10 = in->yyt8;
	in->yyt9 = in->yyt7;
	in->yyt1 = in->yyt13;
	in->yyt8 = in->yyt6;
	in->yyt6 = in->yyt3;
	in->yyt3 = in->yyt2;
	taglist(&in->yyt3, in->tok, in->cur, &in->tlp);
	in->yyt3->dist += -1;
	in->yyt13 = in->yyt12;
	switch (yych) {
	case '\n':	goto yy16;
	case 'a':	goto yy38;
	default:	goto yy10;
	}
yy38:
	yych = *++in->cur;
	in->yyt12 = in->yyt10;
	in->yyt11 = in->yyt9;
	in->yyt1 = in->yyt13;
	in->yyt10 = in->yyt8;
	in->yyt8 = in->yyt6;
	in->yyt7 = in->yyt5;
	in->yyt6 = in->yyt3;
	in->yyt2 = in->yyt13;
	switch (yych) {
	case '\n':	goto yy16;
	case 'a':	goto yy39;
	default:	goto yy10;
	}
yy39:
	yych = *++in->cur;
	in->yyt13 = in->yyt12;
	in->yyt5 = in->yyt11;
	in->yyt12 = in->yyt10;
	in->yyt10 = in->yyt8;
	in->yyt9 = in->yyt7;
	in->yyt8 = in->yyt6;
	in->yyt3 = in->yyt2;
	taglist(&in->yyt3, in->tok, in->cur, &in->tlp);
	in->yyt3->dist += -1;
	switch (yych) {
	case 'a':	goto yy40;
	default:	goto yy10;
	}
yy40:
	yych = *++in->cur;
	in->yyt2 = in->yyt13;
	in->yyt7 = in->yyt5;
	in->yyt1 = in->yyt13;
	in->yyt13 = in->yyt12;
	in->yyt12 = in->yyt10;
	in->yyt11 = in->yyt9;
	in->yyt10 = in->yyt8;
	in->yyt6 = in->yyt3;
	switch (yych) {
	case '\n':	goto yy16;
	case 'a':	goto yy41;
	default:	goto yy10;
	}
yy41:
	yych = *++in->cur;
	in->yyt9 = in->yyt7;
	in->yyt1 = in->yyt13;
	in->yyt3 = in->yyt2;
	taglist(&in->yyt3, in->tok, in->cur, &in->tlp);
	in->yyt3->dist += -1;
	in->yyt13 = in->yyt12;
	in->yyt5 = in->yyt11;
	in->yyt12 = in->yyt10;
	in->yyt8 = in->yyt6;
	switch (yych) {
	case '\n':	goto yy16;
	case 'a':	goto yy42;
	default:	goto yy10;
	}
yy42:
	yych = *++in->cur;
	in->yyt6 = in->yyt3;
	in->yyt11 = in->yyt9;
	in->yyt1 = in->yyt13;
	in->yyt2 = in->yyt13;
	in->yyt13 = in->yyt12;
	in->yyt7 = in->yyt5;
	in->yyt10 = in->yyt8;
	switch (yych) {
	case '\n':	goto yy16;
	case 'a':	goto yy43;
	default:	goto yy10;
	}
yy43:
	yych = *++in->cur;
	in->yyt8 = in->yyt6;
	in->yyt5 = in->yyt11;
	in->yyt1 = in->yyt13;
	in->yyt3 = in->yyt2;
	taglist(&in->yyt3, in->tok, in->cur, &in->tlp);
	in->yyt3->dist += -1;
	in->yyt2 = in->yyt13;
	in->yyt9 = in->yyt7;
	in->yyt12 = in->yyt10;
	switch (yych) {
	case '\n':	goto yy16;
	case 'a':	goto yy44;
	default:	goto yy10;
	}
yy44:
	yych = *++in->cur;
	in->yyt10 = in->yyt8;
	in->yyt13 = in->yyt12;
	in->yyt1 = in->yyt5;
	in->yyt6 = in->yyt3;
	in->yyt3 = in->yyt2;
	taglist(&in->yyt3, in->tok, in->cur, &in->tlp);
	in->yyt3->dist += -1;
	in->yyt2 = in->yyt5;
	in->yyt11 = in->yyt9;
	switch (yych) {
	case '\n':	goto yy16;
	case 'a':	goto yy45;
	default:	goto yy10;
	}
yy45:
	yych = *++in->cur;
	in->yyt12 = in->yyt10;
	in->yyt5 = in->yyt11;
	in->yyt1 = in->yyt13;
	in->yyt8 = in->yyt6;
	in->yyt6 = in->yyt3;
	in->yyt3 = in->yyt2;
	taglist(&in->yyt3, in->tok, in->cur, &in->tlp);
	in->yyt3->dist += -1;
	in->yyt2 = in->yyt13;
	switch (yych) {
	case '\n':	goto yy16;
	case 'a':	goto yy46;
	default:	goto yy10;
	}
yy46:
	++in->cur;
	if (in->lim <= in->cur) if (fill(in, 1) != 0) return 1;
	yych = *in->cur;
	in->yyt13 = in->yyt12;
	in->yyt1 = in->yyt5;
	in->yyt10 = in->yyt8;
	in->yyt8 = in->yyt6;
	in->yyt6 = in->yyt3;
	in->yyt3 = in->yyt2;
	taglist(&in->yyt3, in->tok, in->cur, &in->tlp);
	in->yyt3->dist += -1;
	in->yyt2 = in->yyt5;
	switch (yych) {
	case '\n':	goto yy16;
	case 'a':	goto yy47;
	default:	goto yy10;
	}
yy47:
	++in->cur;
	if (in->lim <= in->cur) if (fill(in, 1) != 0) return 1;
	yych = *in->cur;
	in->yyt1 = in->yyt13;
	in->yyt5 = in->yyt2;
	taglist(&in->yyt5, in->tok, in->cur, &in->tlp);
	in->yyt5->dist += -1;
	in->yyt7 = in->yyt2;
	in->yyt2 = in->yyt13;
	in->yyt12 = in->yyt10;
	in->yyt10 = in->yyt8;
	in->yyt8 = in->yyt6;
	in->yyt6 = in->yyt3;
	in->yyt3 = in->yyt7;
	taglist(&in->yyt3, in->tok, in->cur, &in->tlp);
	in->yyt3->dist += -1;
	switch (yych) {
	case '\n':	goto yy16;
	case 'a':	goto yy48;
	default:	goto yy10;
	}
yy48:
	++in->cur;
	if (in->lim <= in->cur) if (fill(in, 1) != 0) return 1;
	yych = *in->cur;
	in->yyt13 = in->yyt12;
	in->yyt1 = in->yyt4;
	in->yyt12 = in->yyt10;
	in->yyt10 = in->yyt8;
	in->yyt8 = in->yyt6;
	in->yyt6 = in->yyt3;
	in->yyt3 = in->yyt2;
	taglist(&in->yyt3, in->tok, in->cur, &in->tlp);
	in->yyt3->dist += -1;
	in->yyt2 = in->yyt4;
	switch (yych) {
	case '\n':	goto yy16;
	case 'a':	goto yy49;
	default:	goto yy10;
	}
yy49:
	++in->cur;
	if (in->lim <= in->cur) if (fill(in, 1) != 0) return 1;
	yych = *in->cur;
	in->yyt1 = in->yyt13;
	in->yyt7 = in->yyt5;
	in->yyt5 = in->yyt2;
	taglist(&in->yyt5, in->tok, in->cur, &in->tlp);
	in->yyt5->dist += -1;
	in->yyt4 = in->yyt2;
	taglist(&in->yyt4, in->tok, in->cur, &in->tlp);
	in->yyt4->dist += -1;
	in->yyt9 = in->yyt2;
	in->yyt2 = in->yyt13;
	in->yyt13 = in->yyt12;
	in->yyt12 = in->yyt10;
	in->yyt10 = in->yyt8;
	in->yyt8 = in->yyt6;
	in->yyt6 = in->yyt3;
	in->yyt3 = in->yyt9;
	taglist(&in->yyt3, in->tok, in->cur, &in->tlp);
	in->yyt3->dist += -1;
	switch (yych) {
	case '\n':	goto yy16;
	case 'a':	goto yy50;
	default:	goto yy10;
	}
yy50:
	++in->cur;
	if (in->lim <= in->cur) if (fill(in, 1) != 0) return 1;
	yych = *in->cur;
	in->yyt1 = in->yyt13;
	in->yyt9 = in->yyt7;
	in->yyt13 = in->yyt12;
	in->yyt12 = in->yyt10;
	in->yyt10 = in->yyt8;
	in->yyt8 = in->yyt6;
	in->yyt6 = in->yyt3;
	in->yyt3 = in->yyt2;
	taglist(&in->yyt3, in->tok, in->cur, &in->tlp);
	in->yyt3->dist += -1;
	switch (yych) {
	case '\n':	goto yy16;
	case 'a':	goto yy51;
	default:	goto yy10;
	}
yy51:
	++in->cur;
	if (in->lim <= in->cur) if (fill(in, 1) != 0) return 1;
	yych = *in->cur;
	in->yyt1 = in->yyt13;
	in->yyt11 = in->yyt9;
	in->yyt7 = in->yyt5;
	in->yyt2 = in->yyt13;
	in->yyt13 = in->yyt12;
	in->yyt12 = in->yyt10;
	in->yyt10 = in->yyt8;
	in->yyt8 = in->yyt6;
	in->yyt6 = in->yyt3;
	switch (yych) {
	case '\n':	goto yy16;
	case 'a':	goto yy52;
	default:	goto yy10;
	}
yy52:
	++in->cur;
	if (in->lim <= in->cur) if (fill(in, 1) != 0) return 1;
	yych = *in->cur;
	in->yyt1 = in->yyt13;
	in->yyt5 = in->yyt11;
	in->yyt9 = in->yyt7;
	in->yyt13 = in->yyt12;
	in->yyt12 = in->yyt10;
	in->yyt10 = in->yyt8;
	in->yyt8 = in->yyt6;
	in->yyt3 = in->yyt2;
	taglist(&in->yyt3, in->tok, in->cur, &in->tlp);
	in->yyt3->dist += -1;
	switch (yych) {
	case '\n':	goto yy16;
	case 'a':	goto yy53;
	default:	goto yy10;
	}
yy53:
	++in->cur;
	if (in->lim <= in->cur) if (fill(in, 1) != 0) return 1;
	yych = *in->cur;
	in->yyt1 = in->yyt13;
	in->yyt7 = in->yyt5;
	in->yyt11 = in->yyt9;
	in->yyt2 = in->yyt13;
	in->yyt13 = in->yyt12;
	in->yyt12 = in->yyt10;
	in->yyt10 = in->yyt8;
	in->yyt6 = in->yyt3;
	switch (yych) {
	case '\n':	goto yy16;
	case 'a':	goto yy54;
	default:	goto yy10;
	}
yy54:
	++in->cur;
	if (in->lim <= in->cur) if (fill(in, 1) != 0) return 1;
	yych = *in->cur;
	in->yyt1 = in->yyt13;
	in->yyt9 = in->yyt7;
	in->yyt5 = in->yyt11;
	in->yyt13 = in->yyt12;
	in->yyt12 = in->yyt10;
	in->yyt8 = in->yyt6;
	in->yyt3 = in->yyt2;
	taglist(&in->yyt3, in->tok, in->cur, &in->tlp);
	in->yyt3->dist += -1;
	switch (yych) {
	case '\n':	goto yy16;
	case 'a':	goto yy55;
	default:	goto yy10;
	}
yy55:
	++in->cur;
	if (in->lim <= in->cur) if (fill(in, 1) != 0) return 1;
	yych = *in->cur;
	in->yyt1 = in->yyt13;
	in->yyt11 = in->yyt9;
	in->yyt7 = in->yyt5;
	in->yyt2 = in->yyt13;
	in->yyt13 = in->yyt12;
	in->yyt10 = in->yyt8;
	in->yyt6 = in->yyt3;
	switch (yych) {
	case '\n':	goto yy16;
	case 'a':	goto yy56;
	default:	goto yy10;
	}
yy56:
	++in->cur;
	if (in->lim <= in->cur) if (fill(in, 1) != 0) return 1;
	yych = *in->cur;
	in->yyt5 = in->yyt11;
	in->yyt1 = in->yyt13;
	in->yyt9 = in->yyt7;
	in->yyt3 = in->yyt2;
	in->yyt2 = in->yyt13;
	in->yyt12 = in->yyt10;
	in->yyt8 = in->yyt6;
	taglist(&in->yyt3, in->tok, in->cur, &in->tlp);
	in->yyt3->dist += -1;
	switch (yych) {
	case '\n':	goto yy16;
	case 'a':	goto yy57;
	default:	goto yy10;
	}
yy57:
	++in->cur;
	if (in->lim <= in->cur) if (fill(in, 1) != 0) return 1;
	yych = *in->cur;
	in->yyt13 = in->yyt12;
	in->yyt1 = in->yyt5;
	in->yyt10 = in->yyt8;
	in->yyt6 = in->yyt3;
	in->yyt3 = in->yyt2;
	taglist(&in->yyt3, in->tok, in->cur, &in->tlp);
	in->yyt3->dist += -1;
	in->yyt2 = in->yyt5;
	in->yyt11 = in->yyt9;
	switch (yych) {
	case '\n':	goto yy16;
	case 'a':	goto yy58;
	default:	goto yy10;
	}
yy58:
	++in->cur;
	if (in->lim <= in->cur) if (fill(in, 1) != 0) return 1;
	yych = *in->cur;
	in->yyt5 = in->yyt11;
	in->yyt1 = in->yyt13;
	in->yyt7 = in->yyt2;
	in->yyt2 = in->yyt13;
	in->yyt12 = in->yyt10;
	in->yyt8 = in->yyt6;
	in->yyt6 = in->yyt3;
	in->yyt3 = in->yyt7;
	taglist(&in->yyt3, in->tok, in->cur, &in->tlp);
	in->yyt3->dist += -1;
	switch (yych) {
	case '\n':	goto yy16;
	case 'a':	goto yy46;
	default:	goto yy10;
	}
}
#line 30 "../../../benchmarks/submatch_dfa_aot/src/re2c/iter_b_7_11_13.re"

}
