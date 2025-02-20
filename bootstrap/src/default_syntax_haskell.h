static constexpr const char* DEFAULT_SYNTAX_HASKELL =
    "// supported feature lists -----------------------------------------------------\n"
    "\n"
    "supported_apis = [\"record\", \"generic\"];\n"
    "supported_api_styles = [\"free-form\"];\n"
    "supported_code_models = [\"recursive-functions\"];\n"
    "supported_targets = [\"code\", \"dot\"];\n"
    "supported_features = [\"nested-ifs\", \"bitmaps\", \"monadic\", \"tags\", \"captvars\"];\n"
    "\n"
    "\n"
    "// language-specific options ---------------------------------------------------\n"
    "\n"
    "semicolons = 0;\n"
    "backtick_quoted_strings = 0;\n"
    "single_quoted_strings = 0;\n"
    "indentation_sensitive = 1;\n"
    "wrap_blocks_in_braces = 0;\n"
    "special_escapes = \"\\a\\b\\f\\n\\r\\t\\v\\\\'\\\"\";\n"
    "\n"
    "\n"
    "// immutable configurations (command-line only options) ------------------------\n"
    "\n"
    "re2c:target = code;\n"
    "re2c:code-model = recursive-functions;\n"
    "re2c:input-encoding = ascii;\n"
    "re2c:date = 1;\n"
    "re2c:version = 1;\n"
    "re2c:conditions = 0;\n"
    "re2c:storable-state = 0;\n"
    "re2c:flex-syntax = 0;\n"
    "re2c:verbose = 0;\n"
    "re2c:line-dirs = 1;\n"
    "\n"
    "\n"
    "// mutable configurations ------------------------------------------------------\n"
    "\n"
    "re2c:api = record;\n"
    "re2c:api:style = free-form;\n"
    "re2c:api:sigil = \"@@\";\n"
    "re2c:YYGETCOND:naked = 0;\n"
    "re2c:YYSETCOND:naked = 0;\n"
    "re2c:YYSETCOND@cond = \"@@\";\n"
    "re2c:YYGETSTATE:naked = 0;\n"
    "re2c:YYSETSTATE:naked = 0;\n"
    "re2c:YYSETSTATE@state = \"@@\";\n"
    "re2c:YYFILL@len = \"@@\";\n"
    "re2c:YYFILL:naked = 0;\n"
    "re2c:YYFN = [\"<undefined-function-name>;<undefined-function-type>\"];\n"
    "re2c:yyfn:sep = \";\";\n"
    "re2c:yycond = \"_yycond\";\n"
    "re2c:yyctable = \"\"; // unused\n"
    "re2c:yyaccept = \"_yyaccept\";\n"
    "re2c:yytarget = \"\"; // unused\n"
    "re2c:yystate = \"_yystate\";\n"
    "re2c:yynmatch = \"yynmatch\";\n"
    "re2c:yypmatch = \"yypmatch\";\n"
    "re2c:yyrecord = \"yyrecord\";\n"
    "re2c:yych = \"yych\";\n"
    "re2c:yych:conversion = 0;\n"
    "re2c:yych:literals = hex;\n"
    "re2c:yych:emit = (.code_model.recursive_functions ? 0 : 1);\n"
    "re2c:yybm = \"yybm\";\n"
    "re2c:yybm:hex = 0;\n"
    "re2c:yyfill = \"yyfill\";\n"
    "re2c:yystable = \"\"; // deprecated\n"
    "re2c:header = \"\";\n"
    "re2c:eof = -1;\n"
    "re2c:sentinel = -1;\n"
    "re2c:yyfill:enable = 1;\n"
    "re2c:yyfill:parameter = 1;\n"
    "re2c:yyfill:check = 1;\n"
    "re2c:tags = 0;\n"
    "re2c:tags:prefix = \"_yyt\";\n"
    "re2c:captures = 0;\n"
    "re2c:captvars = 0;\n"
    "re2c:posix-captures = 0;\n"
    "re2c:posix-captvars = 0;\n"
    "re2c:invert-captures = 0;\n"
    "re2c:cond:abort = 1;\n"
    "re2c:cond:prefix = \"yyc_\";\n"
    "re2c:cond:enumprefix = \"YYC_\";\n"
    "re2c:cond:divider@cond = \"@@\";\n"
    "re2c:cond:goto@cond = \"@@\";\n"
    "re2c:state:abort = 1;\n"
    "re2c:state:nextlabel = 0;\n"
    "re2c:bit-vectors = 0;\n"
    "re2c:debug-output = 0;\n"
    "re2c:computed-gotos = 0;\n"
    "re2c:computed-gotos:threshold = 9;\n"
    "re2c:computed-gotos:relative = 0;\n"
    "re2c:nested-ifs = 0;\n"
    "re2c:case-insensitive = 0;\n"
    "re2c:case-inverted = 0;\n"
    "re2c:case-ranges = 0;\n"
    "re2c:unsafe = 0;\n"
    "re2c:monadic = 0;\n"
    "re2c:encoding:ebcdic = 0;\n"
    "re2c:encoding:utf32 = 0;\n"
    "re2c:encoding:ucs2 = 0;\n"
    "re2c:encoding:utf16 = 0;\n"
    "re2c:encoding:utf8 = 0;\n"
    "re2c:encoding-policy = ignore;\n"
    "re2c:empty-class = match-empty;\n"
    "re2c:indent:string = \"    \";\n"
    "re2c:indent:top = 0;\n"
    "re2c:label:prefix = \"yy\"; // used for generating function names\n"
    "re2c:label:yyfill = \"\";\n"
    "re2c:label:yyloop = \"\";\n"
    "re2c:label:yyNext = \"\";\n"
    "re2c:label:start = 0;\n"
    "\n"
    "\n"
    "// mutable code configuration --------------------------------------------------\n"
    "\n"
    "re2c:YYBACKUP = \"yybackup\";\n"
    "re2c:YYBACKUPCTX = \"yybackupctx\";\n"
    "re2c:YYCONDTYPE = \"YYCONDTYPE\";\n"
    "re2c:YYCOPYMTAG = \"yycopymtag\";\n"
    "re2c:YYCOPYSTAG = \"yycopystag\";\n"
    "re2c:YYCTYPE = \"YYCTYPE\";\n"
    "re2c:YYCTXMARKER = \"_yyctxmarker\";\n"
    "re2c:YYCURSOR = \"_yycursor\";\n"
    "re2c:YYDEBUG = \"yydebug\";\n"
    "re2c:YYFILL = \"yyfill\";\n"
    "re2c:YYGETACCEPT = \"yygetaccept\";\n"
    "re2c:YYGETCOND = \"yygetcond\";\n"
    "re2c:YYGETSTATE = \"yygetstate\";\n"
    "re2c:YYINPUT = \"_yyinput\";\n"
    "re2c:YYLESSTHAN = \"yylessthan\";\n"
    "re2c:YYLIMIT = \"_yylimit\";\n"
    "re2c:YYMARKER = \"_yymarker\";\n"
    "re2c:YYMAXFILL = \"yymaxfill\";\n"
    "re2c:YYMAXNMATCH = \"yymaxnmatch\";\n"
    "re2c:YYMTAGN = \"yymtagn\";\n"
    "re2c:YYMTAGP = \"yymtagp\";\n"
    "re2c:YYPEEK = (.api.record ? \"index\" : \"yypeek\");\n"
    "re2c:YYRESTORE = \"yyrestore\";\n"
    "re2c:YYRESTORECTX = \"yyrestorectx\";\n"
    "re2c:YYRESTORETAG = \"yyrestoretag\";\n"
    "re2c:YYSETACCEPT = \"yysetaccept\";\n"
    "re2c:YYSETCOND = \"yysetcond\";\n"
    "re2c:YYSETSTATE = \"yysetstate\";\n"
    "re2c:YYSHIFT = \"yyshift\";\n"
    "re2c:YYSHIFTSTAG = \"yyshiftstag\";\n"
    "re2c:YYSHIFTMTAG = \"yyshiftmtag\";\n"
    "re2c:YYSKIP = \"yyskip\";\n"
    "re2c:YYSTAGN = \"yystagn\";\n"
    "re2c:YYSTAGP = \"yystagp\";\n"
    "re2c:tags:expression = sigil;\n"
    "re2c:tags:negative = (.api.generic ? \"@@\" : \"(-1)\");\n"
    "re2c:cond:divider = \"\";\n"
    "re2c:cond:goto = \"\";\n"
    "\n"
    "\n"
    "// code templates --------------------------------------------------------------\n"
    "\n"
    "code:var_local = topindent \"let \" name \" = \" init \" in\" nl;\n"
    "code:var_global = topindent \"let \" name \" = \" init nl;\n"
    "\n"
    "code:const_local = topindent \"let \" name \" = \" init \" in\" nl;\n"
    "code:const_global = topindent name \" = \" init nl;\n"
    "\n"
    "code:array_local = <undefined>;\n"
    "\n"
    "code:array_global =\n"
    "    topindent name \" :: Array Int \" type nl\n"
    "    topindent name \" = array (0, \" size \" - 1) $ Prelude.zip [0 .. \" size \" - 1] [\" nl indent\n"
    "        [row{0:-2}: topindent [elem{0:-2}: elem \", \"] [elem{-1}: elem \",\"] nl]\n"
    "        [row{-1}:   topindent [elem{0:-2}: elem \", \"] [elem{-1}: elem \"]\"] nl];\n"
    "\n"
    "code:array_elem = array \" ! \" index;\n"
    "\n"
    "code:enum =\n"
    "    \"data \" type \" = \"\n"
    "        [elem{0:-2}: elem \" | \"]\n"
    "        [elem{-1}: elem] \" deriving (Eq, Show)\"\n"
    "    nl;\n"
    "\n"
    "code:enum_elem = name;\n"
    "\n"
    "code:assign = <undefined>;\n"
    "\n"
    "code:type_int = <undefined>;\n"
    "code:type_uint = <undefined>;\n"
    "code:type_yybm = \"Word8\";\n"
    "code:type_yytarget = <undefined>;\n"
    "code:type_yytargetoffset = <undefined>;\n"
    "\n"
    "code:cmp_eq = \"==\";\n"
    "code:cmp_ne = \"/=\";\n"
    "code:cmp_lt = \"<\";\n"
    "code:cmp_gt = \">\";\n"
    "code:cmp_le = \"<=\";\n"
    "code:cmp_ge = \">=\";\n"
    "\n"
    "code:if_then_else =\n"
    "    [branch{0}: topindent (.many ? \"if \" cond \" then\" : \"when (\" cond \") $\") (.monadic ? \" do\") nl\n"
    "        indent [stmt: stmt] dedent]\n"
    "    [branch{1:-1}: topindent \"else\" (.cond ? \" if \" cond \" then\") (.monadic ? \" do\") nl\n"
    "        indent [stmt: stmt] dedent];\n"
    "\n"
    "code:if_then_else_oneline =\n"
    "    [branch{0}: topindent (.many ? \"if \" cond \" then \" : \"when (\" cond \") $ \") [stmt: stmt] nl]\n"
    "    [branch{1:-1}: topindent \"else \" (.cond ? \"if \" cond \" then \") [stmt: stmt] nl];\n"
    "\n"
    "code:switch =\n"
    "    topindent \"case \" expr \" of\" nl\n"
    "        indent [case: case] dedent;\n"
    "\n"
    "code:switch_cases = topindent \"_c | \"\n"
    "    [case{0:-2}: case \" || \"]\n"
    "    [case{-1}:   case \" ->\" (.monadic ? \" do\") nl\n"
    "        indent [stmt: stmt] dedent\n"
    "    ];\n"
    "\n"
    "code:switch_cases_oneline = <undefined>;\n"
    "\n"
    "code:switch_case_range = (.many\n"
    "    ? [val{0}: val] \" <= _c && _c <= \" [val{-1}: val]\n"
    "    : [val{0}: val] \" == _c\");\n"
    "\n"
    "code:switch_case_default = \"True\";\n"
    "\n"
    "code:loop = <undefined>;\n"
    "\n"
    "code:continue = <undefined>;\n"
    "\n"
    "code:goto = <undefined>;\n"
    "\n"
    "code:fndecl = <undefined>;\n"
    "\n"
    "code:fndef =\n"
    "    name \" :: \" [arg: argtype \" -> \"] type nl\n"
    "    name [arg: \" \" argname] \" =\" (.monadic ? \" do\") nl\n"
    "        indent [stmt: stmt] dedent;\n"
    "\n"
    "code:fncall =\n"
    "    topindent (.retval ? \"let \" retval \" = \")\n"
    "        name (.args ? [arg: \" \" arg] : \" ()\") nl;\n"
    "\n"
    "code:tailcall = topindent name (.args ? [arg: \" \" arg] : \" ()\") nl;\n"
    "\n"
    "code:recursive_functions = [fn: fndef nl];\n"
    "\n"
    "code:fingerprint =\n"
    "    \"-- Generated by re2hs\" (.version ? \" \" version) (.date ? \" on \" date) nl\n"
    "    (.api.record ? \"{-# LANGUAGE RecordWildCards #-}\" nl);\n"
    "\n"
    "code:line_info = \"#\" line \" \\\"\" file \"\\\"\" nl;\n"
    "\n"
    "code:abort = topindent \"error \\\"internal lexer error\\\"\" nl;\n"
    "\n"
    "code:yydebug = topindent YYDEBUG nl;\n"
    "\n"
    "code:yypeek =\n"
    "    topindent (.api.record\n"
    "        ? (.monadic\n"
    "            ? yych \" <- return $ \" YYPEEK \" \" YYINPUT \" \" YYCURSOR\n"
    "            : \"let \" yych \" = \" YYPEEK \" \" YYINPUT \" \" YYCURSOR \" in\")\n"
    "        : (.monadic\n"
    "            ? yych \" <- \" YYPEEK\n"
    "            : \"let \" yych \" = \" YYPEEK \" in\")\n"
    "    ) nl;\n"
    "\n"
    "code:yyskip =\n"
    "    topindent (.api.record\n"
    "        ? (.monadic\n"
    "            ? YYCURSOR \" <- return $ \" YYCURSOR \" + 1\"\n"
    "            : \"let __ = \" YYCURSOR \" + 1 in let \" YYCURSOR \" = __ in\")\n"
    "        : YYSKIP\n"
    "    ) nl;\n"
    "\n"
    "code:yybackup =\n"
    "    topindent (.api.record\n"
    "        ? (.monadic\n"
    "            ? \"let \" YYMARKER \" = \" YYCURSOR\n"
    "            : \"let \" YYMARKER \" = \" YYCURSOR \" in\")\n"
    "        : YYBACKUP\n"
    "    ) nl;\n"
    "\n"
    "code:yybackupctx =\n"
    "    topindent (.api.record\n"
    "        ? (.monadic\n"
    "            ? \"let \" YYCTXMARKER \" = \" YYCURSOR\n"
    "            : \"let \" YYCTXMARKER \" = \" YYCURSOR \" in\")\n"
    "        : YYBACKUPCTX\n"
    "    ) nl;\n"
    "\n"
    "code:yyskip_yypeek = <undefined>;\n"
    "code:yypeek_yyskip = <undefined>;\n"
    "code:yyskip_yybackup = <undefined>;\n"
    "code:yybackup_yyskip = <undefined>;\n"
    "code:yybackup_yypeek = <undefined>;\n"
    "code:yyskip_yybackup_yypeek = <undefined>;\n"
    "code:yybackup_yypeek_yyskip = <undefined>;\n"
    "\n"
    "code:yyrestore =\n"
    "    topindent (.api.record\n"
    "        ? (.monadic\n"
    "            ? \"let \" YYCURSOR \" = \" YYMARKER\n"
    "            : \"let \" YYCURSOR \" = \" YYMARKER \" in\")\n"
    "        : YYRESTORE\n"
    "    ) nl;\n"
    "\n"
    "code:yyrestorectx =\n"
    "    topindent (.api.record\n"
    "        ? (.monadic\n"
    "            ? \"let \" YYCURSOR \" = \" YYCTXMARKER\n"
    "            : \"let \" YYCURSOR \" = \" YYCTXMARKER \" in\")\n"
    "        : YYRESTORECTX\n"
    "    ) nl;\n"
    "\n"
    "code:yyrestoretag =\n"
    "    topindent (.api.record\n"
    "        ? (.monadic\n"
    "            ? \"let \" YYCURSOR \" = \" tag\n"
    "            : \"let \" YYCURSOR \" = \" tag \" in\")\n"
    "        : YYRESTORETAG\n"
    "    ) nl;\n"
    "\n"
    "code:yyshift =\n"
    "    topindent (.api.record\n"
    "        ? (.monadic\n"
    "            ? YYCURSOR \" <- return $ \" YYCURSOR \" - \" offset\n"
    "            : \"let __ = \" YYCURSOR \" - \" offset \" in let \" YYCURSOR \" = __ in\")\n"
    "        : YYSHIFT\n"
    "    ) nl;\n"
    "\n"
    "code:yyshiftstag =\n"
    "    topindent (.api.record\n"
    "        ? (.monadic\n"
    "            ? tag \" <- return $ if \" tag \" == \" neg \" then \" neg \" else \" tag \" - \" offset\n"
    "            :         \"let __ = if \" tag \" == \" neg \" then \" neg \" else \" tag \" - \" offset\n"
    "                \" in let \" tag \" = __ in\")\n"
    "        : YYSHIFTSTAG\n"
    "    ) nl;\n"
    "\n"
    "code:yyshiftmtag =\n"
    "    topindent YYSHIFTMTAG nl;\n"
    "\n"
    "code:yystagp =\n"
    "    topindent (.api.record\n"
    "        ? (.monadic\n"
    "            ? \"let \" tag \" = \" YYCURSOR\n"
    "            : \"let \" tag \" = \" YYCURSOR \" in\")\n"
    "        : YYSTAGP\n"
    "    ) nl;\n"
    "\n"
    "code:yymtagp =\n"
    "    topindent YYMTAGP nl;\n"
    "\n"
    "code:yystagn =\n"
    "    topindent (.api.record\n"
    "        ? (.monadic\n"
    "            ? \"let \" tag \" = \" neg\n"
    "            : \"let \" tag \" = \" neg \" in\")\n"
    "        : YYSTAGN\n"
    "    ) nl;\n"
    "\n"
    "code:yymtagn =\n"
    "    topindent YYMTAGN nl;\n"
    "\n"
    "code:yycopystag =\n"
    "    topindent (.api.record\n"
    "        ? (.monadic\n"
    "            ? \"let \" lhs \" = \" rhs\n"
    "            : \"let \" lhs \" = \" rhs \" in\")\n"
    "        : YYCOPYSTAG\n"
    "    ) nl;\n"
    "\n"
    "code:yycopymtag =\n"
    "    topindent (.api.record\n"
    "        ? (.monadic\n"
    "            ? \"let \" lhs \" = \" rhs\n"
    "            : \"let \" lhs \" = \" rhs \" in\")\n"
    "        : YYCOPYMTAG\n"
    "    ) nl;\n"
    "\n"
    "code:yygetaccept =\n"
    "    (.api.record ? var : YYGETACCEPT);\n"
    "\n"
    "code:yysetaccept =\n"
    "    topindent (.api.record\n"
    "        ? (.monadic\n"
    "            ? \"let \" var \" = \" val\n"
    "            : \"let \" var \" = \" val \" in\")\n"
    "        : YYSETACCEPT\n"
    "    ) nl;\n"
    "\n"
    "code:yygetcond =\n"
    "    (.api.record ? var : YYGETCOND);\n"
    "\n"
    "code:yysetcond =\n"
    "    topindent (.api.record\n"
    "        ? (.monadic\n"
    "            ? \"let \" var \" = \" val\n"
    "            : \"let \" var \" = \" val \" in\")\n"
    "        : YYSETCOND\n"
    "    ) nl;\n"
    "\n"
    "code:yygetstate =\n"
    "    (.api.record ? var : YYGETSTATE);\n"
    "\n"
    "code:yysetstate =\n"
    "    topindent (.api.record\n"
    "        ? (.monadic\n"
    "            ? \"let \" var \" = \" val\n"
    "            : \"let \" var \" = \" val \" in\")\n"
    "        : YYSETSTATE\n"
    "    ) nl;\n"
    "\n"
    "code:yylessthan =\n"
    "    (.api.record\n"
    "        ? YYCURSOR \" >= \" YYLIMIT // YYFILL check can only be used with EOF rule $\n"
    "        : YYLESSTHAN);\n"
    "\n"
    "code:yybm_filter = \"(\" yych \" .&. complement 0xFF) /= 0\";\n"
    "\n"
    "code:yybm_match = \"(\" yybm \" ! (\" offset \" + fromIntegral \" yych \") .&. \" mask \") /= 0\";\n"
    ;
