/*!re2c
    re2c:eof = 0;

    *              { err }
    $              { eof }
    "ab" (@c "c")* { one }
    "xy" @z "z"*   { two }
*/
