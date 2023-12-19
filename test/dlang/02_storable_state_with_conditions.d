/* Generated by re2c */
#line 1 "dlang/02_storable_state_with_conditions.re"
// re2d $INPUT -o $OUTPUT -fc --loop-switch
module main;

import core.stdc.stdio;
import core.stdc.string;

// Use a small buffer to cover the case when a lexeme doesn't fit.
// In real world use a larger buffer.
enum BUFSIZE = 10;

#line 14 "dlang/02_storable_state_with_conditions.d"
enum YYCONDTYPE {
	yycINIT = 0,
	yycSPACES = 6,
	yycNUMBER = 11,
	yycWORD = 16
};
#line 11 "dlang/02_storable_state_with_conditions.re"


struct State {
    FILE* file;
    char[BUFSIZE + 1] buf;
    char* lim, cur, mar, tok;
    int state;
};

enum Status {END, READY, WAITING, BAD_PACKET, BIG_PACKET};

private Status fill(ref State st) {
    const size_t shift = st.tok - cast(char*)st.buf;
    const size_t used = st.lim - st.tok;
    const size_t free = BUFSIZE - used;

    // Error: no space. In real life can reallocate a larger buffer.
    if (free < 1) return Status.BIG_PACKET;

    // Shift buffer contents (discard already processed data).
    memmove(cast(void*)st.buf, st.tok, used);
    st.lim -= shift;
    st.cur -= shift;
    st.mar -= shift;
    st.tok -= shift;

    // Fill free space at the end of buffer with new data.
    const size_t read = fread(st.lim, 1, free, st.file);
    st.lim += read;
    st.lim[0] = 0; // append sentinel symbol

    return Status.READY;
}

private Status lex(ref State st, uint* nc, uint* wc) {
    char yych;
    /* !getstate:re2c*/

lex:
    for (;;) {
        st.tok = st.cur;
    
#line 64 "dlang/02_storable_state_with_conditions.d"
{
	int yystate = st.state;
	while (true) {
		switch (yystate) {
			case -1: .. case 0:
				yych = *st.cur;
				switch (yych) {
					case '\t':
					case ' ':
						st.cur += 1;
						yystate = 2;
						continue;
					case '0': .. case '9':
						st.cur += 1;
						yystate = 3;
						continue;
					case 'a': .. case 'z':
						st.cur += 1;
						yystate = 4;
						continue;
					default:
						if (st.cur >= st.lim) {
							st.state = 21;
							return Status.WAITING;
						}
						st.cur += 1;
						yystate = 1;
						continue;
				}
			case 1:
				st.state = YYCONDTYPE.yycINIT;
#line 69 "dlang/02_storable_state_with_conditions.re"
				{ return Status.BAD_PACKET; }
#line 98 "dlang/02_storable_state_with_conditions.d"
			case 2:
				st.cur += -1;
				st.state = YYCONDTYPE.yycSPACES;
				yystate = YYCONDTYPE.yycSPACES;
				continue;
			case 3:
				st.cur += -1;
				st.state = YYCONDTYPE.yycNUMBER;
				yystate = YYCONDTYPE.yycNUMBER;
				continue;
			case 4:
				st.cur += -1;
				st.state = YYCONDTYPE.yycWORD;
				yystate = YYCONDTYPE.yycWORD;
				continue;
			case 5:
				st.state = YYCONDTYPE.yycINIT;
#line 70 "dlang/02_storable_state_with_conditions.re"
				{ return Status.END; }
#line 118 "dlang/02_storable_state_with_conditions.d"
			case 6:
				yych = *st.cur;
				switch (yych) {
					case '\t':
					case ' ':
						st.cur += 1;
						yystate = 8;
						continue;
					default:
						if (st.cur >= st.lim) {
							st.state = 22;
							return Status.WAITING;
						}
						st.cur += 1;
						yystate = 7;
						continue;
				}
			case 7:
				st.state = YYCONDTYPE.yycSPACES;
#line 69 "dlang/02_storable_state_with_conditions.re"
				{ return Status.BAD_PACKET; }
#line 140 "dlang/02_storable_state_with_conditions.d"
			case 8:
				yych = *st.cur;
				switch (yych) {
					case '\t':
					case ' ':
						st.cur += 1;
						yystate = 8;
						continue;
					default:
						if (st.cur >= st.lim) {
							st.state = 23;
							return Status.WAITING;
						}
						yystate = 9;
						continue;
				}
			case 9:
				st.state = YYCONDTYPE.yycINIT;
#line 76 "dlang/02_storable_state_with_conditions.re"
				{ continue lex; }
#line 161 "dlang/02_storable_state_with_conditions.d"
			case 10:
				st.state = YYCONDTYPE.yycSPACES;
#line 70 "dlang/02_storable_state_with_conditions.re"
				{ return Status.END; }
#line 166 "dlang/02_storable_state_with_conditions.d"
			case 11:
				yych = *st.cur;
				switch (yych) {
					case '0': .. case '9':
						st.cur += 1;
						yystate = 13;
						continue;
					default:
						if (st.cur >= st.lim) {
							st.state = 24;
							return Status.WAITING;
						}
						st.cur += 1;
						yystate = 12;
						continue;
				}
			case 12:
				st.state = YYCONDTYPE.yycNUMBER;
#line 69 "dlang/02_storable_state_with_conditions.re"
				{ return Status.BAD_PACKET; }
#line 187 "dlang/02_storable_state_with_conditions.d"
			case 13:
				yych = *st.cur;
				switch (yych) {
					case '0': .. case '9':
						st.cur += 1;
						yystate = 13;
						continue;
					default:
						if (st.cur >= st.lim) {
							st.state = 25;
							return Status.WAITING;
						}
						yystate = 14;
						continue;
				}
			case 14:
				st.state = YYCONDTYPE.yycSPACES;
#line 78 "dlang/02_storable_state_with_conditions.re"
				{ *nc += 1; continue lex; }
#line 207 "dlang/02_storable_state_with_conditions.d"
			case 15:
				st.state = YYCONDTYPE.yycNUMBER;
#line 70 "dlang/02_storable_state_with_conditions.re"
				{ return Status.END; }
#line 212 "dlang/02_storable_state_with_conditions.d"
			case 16:
				yych = *st.cur;
				switch (yych) {
					case 'a': .. case 'z':
						st.cur += 1;
						yystate = 18;
						continue;
					default:
						if (st.cur >= st.lim) {
							st.state = 26;
							return Status.WAITING;
						}
						st.cur += 1;
						yystate = 17;
						continue;
				}
			case 17:
				st.state = YYCONDTYPE.yycWORD;
#line 69 "dlang/02_storable_state_with_conditions.re"
				{ return Status.BAD_PACKET; }
#line 233 "dlang/02_storable_state_with_conditions.d"
			case 18:
				yych = *st.cur;
				switch (yych) {
					case 'a': .. case 'z':
						st.cur += 1;
						yystate = 18;
						continue;
					default:
						if (st.cur >= st.lim) {
							st.state = 27;
							return Status.WAITING;
						}
						yystate = 19;
						continue;
				}
			case 19:
				st.state = YYCONDTYPE.yycSPACES;
#line 79 "dlang/02_storable_state_with_conditions.re"
				{ *wc += 1; continue lex; }
#line 253 "dlang/02_storable_state_with_conditions.d"
			case 20:
				st.state = YYCONDTYPE.yycWORD;
#line 70 "dlang/02_storable_state_with_conditions.re"
				{ return Status.END; }
#line 258 "dlang/02_storable_state_with_conditions.d"
			case 21:
				if (st.cur >= st.lim) {
					yystate = 5;
					continue;
				}
				yystate = 0;
				continue;
			case 22:
				if (st.cur >= st.lim) {
					yystate = 10;
					continue;
				}
				yystate = 6;
				continue;
			case 23:
				if (st.cur >= st.lim) {
					yystate = 9;
					continue;
				}
				yystate = 8;
				continue;
			case 24:
				if (st.cur >= st.lim) {
					yystate = 15;
					continue;
				}
				yystate = 11;
				continue;
			case 25:
				if (st.cur >= st.lim) {
					yystate = 14;
					continue;
				}
				yystate = 13;
				continue;
			case 26:
				if (st.cur >= st.lim) {
					yystate = 20;
					continue;
				}
				yystate = 16;
				continue;
			case 27:
				if (st.cur >= st.lim) {
					yystate = 19;
					continue;
				}
				yystate = 18;
				continue;
			default:
				assert(false);
		}
	}
}
#line 80 "dlang/02_storable_state_with_conditions.re"

    }
    assert(0); // unreachable
}

