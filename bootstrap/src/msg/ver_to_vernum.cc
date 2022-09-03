/* Generated by re2c 3.0 */
#line 1 "../src/msg/ver_to_vernum.re"
#include <stddef.h>
#include <stdint.h>
#include <string>

#include "config.h"
#include "src/msg/ver_to_vernum.h"

namespace re2c {

// Disable warnings on NULL constant in the re2c-generated code (for tags).
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wzero-as-null-pointer-constant"
#define YYCTYPE char

std::string ver_to_vernum(const char* ver) {
    const char* YYCURSOR = ver, *YYMARKER, *p1, *p2, *p3, *e1, *e2, *e3;

#line 18 "../src/msg/ver_to_vernum.re"

#line 23 "src/msg/ver_to_vernum.cc"
const char *yyt1;
const char *yyt2;
const char *yyt3;
const char *yyt4;
const char *yyt5;
const char *yyt6;
#line 19 "../src/msg/ver_to_vernum.re"


#line 33 "src/msg/ver_to_vernum.cc"
{
	YYCTYPE yych;
	static const unsigned char yybm[] = {
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0, 128, 128, 128, 128, 128, 128, 128, 
		128, 128, 128, 128, 128, 128, 128, 128, 
		128, 128, 128, 128, 128, 128, 128, 128, 
		128, 128, 128,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
		  0,   0,   0,   0,   0,   0,   0,   0, 
	};
	yych = *YYCURSOR;
	if (yych <= '/') goto yy1;
	if (yych <= '9') {
		yyt1 = YYCURSOR;
		goto yy3;
	}
yy1:
	++YYCURSOR;
yy2:
#line 45 "../src/msg/ver_to_vernum.re"
	{ return std::string(); }
#line 81 "src/msg/ver_to_vernum.cc"
yy3:
	yych = *(YYMARKER = ++YYCURSOR);
	if (yych <= '.') {
		if (yych <= 0x00) {
			yyt3 = yyt4 = yyt5 = yyt6 = NULL;
			yyt2 = YYCURSOR;
			goto yy4;
		}
		if (yych <= '-') goto yy2;
		yyt3 = yyt4 = yyt5 = yyt6 = NULL;
		yyt2 = YYCURSOR;
		goto yy5;
	} else {
		if (yych <= '/') goto yy2;
		if (yych <= '9') goto yy7;
		goto yy2;
	}
yy4:
	++YYCURSOR;
	p1 = yyt1;
	e1 = yyt2;
	p2 = yyt3;
	e2 = yyt4;
	p3 = yyt5;
	e3 = yyt6;
#line 28 "../src/msg/ver_to_vernum.re"
	{
        static constexpr uint32_t PARTS = 3, WIDTH = 2, SIZE = PARTS * WIDTH;
        char buffer[SIZE], *q, *q0;
        const char * bounds[] = {p1, e1, p2, e2, p3, e3}, *p, *p0;

        for (uint32_t i = 0; i < PARTS; ++i) {
            q0 = buffer + 2 * i;
            q  = buffer + 2 * (i + 1);
            p0 = bounds[2 * i];
            p  = bounds[2 * i + 1];
            while (p > p0) *--q = *--p;
            while (q > q0) *--q = '0';
        }

        return std::string(buffer, SIZE);
    }
#line 124 "src/msg/ver_to_vernum.cc"
yy5:
	yych = *++YYCURSOR;
	if (yych <= 0x00) goto yy6;
	if (yych <= '/') goto yy10;
	if (yych <= '9') {
		yyt3 = YYCURSOR;
		goto yy8;
	}
	goto yy10;
yy6:
	YYCURSOR = YYMARKER;
	goto yy2;
yy7:
	yych = *++YYCURSOR;
	if (yych <= 0x00) {
		yyt3 = yyt4 = yyt5 = yyt6 = NULL;
		yyt2 = YYCURSOR;
		goto yy4;
	}
	if (yych == '.') {
		yyt3 = yyt4 = yyt5 = yyt6 = NULL;
		yyt2 = YYCURSOR;
		goto yy5;
	}
	goto yy6;
yy8:
	yych = *++YYCURSOR;
	if (yych <= '.') {
		if (yych <= 0x00) {
			yyt5 = yyt6 = NULL;
			yyt4 = YYCURSOR;
			goto yy4;
		}
		if (yych <= '-') goto yy6;
		yyt5 = yyt6 = NULL;
		yyt4 = YYCURSOR;
		goto yy11;
	} else {
		if (yych <= '/') goto yy6;
		if (yych <= '9') goto yy12;
		goto yy6;
	}
yy9:
	yych = *++YYCURSOR;
yy10:
	if (yybm[0+yych] & 128) {
		goto yy9;
	}
	if (yych <= 0x00) goto yy4;
	goto yy6;
yy11:
	yych = *++YYCURSOR;
	if (yych <= 0x00) goto yy6;
	if (yych <= '/') goto yy10;
	if (yych <= '9') {
		yyt5 = YYCURSOR;
		goto yy13;
	}
	goto yy10;
yy12:
	yych = *++YYCURSOR;
	if (yych <= 0x00) {
		yyt5 = yyt6 = NULL;
		yyt4 = YYCURSOR;
		goto yy4;
	}
	if (yych == '.') {
		yyt5 = yyt6 = NULL;
		yyt4 = YYCURSOR;
		goto yy11;
	}
	goto yy6;
yy13:
	yych = *++YYCURSOR;
	if (yych <= '.') {
		if (yych <= 0x00) {
			yyt6 = YYCURSOR;
			goto yy4;
		}
		if (yych <= '-') goto yy6;
		yyt6 = YYCURSOR;
	} else {
		if (yych <= '/') goto yy6;
		if (yych <= '9') goto yy15;
		goto yy6;
	}
yy14:
	yych = *++YYCURSOR;
	if (yybm[0+yych] & 128) {
		goto yy9;
	}
	if (yych <= '/') goto yy6;
	if (yych <= '9') goto yy16;
	goto yy6;
yy15:
	yych = *++YYCURSOR;
	if (yych <= 0x00) {
		yyt6 = YYCURSOR;
		goto yy4;
	}
	if (yych == '.') {
		yyt6 = YYCURSOR;
		goto yy14;
	}
	goto yy6;
yy16:
	yych = *++YYCURSOR;
	if (yych <= '.') {
		if (yych <= 0x00) goto yy4;
		if (yych <= '-') goto yy6;
		goto yy14;
	} else {
		if (yych <= '/') goto yy6;
		if (yych >= ':') goto yy6;
	}
	yych = *++YYCURSOR;
	if (yych <= 0x00) goto yy4;
	if (yych == '.') goto yy14;
	goto yy6;
}
#line 46 "../src/msg/ver_to_vernum.re"

}

#undef YYCTYPE
#pragma GCC diagnostic pop

} // namespace re2c
