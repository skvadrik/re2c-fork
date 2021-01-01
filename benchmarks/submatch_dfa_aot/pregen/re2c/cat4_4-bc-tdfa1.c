/* Generated by re2c 2.0.3 */
#line 1 "../../../benchmarks/submatch_dfa_aot/src/re2c/cat4_4.re"
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
char *yyt17;
char *yyt18;
char *yyt19;
char *yyt2;
char *yyt20;
char *yyt21;
char *yyt22;
char *yyt23;
char *yyt24;
char *yyt25;
char *yyt26;
char *yyt27;
char *yyt28;
char *yyt29;
char *yyt3;
char *yyt30;
char *yyt31;
char *yyt32;
char *yyt33;
char *yyt34;
char *yyt35;
char *yyt36;
char *yyt37;
char *yyt38;
char *yyt39;
char *yyt4;
char *yyt40;
char *yyt41;
char *yyt42;
char *yyt43;
char *yyt44;
char *yyt45;
char *yyt46;
char *yyt47;
char *yyt48;
char *yyt49;
char *yyt5;
char *yyt50;
char *yyt51;
char *yyt52;
char *yyt53;
char *yyt54;
char *yyt55;
char *yyt56;
char *yyt57;
char *yyt58;
char *yyt59;
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

#line 4 "../../../benchmarks/submatch_dfa_aot/src/re2c/include_bc/fill.re"


#define YYMAXFILL 16


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
if (in->yyt10) in->yyt10 -= free;
if (in->yyt11) in->yyt11 -= free;
if (in->yyt12) in->yyt12 -= free;
if (in->yyt13) in->yyt13 -= free;
if (in->yyt14) in->yyt14 -= free;
if (in->yyt15) in->yyt15 -= free;
if (in->yyt16) in->yyt16 -= free;
if (in->yyt17) in->yyt17 -= free;
if (in->yyt18) in->yyt18 -= free;
if (in->yyt19) in->yyt19 -= free;
if (in->yyt2) in->yyt2 -= free;
if (in->yyt20) in->yyt20 -= free;
if (in->yyt21) in->yyt21 -= free;
if (in->yyt22) in->yyt22 -= free;
if (in->yyt23) in->yyt23 -= free;
if (in->yyt24) in->yyt24 -= free;
if (in->yyt25) in->yyt25 -= free;
if (in->yyt26) in->yyt26 -= free;
if (in->yyt27) in->yyt27 -= free;
if (in->yyt28) in->yyt28 -= free;
if (in->yyt29) in->yyt29 -= free;
if (in->yyt3) in->yyt3 -= free;
if (in->yyt30) in->yyt30 -= free;
if (in->yyt31) in->yyt31 -= free;
if (in->yyt32) in->yyt32 -= free;
if (in->yyt33) in->yyt33 -= free;
if (in->yyt34) in->yyt34 -= free;
if (in->yyt35) in->yyt35 -= free;
if (in->yyt36) in->yyt36 -= free;
if (in->yyt37) in->yyt37 -= free;
if (in->yyt38) in->yyt38 -= free;
if (in->yyt39) in->yyt39 -= free;
if (in->yyt4) in->yyt4 -= free;
if (in->yyt40) in->yyt40 -= free;
if (in->yyt41) in->yyt41 -= free;
if (in->yyt42) in->yyt42 -= free;
if (in->yyt43) in->yyt43 -= free;
if (in->yyt44) in->yyt44 -= free;
if (in->yyt45) in->yyt45 -= free;
if (in->yyt46) in->yyt46 -= free;
if (in->yyt47) in->yyt47 -= free;
if (in->yyt48) in->yyt48 -= free;
if (in->yyt49) in->yyt49 -= free;
if (in->yyt5) in->yyt5 -= free;
if (in->yyt50) in->yyt50 -= free;
if (in->yyt51) in->yyt51 -= free;
if (in->yyt52) in->yyt52 -= free;
if (in->yyt53) in->yyt53 -= free;
if (in->yyt54) in->yyt54 -= free;
if (in->yyt55) in->yyt55 -= free;
if (in->yyt56) in->yyt56 -= free;
if (in->yyt57) in->yyt57 -= free;
if (in->yyt58) in->yyt58 -= free;
if (in->yyt59) in->yyt59 -= free;
if (in->yyt6) in->yyt6 -= free;
if (in->yyt7) in->yyt7 -= free;
if (in->yyt8) in->yyt8 -= free;
if (in->yyt9) in->yyt9 -= free;


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
in->yyt14 = 0;
in->yyt15 = 0;
in->yyt16 = 0;
in->yyt17 = 0;
in->yyt18 = 0;
in->yyt19 = 0;
in->yyt2 = 0;
in->yyt20 = 0;
in->yyt21 = 0;
in->yyt22 = 0;
in->yyt23 = 0;
in->yyt24 = 0;
in->yyt25 = 0;
in->yyt26 = 0;
in->yyt27 = 0;
in->yyt28 = 0;
in->yyt29 = 0;
in->yyt3 = 0;
in->yyt30 = 0;
in->yyt31 = 0;
in->yyt32 = 0;
in->yyt33 = 0;
in->yyt34 = 0;
in->yyt35 = 0;
in->yyt36 = 0;
in->yyt37 = 0;
in->yyt38 = 0;
in->yyt39 = 0;
in->yyt4 = 0;
in->yyt40 = 0;
in->yyt41 = 0;
in->yyt42 = 0;
in->yyt43 = 0;
in->yyt44 = 0;
in->yyt45 = 0;
in->yyt46 = 0;
in->yyt47 = 0;
in->yyt48 = 0;
in->yyt49 = 0;
in->yyt5 = 0;
in->yyt50 = 0;
in->yyt51 = 0;
in->yyt52 = 0;
in->yyt53 = 0;
in->yyt54 = 0;
in->yyt55 = 0;
in->yyt56 = 0;
in->yyt57 = 0;
in->yyt58 = 0;
in->yyt59 = 0;
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


