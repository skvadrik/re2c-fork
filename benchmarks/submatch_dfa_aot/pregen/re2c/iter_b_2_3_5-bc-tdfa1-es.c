/* Generated by re2c 2.0.3 */
#line 1 "../../../benchmarks/submatch_dfa_aot/src/re2c/iter_b_2_3_5.re"
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
taglist_t *yyt2;
taglist_t *yyt3;

    taglistpool_t tlp;
    int eof;
} input_t;

static inline void taglistpool_clear(taglistpool_t *tlp, input_t *in)
{
    tlp->next = tlp->head;
    in->yyt1 = 0;
in->yyt2 = 0;
in->yyt3 = 0;

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


#define YYMAXFILL 2


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
in->yyt2 = 0;
in->yyt3 = 0;

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

#line 181 "gen/re2c/iter_b_2_3_5-bc-tdfa1-es.c"
{
	char yych;
	if ((in->lim - in->cur) < 2) if (fill(in, 2) != 0) return 1;
	yych = *in->cur;
	switch (yych) {
	case 0x00:
		++in->cur;
		goto yy2;
	case '\n':
		taglist(&in->yyt1, in->tok, in->tok - 1, &in->tlp);
		++in->cur;
		goto yy6;
	case 'a':
		++in->cur;
		goto yy8;
	default:
		++in->cur;
		goto yy4;
	}
yy2:
#line 3 "../../../benchmarks/submatch_dfa_aot/src/re2c/include_bc/fill.re"
	{ return 0; }
#line 204 "gen/re2c/iter_b_2_3_5-bc-tdfa1-es.c"
yy4:
yy5:
#line 23 "../../../benchmarks/submatch_dfa_aot/src/re2c/iter_b_2_3_5.re"
	{ return 1; }
#line 209 "gen/re2c/iter_b_2_3_5-bc-tdfa1-es.c"
yy6:
	t = in->yyt1;
#line 24 "../../../benchmarks/submatch_dfa_aot/src/re2c/iter_b_2_3_5.re"
	{
        print(out, in->tok, t);
        outc(out, '\n');
        taglistpool_clear(&in->tlp, in);
        goto loop;
    }
#line 219 "gen/re2c/iter_b_2_3_5-bc-tdfa1-es.c"
yy8:
	yych = *(in->mar = in->cur);
	switch (yych) {
	case 'a':
		++in->cur;
		goto yy9;
	default:	goto yy5;
	}
yy9:
	if (in->lim <= in->cur) if (fill(in, 1) != 0) return 1;
	yych = *in->cur;
	switch (yych) {
	case '\n':
		taglist(&in->yyt1, in->tok, in->cur, &in->tlp);
		++in->cur;
		goto yy6;
	case 'a':
		in->yyt2 = in->yyt1;
		taglist(&in->yyt2, in->tok, in->cur, &in->tlp);
		++in->cur;
		goto yy11;
	default:	goto yy10;
	}
yy10:
	in->cur = in->mar;
	goto yy5;
yy11:
	if (in->lim <= in->cur) if (fill(in, 1) != 0) return 1;
	yych = *in->cur;
	switch (yych) {
	case '\n':
		taglist(&in->yyt1, in->tok, in->cur, &in->tlp);
		++in->cur;
		goto yy6;
	case 'a':
		in->yyt3 = in->yyt1;
		taglist(&in->yyt3, in->tok, in->cur, &in->tlp);
		++in->cur;
		goto yy12;
	default:	goto yy10;
	}
yy12:
	if (in->lim <= in->cur) if (fill(in, 1) != 0) return 1;
	yych = *in->cur;
	switch (yych) {
	case '\n':
		in->yyt1 = in->yyt2;
		taglist(&in->yyt1, in->tok, in->cur, &in->tlp);
		++in->cur;
		goto yy6;
	case 'a':
		++in->cur;
		goto yy13;
	default:	goto yy10;
	}
yy13:
	if (in->lim <= in->cur) if (fill(in, 1) != 0) return 1;
	yych = *in->cur;
	switch (yych) {
	case '\n':
		taglist(&in->yyt1, in->tok, in->cur, &in->tlp);
		++in->cur;
		goto yy6;
	case 'a':
		taglist(&in->yyt1, in->tok, in->cur, &in->tlp);
		++in->cur;
		goto yy14;
	default:	goto yy10;
	}
yy14:
	if (in->lim <= in->cur) if (fill(in, 1) != 0) return 1;
	yych = *in->cur;
	switch (yych) {
	case '\n':
		in->yyt1 = in->yyt3;
		taglist(&in->yyt1, in->tok, in->cur, &in->tlp);
		++in->cur;
		goto yy6;
	case 'a':
		++in->cur;
		goto yy9;
	default:	goto yy10;
	}
}
#line 30 "../../../benchmarks/submatch_dfa_aot/src/re2c/iter_b_2_3_5.re"

}