private void test(string[] packets, Status expect, int numbers, int words) {
    // Create a "socket" (open the same file for reading and writing).
    const(char*) fname = "pipe";
    FILE* fw = fopen(fname, "w");
    FILE* fr = fopen(fname, "r");
    setvbuf(fw, null, _IONBF, 0);
    setvbuf(fr, null, _IONBF, 0);

    // Initialize lexer state: `state` value is -1, all pointers are at the end
    // of buffer.
    State st;
    st.file = fr;
    st.cur = st.mar = st.tok = st.lim = cast(char*)st.buf + BUFSIZE;
    // Sentinel (at YYLIMIT pointer) is set to zero, which triggers YYFILL.
    st.lim[0] = 0;
    st.state = -1;

    // Main loop. The buffer contains incomplete data which appears packet by
    // packet. When the lexer needs more input it saves its internal state and
    // returns to the caller which should provide more input and resume lexing.
    Status status;
    uint send = 0, nc = 0, wc = 0;
    for (;;) {
        status = lex(st, &nc, &wc);
        if (status == Status.END) {
            debug{printf("done: got %u numbers and %u words\n", nc, wc);}
            break;
        } else if (status == Status.WAITING) {
            debug{printf("waiting...\n");}
            if (send < packets.length) {
                debug{printf("sent packet %u\n", send);}
                fprintf(fw, "%s", cast(char*)packets[send]);
                ++send;
            }
            status = fill(st);
            debug{printf("queue: '%s'\n", cast(char*)st.buf);}
            if (status == Status.BIG_PACKET) {
                debug{printf("error: packet too big\n");}
                break;
            }
            assert(status == Status.READY);
        } else {
            assert(status == Status.BAD_PACKET);
            debug{printf("error: ill-formed packet\n");}
            break;
        }
    }

    // Check results.
    assert(status == expect);
    if (status == Status.END) assert(nc == numbers && wc == words);

    // Cleanup: remove input file.
    fclose(fw);
    fclose(fr);
    remove(fname);
}

void main() {
    string[] packets1 = [];
    string[] packets2 = [" zero one", " ", "123", "4 tw", "o  456789"];
    string[] packets3 = ["zer0"];
    string[] packets4 = ["looooooooooong;"];

    test(packets1, Status.END, 0, 0);
    test(packets2, Status.END, 2, 3);
    test(packets3, Status.BAD_PACKET, -1, -1);
    test(packets4, Status.BIG_PACKET, -1, -1);
}
