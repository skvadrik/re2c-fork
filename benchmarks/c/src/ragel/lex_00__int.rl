#include "ragel/base.h"

namespace ragel_lex_00__int {

const char *delim = "\n";

%%{
    machine lex_int;

    int = [0-9]+ [\n] >{
        OUTS(p1, p);
        p1 = p;
    };

    main := int*;
}%%

%% write data;

static int lex(Input *in, int count) {
    char *p = in->p;
    char *pe = in->pe;
    const char *p1 = p;
    int cs;

    %% write init;
    %% write exec;

    in->p = p;
    in->pe = pe;

    // +1 as we don't count the last newline due to using the entering action
    // >{...} (using the leaving action %{...} helps, but it requires `eof` and
    // breaks on long input in buffered mode).
    return count + 1;
}

RAGEL_BENCH_AND_TEST()

} // namespace ragel_lex_00__int