static int lex(input_t *in, Output *out)
{
    const char
        *a0, *a1, *a2, *a3,
        *b0, *b1, *b2, *b3;
loop:
    in->tok = in->cur;

#line 339 "gen/re2c/cat4_4-bc-tdfa1.c"
{
	char yych;
	if ((in->lim - in->cur) < 16) if (fill(in, 16) != 0) return 1;
	yych = *in->cur;
	switch (yych) {
	case 0x00:	goto yy2;
	case 'a':
		in->yyt1 = in->yyt2 = in->cur;
		goto yy6;
	default:	goto yy4;
	}
yy2:
	++in->cur;
#line 3 "../../../benchmarks/submatch_dfa_aot/src/re2c/include_bc/fill.re"
	{ return 0; }
#line 355 "gen/re2c/cat4_4-bc-tdfa1.c"
yy4:
	++in->cur;
yy5:
#line 11 "../../../benchmarks/submatch_dfa_aot/src/re2c/cat4_4.re"
	{ return 1; }
#line 361 "gen/re2c/cat4_4-bc-tdfa1.c"
yy6:
	yych = *(in->mar = ++in->cur);
	switch (yych) {
	case 'a':
		in->yyt8 = in->cur;
		goto yy7;
	default:	goto yy5;
	}
yy7:
	yych = *++in->cur;
	switch (yych) {
	case 'a':
		in->yyt9 = in->cur;
		goto yy9;
	default:	goto yy8;
	}
yy8:
	in->cur = in->mar;
	goto yy5;
yy9:
	yych = *++in->cur;
	switch (yych) {
	case 'a':
		in->yyt10 = in->cur;
		goto yy10;
	default:	goto yy8;
	}
yy10:
	yych = *++in->cur;
	switch (yych) {
	case 'a':
		in->yyt3 = in->yyt4 = in->yyt5 = in->cur;
		goto yy11;
	default:	goto yy13;
	}
yy11:
	yych = *++in->cur;
	switch (yych) {
	case 'a':
		in->yyt11 = in->yyt12 = in->yyt13 = in->cur;
		goto yy14;
	case 'b':
		in->yyt2 = in->yyt8;
		goto yy12;
	default:	goto yy8;
	}
yy12:
	++in->cur;
	if ((in->lim - in->cur) < 12) if (fill(in, 12) != 0) return 1;
	yych = *in->cur;
yy13:
	switch (yych) {
	case 'a':
		in->yyt4 = in->yyt5 = in->cur;
		goto yy15;
	case 'b':	goto yy12;
	default:	goto yy8;
	}
yy14:
	yych = *++in->cur;
	switch (yych) {
	case 'a':
		in->yyt14 = in->yyt21 = in->yyt22 = in->cur;
		goto yy16;
	case 'b':
		in->yyt2 = in->yyt9;
		goto yy12;
	default:	goto yy8;
	}
yy15:
	yych = *++in->cur;
	switch (yych) {
	case 'a':
		in->yyt11 = in->cur;
		goto yy17;
	default:	goto yy8;
	}
yy16:
	yych = *++in->cur;
	switch (yych) {
	case 'a':
		in->yyt23 = in->yyt24 = in->yyt25 = in->cur;
		goto yy18;
	case 'b':
		in->yyt2 = in->yyt10;
		goto yy12;
	default:	goto yy8;
	}
yy17:
	yych = *++in->cur;
	switch (yych) {
	case 'a':
		in->yyt13 = in->cur;
		goto yy19;
	default:	goto yy8;
	}
yy18:
	yych = *++in->cur;
	switch (yych) {
	case 'a':
		in->yyt6 = in->yyt7 = in->yyt35 = in->yyt36 = in->yyt37 = in->cur;
		goto yy20;
	default:	goto yy22;
	}
yy19:
	yych = *++in->cur;
	switch (yych) {
	case 'a':
		in->yyt21 = in->cur;
		goto yy23;
	default:	goto yy8;
	}
yy20:
	yych = *++in->cur;
	switch (yych) {
	case 'a':
		in->yyt33 = in->yyt34 = in->yyt42 = in->yyt43 = in->yyt44 = in->cur;
		goto yy24;
	case 'b':
		in->yyt2 = in->yyt8;
		in->yyt3 = in->yyt11;
		in->yyt4 = in->yyt12;
		in->yyt5 = in->yyt13;
		goto yy21;
	default:	goto yy8;
	}
yy21:
	++in->cur;
	if ((in->lim - in->cur) < 12) if (fill(in, 12) != 0) return 1;
	yych = *in->cur;
yy22:
	switch (yych) {
	case 'a':
		in->yyt6 = in->yyt7 = in->yyt8 = in->yyt9 = in->cur;
		goto yy25;
	case 'b':	goto yy21;
	default:	goto yy8;
	}
yy23:
	yych = *++in->cur;
	switch (yych) {
	case 'a':
		in->yyt6 = in->yyt7 = in->yyt10 = in->cur;
		goto yy26;
	default:	goto yy28;
	}
yy24:
	yych = *++in->cur;
	switch (yych) {
	case 'a':
		in->yyt45 = in->yyt46 = in->yyt47 = in->yyt48 = in->yyt53 = in->cur;
		goto yy29;
	case 'b':
		in->yyt2 = in->yyt9;
		in->yyt3 = in->yyt14;
		in->yyt4 = in->yyt21;
		in->yyt5 = in->yyt22;
		goto yy21;
	default:	goto yy8;
	}
yy25:
	yych = *++in->cur;
	switch (yych) {
	case 'a':
		in->yyt11 = in->yyt12 = in->cur;
		goto yy30;
	default:	goto yy8;
	}
yy26:
	yych = *++in->cur;
	switch (yych) {
	case 'a':
		in->yyt42 = in->yyt43 = in->yyt44 = in->cur;
		goto yy31;
	case 'b':
		in->yyt5 = in->yyt11;
		goto yy27;
	default:	goto yy8;
	}
yy27:
	++in->cur;
	if ((in->lim - in->cur) < 8) if (fill(in, 8) != 0) return 1;
	yych = *in->cur;
yy28:
	switch (yych) {
	case 'a':
		in->yyt6 = in->yyt7 = in->cur;
		goto yy32;
	case 'b':	goto yy27;
	default:	goto yy8;
	}
yy29:
	yych = *++in->cur;
	switch (yych) {
	case 'a':
		in->yyt54 = in->yyt55 = in->yyt56 = in->yyt57 = in->yyt58 = in->cur;
		goto yy33;
	case 'b':
		in->yyt2 = in->yyt10;
		in->yyt3 = in->yyt23;
		in->yyt4 = in->yyt24;
		in->yyt5 = in->yyt25;
		goto yy21;
	default:	goto yy8;
	}
yy30:
	yych = *++in->cur;
	switch (yych) {
	case 'a':
		in->yyt13 = in->yyt14 = in->cur;
		goto yy34;
	default:	goto yy8;
	}
yy31:
	yych = *++in->cur;
	switch (yych) {
	case 'a':
		in->yyt53 = in->yyt54 = in->yyt55 = in->cur;
		goto yy35;
	case 'b':
		in->yyt5 = in->yyt13;
		goto yy27;
	default:	goto yy8;
	}
yy32:
	yych = *++in->cur;
	switch (yych) {
	case 'a':
		in->yyt11 = in->cur;
		goto yy36;
	default:	goto yy8;
	}
yy33:
	yych = *++in->cur;
	switch (yych) {
	case 'a':
		in->yyt15 = in->yyt16 = in->yyt17 = in->yyt18 = in->yyt19 = in->yyt20 = in->yyt59 = in->cur;
		goto yy37;
	default:	goto yy39;
	}
yy34:
	yych = *++in->cur;
	switch (yych) {
	case 'a':
		in->yyt21 = in->yyt22 = in->cur;
		goto yy40;
	default:	goto yy8;
	}
yy35:
	yych = *++in->cur;
	switch (yych) {
	case 'a':
		in->yyt23 = in->yyt24 = in->yyt25 = in->cur;
		goto yy41;
	case 'b':
		in->yyt5 = in->yyt21;
		goto yy27;
	default:	goto yy8;
	}
yy36:
	yych = *++in->cur;
	switch (yych) {
	case 'a':
		in->yyt12 = in->cur;
		goto yy42;
	default:	goto yy8;
	}
yy37:
	yych = *++in->cur;
	switch (yych) {
	case 'a':
		in->yyt26 = in->yyt27 = in->yyt28 = in->yyt29 = in->yyt30 = in->yyt31 = in->yyt32 = in->cur;
		goto yy43;
	case 'b':
		in->yyt2 = in->yyt8;
		in->yyt3 = in->yyt11;
		in->yyt4 = in->yyt12;
		in->yyt5 = in->yyt13;
		in->yyt6 = in->yyt43;
		in->yyt7 = in->yyt44;
		in->yyt35 = in->yyt33;
		in->yyt36 = in->yyt34;
		in->yyt37 = in->yyt42;
		goto yy38;
	default:	goto yy8;
	}
yy38:
	++in->cur;
	if ((in->lim - in->cur) < 12) if (fill(in, 12) != 0) return 1;
	yych = *in->cur;
yy39:
	switch (yych) {
	case 'a':
		in->yyt8 = in->yyt9 = in->yyt17 = in->yyt19 = in->yyt20 = in->cur;
		goto yy44;
	case 'b':	goto yy38;
	default:	goto yy8;
	}
yy40:
	yych = *++in->cur;
	switch (yych) {
	case 'a':
		in->yyt10 = in->yyt19 = in->yyt20 = in->yyt33 = in->yyt34 = in->cur;
		goto yy45;
	default:	goto yy47;
	}
yy41:
	yych = *++in->cur;
	switch (yych) {
	case 'a':
		in->yyt19 = in->yyt20 = in->yyt35 = in->yyt36 = in->yyt37 = in->cur;
		goto yy48;
	default:	goto yy50;
	}
yy42:
	yych = *++in->cur;
	switch (yych) {
	case 'a':
		in->yyt13 = in->cur;
		goto yy51;
	default:	goto yy8;
	}
yy43:
	yych = *++in->cur;
	switch (yych) {
	case 'a':
		in->yyt38 = in->yyt39 = in->yyt40 = in->yyt41 = in->cur;
		goto yy52;
	case 'b':
		in->yyt2 = in->yyt9;
		in->yyt3 = in->yyt14;
		in->yyt4 = in->yyt21;
		in->yyt5 = in->yyt22;
		in->yyt6 = in->yyt48;
		in->yyt7 = in->yyt53;
		in->yyt35 = in->yyt45;
		in->yyt36 = in->yyt46;
		in->yyt37 = in->yyt47;
		goto yy38;
	default:	goto yy8;
	}
yy44:
	yych = *++in->cur;
	switch (yych) {
	case 'a':
		in->yyt11 = in->yyt12 = in->cur;
		goto yy53;
	default:	goto yy8;
	}
yy45:
	yych = *++in->cur;
	switch (yych) {
	case 'a':
		in->yyt42 = in->yyt43 = in->yyt44 = in->yyt45 = in->yyt46 = in->cur;
		goto yy54;
	case 'b':
		in->yyt7 = in->yyt12;
		in->yyt9 = in->yyt11;
		goto yy46;
	default:	goto yy8;
	}
yy46:
	++in->cur;
	if ((in->lim - in->cur) < 8) if (fill(in, 8) != 0) return 1;
	yych = *in->cur;
yy47:
	switch (yych) {
	case 'a':
		in->yyt10 = in->yyt15 = in->yyt19 = in->yyt20 = in->cur;
		goto yy55;
	case 'b':	goto yy46;
	default:	goto yy8;
	}
yy48:
	yych = *++in->cur;
	switch (yych) {
	case 'a':
		in->yyt12 = in->yyt45 = in->yyt46 = in->yyt47 = in->yyt48 = in->cur;
		goto yy56;
	case 'b':
		in->yyt5 = in->yyt11;
		in->yyt6 = in->yyt43;
		in->yyt7 = in->yyt44;
		in->yyt10 = in->yyt42;
		goto yy49;
	default:	goto yy8;
	}
yy49:
	++in->cur;
	if ((in->lim - in->cur) < 8) if (fill(in, 8) != 0) return 1;
	yych = *in->cur;
yy50:
	switch (yych) {
	case 'a':
		in->yyt3 = in->yyt8 = in->yyt19 = in->yyt20 = in->cur;
		goto yy57;
	case 'b':	goto yy49;
	default:	goto yy8;
	}
yy51:
	yych = *++in->cur;
	switch (yych) {
	case 'a':
		in->yyt14 = in->yyt19 = in->yyt20 = in->cur;
		goto yy58;
	default:	goto yy60;
	}
yy52:
	yych = *++in->cur;
	switch (yych) {
	case 'a':
		in->yyt49 = in->yyt50 = in->yyt51 = in->yyt52 = in->cur;
		goto yy61;
	case 'b':
		in->yyt2 = in->yyt10;
		in->yyt3 = in->yyt23;
		in->yyt4 = in->yyt24;
		in->yyt5 = in->yyt25;
		in->yyt6 = in->yyt57;
		in->yyt7 = in->yyt58;
		in->yyt35 = in->yyt54;
		in->yyt36 = in->yyt55;
		in->yyt37 = in->yyt56;
		goto yy38;
	default:	goto yy8;
	}
yy53:
	yych = *++in->cur;
	switch (yych) {
	case 'a':
		in->yyt13 = in->yyt14 = in->cur;
		goto yy63;
	default:	goto yy8;
	}
yy54:
	yych = *++in->cur;
	switch (yych) {
	case 'a':
		in->yyt53 = in->yyt54 = in->yyt55 = in->yyt56 = in->yyt57 = in->cur;
		goto yy64;
	case 'b':
		in->yyt7 = in->yyt14;
		in->yyt9 = in->yyt13;
		goto yy46;
	default:	goto yy8;
	}
yy55:
	yych = *++in->cur;
	switch (yych) {
	case 'a':
		in->yyt11 = in->cur;
		goto yy65;
	default:	goto yy8;
	}
yy56:
	yych = *++in->cur;
	switch (yych) {
	case 'a':
		in->yyt14 = in->yyt56 = in->yyt57 = in->yyt58 = in->yyt59 = in->cur;
		goto yy66;
	case 'b':
		in->yyt5 = in->yyt13;
		in->yyt6 = in->yyt54;
		in->yyt7 = in->yyt55;
		in->yyt10 = in->yyt53;
		goto yy49;
	default:	goto yy8;
	}
yy57:
	yych = *++in->cur;
	switch (yych) {
	case 'a':
		in->yyt9 = in->yyt11 = in->cur;
		goto yy67;
	default:	goto yy8;
	}
yy58:
	yych = *++in->cur;
	switch (yych) {
	case 'a':
		in->yyt21 = in->yyt22 = in->yyt23 = in->cur;
		goto yy68;
	case 'b':
		in->yyt7 = in->yyt11;
		goto yy59;
	default:	goto yy8;
	}
yy59:
	++in->cur;
	if ((in->lim - in->cur) < 4) if (fill(in, 4) != 0) return 1;
	yych = *in->cur;
yy60:
	switch (yych) {
	case 'a':
		in->yyt19 = in->yyt20 = in->cur;
		goto yy69;
	case 'b':	goto yy59;
	default:	goto yy8;
	}
yy61:
	++in->cur;
	if (in->lim <= in->cur) if (fill(in, 1) != 0) return 1;
	yych = *in->cur;
	switch (yych) {
	case '\n':	goto yy70;
	case 'a':
		in->yyt2 = in->yyt8;
		in->yyt4 = in->yyt12;
		in->yyt5 = in->yyt13;
		in->yyt6 = in->yyt43;
		in->yyt7 = in->yyt44;
		in->yyt8 = in->yyt9;
		in->yyt9 = in->yyt10;
		in->yyt12 = in->yyt21;
		in->yyt13 = in->yyt22;
		in->yyt19 = in->yyt31;
		in->yyt20 = in->yyt32;
		in->yyt21 = in->yyt24;
		in->yyt22 = in->yyt25;
		in->yyt31 = in->yyt41;
		in->yyt32 = in->yyt41;
		in->yyt41 = in->yyt52;
		in->yyt43 = in->yyt48;
		in->yyt44 = in->yyt53;
		in->yyt48 = in->yyt57;
		in->yyt53 = in->yyt58;
		in->yyt52 = in->cur;
		in->yyt10 = in->yyt3;
		in->yyt24 = in->yyt36;
		in->yyt25 = in->yyt37;
		in->yyt36 = in->yyt34;
		in->yyt37 = in->yyt42;
		in->yyt42 = in->yyt47;
		in->yyt47 = in->yyt56;
		in->yyt57 = in->yyt17;
		in->yyt58 = in->yyt18;
		in->yyt3 = in->yyt11;
		in->yyt11 = in->yyt14;
		in->yyt14 = in->yyt23;
		in->yyt17 = in->yyt29;
		in->yyt18 = in->yyt30;
		in->yyt29 = in->yyt40;
		in->yyt30 = in->yyt40;
		in->yyt34 = in->yyt46;
		in->yyt40 = in->yyt51;
		in->yyt46 = in->yyt55;
		in->yyt51 = in->cur;
		in->yyt23 = in->yyt35;
		in->yyt35 = in->yyt33;
		in->yyt55 = in->yyt15;
		in->yyt56 = in->yyt16;
		in->yyt15 = in->yyt27;
		in->yyt16 = in->yyt28;
		in->yyt27 = in->yyt39;
		in->yyt28 = in->yyt39;
		in->yyt33 = in->yyt45;
		in->yyt39 = in->yyt50;
		in->yyt45 = in->yyt54;
		in->yyt50 = in->cur;
		in->yyt54 = in->yyt59;
		in->yyt59 = in->yyt26;
		in->yyt26 = in->yyt38;
		in->yyt38 = in->yyt49;
		in->yyt49 = in->cur;
		goto yy61;
	case 'b':	goto yy72;
	default:	goto yy8;
	}
yy63:
	yych = *++in->cur;
	switch (yych) {
	case 'a':
		in->yyt15 = in->yyt21 = in->yyt22 = in->cur;
		goto yy74;
	default:	goto yy8;
	}
yy64:
	yych = *++in->cur;
	switch (yych) {
	case 'a':
		in->yyt15 = in->yyt23 = in->yyt24 = in->yyt25 = in->cur;
		goto yy75;
	case 'b':
		in->yyt7 = in->yyt22;
		in->yyt9 = in->yyt21;
		goto yy46;
	default:	goto yy8;
	}
yy65:
	yych = *++in->cur;
	switch (yych) {
	case 'a':
		in->yyt12 = in->cur;
		goto yy76;
	default:	goto yy8;
	}
yy66:
	yych = *++in->cur;
	switch (yych) {
	case 'a':
		in->yyt3 = in->yyt8 = in->yyt9 = in->cur;
		goto yy77;
	case 'b':
		in->yyt5 = in->yyt21;
		in->yyt6 = in->yyt24;
		in->yyt7 = in->yyt25;
		in->yyt10 = in->yyt23;
		goto yy49;
	default:	goto yy8;
	}
yy67:
	yych = *++in->cur;
	switch (yych) {
	case 'a':
		in->yyt12 = in->cur;
		goto yy79;
	default:	goto yy8;
	}
yy68:
	yych = *++in->cur;
	switch (yych) {
	case 'a':
		in->yyt24 = in->yyt25 = in->yyt33 = in->cur;
		goto yy80;
	case 'b':
		in->yyt7 = in->yyt12;
		goto yy59;
	default:	goto yy8;
	}
yy69:
	yych = *++in->cur;
	switch (yych) {
	case 'a':
		in->yyt3 = in->cur;
		goto yy81;
	default:	goto yy8;
	}
yy70:
	++in->cur;
	a0 = in->yyt1;
	b0 = in->yyt2;
	a1 = in->yyt4;
	b1 = in->yyt5;
	a2 = in->yyt6;
	b2 = in->yyt7;
	a3 = in->yyt19;
	b3 = in->yyt20;
#line 17 "../../../benchmarks/submatch_dfa_aot/src/re2c/cat4_4.re"
	{
        outs(out, a0, b0); outc(out, '.'); outs(out, b0, a1); outc(out, '.');
        outs(out, a1, b1); outc(out, '.'); outs(out, b1, a2); outc(out, '.');
        outs(out, a2, b2); outc(out, '.'); outs(out, b2, a3); outc(out, '.');
        outs(out, a3, b3); outc(out, '.'); outs(out, b3, in->cur);
        goto loop;
    }
#line 1017 "gen/re2c/cat4_4-bc-tdfa1.c"
yy72:
	++in->cur;
	if ((in->lim - in->cur) < 12) if (fill(in, 12) != 0) return 1;
	yych = *in->cur;
	switch (yych) {
	case '\n':	goto yy70;
	case 'a':
		in->yyt2 = in->yyt3;
		in->yyt4 = in->yyt36;
		in->yyt5 = in->yyt37;
		in->yyt6 = in->yyt17;
		in->yyt7 = in->yyt18;
		in->yyt8 = in->yyt9 = in->yyt17 = in->yyt19 = in->yyt20 = in->cur;
		in->yyt3 = in->yyt35;
		in->yyt35 = in->yyt59;
		in->yyt36 = in->yyt15;
		in->yyt37 = in->yyt16;
		goto yy44;
	case 'b':	goto yy72;
	default:	goto yy8;
	}
yy74:
	yych = *++in->cur;
	switch (yych) {
	case 'a':
		in->yyt10 = in->yyt20 = in->yyt33 = in->yyt34 = in->cur;
		goto yy82;
	default:	goto yy84;
	}
yy75:
	yych = *++in->cur;
	switch (yych) {
	case 'a':
		in->yyt19 = in->yyt20 = in->yyt35 = in->yyt36 = in->yyt37 = in->cur;
		goto yy85;
	default:	goto yy87;
	}
yy76:
	yych = *++in->cur;
	switch (yych) {
	case 'a':
		in->yyt13 = in->cur;
		goto yy88;
	default:	goto yy8;
	}
yy77:
	++in->cur;
	if (in->lim <= in->cur) if (fill(in, 1) != 0) return 1;
	yych = *in->cur;
	switch (yych) {
	case '\n':	goto yy70;
	case 'a':
		in->yyt5 = in->yyt11;
		in->yyt6 = in->yyt43;
		in->yyt7 = in->yyt44;
		in->yyt11 = in->yyt13;
		in->yyt13 = in->yyt21;
		in->yyt19 = in->yyt47;
		in->yyt20 = in->yyt48;
		in->yyt43 = in->yyt54;
		in->yyt44 = in->yyt55;
		in->yyt47 = in->yyt58;
		in->yyt48 = in->yyt59;
		in->yyt54 = in->yyt24;
		in->yyt55 = in->yyt25;
		in->yyt58 = in->yyt9;
		in->yyt59 = in->yyt9;
		in->yyt9 = in->cur;
		in->yyt21 = in->yyt10;
		in->yyt24 = in->yyt36;
		in->yyt25 = in->yyt37;
		in->yyt36 = in->yyt45;
		in->yyt37 = in->yyt46;
		in->yyt45 = in->yyt56;
		in->yyt46 = in->yyt57;
		in->yyt56 = in->yyt8;
		in->yyt57 = in->yyt8;
		in->yyt10 = in->yyt42;
		in->yyt42 = in->yyt53;
		in->yyt53 = in->yyt23;
		in->yyt8 = in->cur;
		in->yyt23 = in->yyt35;
		in->yyt35 = in->yyt12;
		in->yyt12 = in->yyt14;
		in->yyt14 = in->yyt3;
		in->yyt3 = in->cur;
		goto yy77;
	case 'b':	goto yy89;
	default:	goto yy8;
	}
yy79:
	yych = *++in->cur;
	switch (yych) {
	case 'a':
		in->yyt13 = in->cur;
		goto yy91;
	default:	goto yy8;
	}
yy80:
	yych = *++in->cur;
	switch (yych) {
	case 'a':
		in->yyt3 = in->yyt8 = in->cur;
		goto yy92;
	case 'b':
		in->yyt7 = in->yyt13;
		goto yy59;
	default:	goto yy8;
	}
yy81:
	yych = *++in->cur;
	switch (yych) {
	case 'a':
		in->yyt8 = in->cur;
		goto yy94;
	default:	goto yy8;
	}
yy82:
	yych = *++in->cur;
	switch (yych) {
	case '\n':
		in->yyt20 = in->yyt11;
		goto yy70;
	case 'a':
		in->yyt42 = in->yyt43 = in->yyt44 = in->yyt45 = in->yyt46 = in->cur;
		goto yy95;
	case 'b':
		in->yyt9 = in->yyt11;
		in->yyt17 = in->yyt12;
		in->yyt20 = in->yyt11;
		goto yy83;
	default:	goto yy8;
	}
yy83:
	++in->cur;
	if ((in->lim - in->cur) < 8) if (fill(in, 8) != 0) return 1;
	yych = *in->cur;
yy84:
	switch (yych) {
	case '\n':	goto yy70;
	case 'a':
		in->yyt2 = in->yyt3;
		in->yyt4 = in->yyt36;
		in->yyt5 = in->yyt37;
		in->yyt6 = in->yyt8;
		in->yyt7 = in->yyt17;
		in->yyt10 = in->yyt15 = in->yyt19 = in->yyt20 = in->cur;
		in->yyt3 = in->yyt35;
		goto yy55;
	case 'b':	goto yy83;
	default:	goto yy8;
	}
yy85:
	yych = *++in->cur;
	switch (yych) {
	case '\n':
		in->yyt7 = in->yyt12;
		in->yyt19 = in->yyt45;
		in->yyt20 = in->yyt46;
		goto yy70;
	case 'a':
		in->yyt12 = in->yyt45 = in->yyt46 = in->yyt47 = in->yyt48 = in->cur;
		goto yy96;
	case 'b':
		in->yyt7 = in->yyt12;
		in->yyt9 = in->yyt11;
		in->yyt10 = in->yyt42;
		in->yyt19 = in->yyt45;
		in->yyt20 = in->yyt46;
		in->yyt33 = in->yyt43;
		in->yyt34 = in->yyt44;
		goto yy86;
	default:	goto yy8;
	}
yy86:
	++in->cur;
	if ((in->lim - in->cur) < 8) if (fill(in, 8) != 0) return 1;
	yych = *in->cur;
yy87:
	switch (yych) {
	case '\n':	goto yy70;
	case 'a':
		in->yyt2 = in->yyt3;
		in->yyt4 = in->yyt8;
		in->yyt5 = in->yyt9;
		in->yyt6 = in->yyt33;
		in->yyt7 = in->yyt34;
		in->yyt3 = in->yyt8 = in->yyt19 = in->yyt20 = in->cur;
		goto yy57;
	case 'b':	goto yy86;
	default:	goto yy8;
	}
yy88:
	yych = *++in->cur;
	switch (yych) {
	case 'a':
		in->yyt14 = in->yyt20 = in->cur;
		goto yy97;
	default:	goto yy99;
	}
yy89:
	++in->cur;
	if ((in->lim - in->cur) < 8) if (fill(in, 8) != 0) return 1;
	yych = *in->cur;
	switch (yych) {
	case '\n':	goto yy70;
	case 'a':
		in->yyt5 = in->yyt10;
		in->yyt6 = in->yyt36;
		in->yyt7 = in->yyt37;
		in->yyt3 = in->yyt8 = in->yyt19 = in->yyt20 = in->cur;
		in->yyt10 = in->yyt35;
		goto yy57;
	case 'b':	goto yy89;
	default:	goto yy8;
	}
yy91:
	yych = *++in->cur;
	switch (yych) {
	case 'a':
		in->yyt14 = in->yyt20 = in->cur;
		goto yy100;
	default:	goto yy102;
	}
yy92:
	++in->cur;
	if (in->lim <= in->cur) if (fill(in, 1) != 0) return 1;
	yych = *in->cur;
	switch (yych) {
	case '\n':	goto yy70;
	case 'a':
		in->yyt7 = in->yyt11;
		in->yyt11 = in->yyt12;
		in->yyt12 = in->yyt13;
		in->yyt19 = in->yyt22;
		in->yyt20 = in->yyt23;
		in->yyt22 = in->yyt25;
		in->yyt23 = in->yyt33;
		in->yyt25 = in->yyt8;
		in->yyt33 = in->yyt8;
		in->yyt8 = in->cur;
		in->yyt13 = in->yyt14;
		in->yyt14 = in->yyt21;
		in->yyt21 = in->yyt24;
		in->yyt24 = in->yyt3;
		in->yyt3 = in->cur;
		goto yy92;
	case 'b':	goto yy103;
	default:	goto yy8;
	}
yy94:
	yych = *++in->cur;
	switch (yych) {
	case 'a':
		in->yyt9 = in->cur;
		goto yy105;
	default:	goto yy8;
	}
yy95:
	yych = *++in->cur;
	switch (yych) {
	case '\n':
		in->yyt20 = in->yyt13;
		goto yy70;
	case 'a':
		in->yyt53 = in->yyt54 = in->yyt55 = in->yyt56 = in->yyt57 = in->cur;
		goto yy107;
	case 'b':
		in->yyt9 = in->yyt13;
		in->yyt17 = in->yyt14;
		in->yyt20 = in->yyt13;
		goto yy83;
	default:	goto yy8;
	}
yy96:
	yych = *++in->cur;
	switch (yych) {
	case '\n':
		in->yyt7 = in->yyt14;
		in->yyt19 = in->yyt56;
		in->yyt20 = in->yyt57;
		goto yy70;
	case 'a':
		in->yyt14 = in->yyt56 = in->yyt57 = in->yyt58 = in->yyt59 = in->cur;
		goto yy108;
	case 'b':
		in->yyt7 = in->yyt14;
		in->yyt9 = in->yyt13;
		in->yyt10 = in->yyt53;
		in->yyt19 = in->yyt56;
		in->yyt20 = in->yyt57;
		in->yyt33 = in->yyt54;
		in->yyt34 = in->yyt55;
		goto yy86;
	default:	goto yy8;
	}
yy97:
	yych = *++in->cur;
	switch (yych) {
	case '\n':
		in->yyt20 = in->yyt11;
		goto yy70;
	case 'a':
		in->yyt21 = in->yyt22 = in->yyt23 = in->cur;
		goto yy109;
	case 'b':
		in->yyt15 = in->yyt11;
		in->yyt20 = in->yyt11;
		goto yy98;
	default:	goto yy8;
	}
yy98:
	++in->cur;
	if ((in->lim - in->cur) < 4) if (fill(in, 4) != 0) return 1;
	yych = *in->cur;
yy99:
	switch (yych) {
	case '\n':	goto yy70;
	case 'a':
		in->yyt2 = in->yyt3;
		in->yyt4 = in->yyt8;
		in->yyt5 = in->yyt9;
		in->yyt6 = in->yyt10;
		in->yyt7 = in->yyt15;
		in->yyt19 = in->yyt20 = in->cur;
		goto yy69;
	case 'b':	goto yy98;
	default:	goto yy8;
	}
yy100:
	yych = *++in->cur;
	switch (yych) {
	case '\n':
		in->yyt20 = in->yyt9;
		goto yy70;
	case 'a':
		in->yyt21 = in->yyt22 = in->yyt23 = in->cur;
		goto yy110;
	case 'b':
		in->yyt8 = in->yyt11;
		in->yyt20 = in->yyt9;
		goto yy101;
	default:	goto yy8;
	}
yy101:
	++in->cur;
	if ((in->lim - in->cur) < 4) if (fill(in, 4) != 0) return 1;
	yych = *in->cur;
yy102:
	switch (yych) {
	case '\n':	goto yy70;
	case 'a':
		in->yyt5 = in->yyt10;
		in->yyt6 = in->yyt3;
		in->yyt7 = in->yyt8;
		in->yyt19 = in->yyt20 = in->cur;
		goto yy69;
	case 'b':	goto yy101;
	default:	goto yy8;
	}
yy103:
	++in->cur;
	if ((in->lim - in->cur) < 4) if (fill(in, 4) != 0) return 1;
	yych = *in->cur;
	switch (yych) {
	case '\n':	goto yy70;
	case 'a':
		in->yyt7 = in->yyt14;
		in->yyt19 = in->yyt20 = in->cur;
		goto yy69;
	case 'b':	goto yy103;
	default:	goto yy8;
	}
yy105:
	++in->cur;
	if (in->lim <= in->cur) if (fill(in, 1) != 0) return 1;
	yych = *in->cur;
	switch (yych) {
	case '\n':	goto yy70;
	case 'a':
		in->yyt20 = in->yyt3;
		in->yyt3 = in->yyt8;
		in->yyt8 = in->yyt9;
		in->yyt9 = in->cur;
		goto yy105;
	case 'b':	goto yy111;
	default:	goto yy8;
	}
yy107:
	yych = *++in->cur;
	switch (yych) {
	case '\n':
		in->yyt20 = in->yyt15;
		goto yy70;
	case 'a':
		in->yyt2 = in->yyt3;
		in->yyt4 = in->yyt36;
		in->yyt5 = in->yyt37;
		in->yyt6 = in->yyt8;
		in->yyt7 = in->yyt17;
		in->yyt19 = in->yyt10;
		in->yyt15 = in->yyt23 = in->yyt24 = in->yyt25 = in->cur;
		in->yyt3 = in->yyt35;
		goto yy75;
	case 'b':
		in->yyt9 = in->yyt21;
		in->yyt17 = in->yyt22;
		in->yyt20 = in->yyt15;
		goto yy83;
	default:	goto yy8;
	}
yy108:
	yych = *++in->cur;
	switch (yych) {
	case '\n':
		in->yyt7 = in->yyt22;
		in->yyt19 = in->yyt15;
		in->yyt20 = in->yyt15;
		goto yy70;
	case 'a':
		in->yyt2 = in->yyt3;
		in->yyt4 = in->yyt8;
		in->yyt5 = in->yyt9;
		in->yyt6 = in->yyt33;
		in->yyt7 = in->yyt34;
		in->yyt3 = in->yyt8 = in->yyt9 = in->cur;
		goto yy77;
	case 'b':
		in->yyt7 = in->yyt22;
		in->yyt9 = in->yyt21;
		in->yyt10 = in->yyt23;
		in->yyt19 = in->yyt15;
		in->yyt20 = in->yyt15;
		in->yyt33 = in->yyt24;
		in->yyt34 = in->yyt25;
		goto yy86;
	default:	goto yy8;
	}
yy109:
	yych = *++in->cur;
	switch (yych) {
	case '\n':
		in->yyt20 = in->yyt12;
		goto yy70;
	case 'a':
		in->yyt24 = in->yyt25 = in->yyt33 = in->cur;
		goto yy113;
	case 'b':
		in->yyt15 = in->yyt12;
		in->yyt20 = in->yyt12;
		goto yy98;
	default:	goto yy8;
	}
yy110:
	yych = *++in->cur;
	switch (yych) {
	case '\n':
		in->yyt20 = in->yyt12;
		goto yy70;
	case 'a':
		in->yyt24 = in->yyt25 = in->yyt33 = in->cur;
		goto yy114;
	case 'b':
		in->yyt8 = in->yyt12;
		in->yyt20 = in->yyt12;
		goto yy101;
	default:	goto yy8;
	}
yy111:
	++in->cur;
	if (in->lim <= in->cur) if (fill(in, 1) != 0) return 1;
	yych = *in->cur;
	switch (yych) {
	case '\n':	goto yy70;
	case 'b':	goto yy111;
	default:	goto yy8;
	}
yy113:
	yych = *++in->cur;
	switch (yych) {
	case '\n':
		in->yyt20 = in->yyt13;
		goto yy70;
	case 'a':
		in->yyt2 = in->yyt3;
		in->yyt4 = in->yyt8;
		in->yyt5 = in->yyt9;
		in->yyt6 = in->yyt10;
		in->yyt7 = in->yyt15;
		in->yyt19 = in->yyt14;
		in->yyt3 = in->yyt8 = in->cur;
		goto yy92;
	case 'b':
		in->yyt15 = in->yyt13;
		in->yyt20 = in->yyt13;
		goto yy98;
	default:	goto yy8;
	}
yy114:
	yych = *++in->cur;
	switch (yych) {
	case '\n':
		in->yyt20 = in->yyt13;
		goto yy70;
	case 'a':
		in->yyt5 = in->yyt10;
		in->yyt6 = in->yyt3;
		in->yyt7 = in->yyt8;
		in->yyt19 = in->yyt14;
		in->yyt3 = in->yyt8 = in->cur;
		goto yy92;
	case 'b':
		in->yyt8 = in->yyt13;
		in->yyt20 = in->yyt13;
		goto yy101;
	default:	goto yy8;
	}
}
#line 24 "../../../benchmarks/submatch_dfa_aot/src/re2c/cat4_4.re"

}
