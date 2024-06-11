-- Generated by re2c
{-# LANGUAGE RecordWildCards #-}
#1 "haskell/submatch/01_stags_fill.re"
-- re2hs $INPUT -o $OUTPUT
{-# OPTIONS_GHC -Wno-unused-record-wildcards #-}
{-# LANGUAGE OverloadedStrings #-}

import Control.Monad
import Data.ByteString as BS
import GHC.IO.Handle
import System.Directory
import System.IO

chunk_size :: Int
chunk_size = 4096

data State = State {
    _file :: !Handle,
    _str :: !BS.ByteString,
    _cur :: !Int,
    _mar :: !Int,
    _lim :: !Int,
    _tok :: !Int,
    _eof :: !Bool,
    
#27 "haskell/submatch/01_stags_fill.hs"

_yyt1 :: !Int,
_yyt2 :: !Int,
_yyt3 :: !Int,
_yyt4 :: !Int,
#22 "haskell/submatch/01_stags_fill.re"

    _1 :: !Int,
    _2 :: !Int,
    _3 :: !Int,
    _4 :: !Int,
    _5 :: !Int
}

data SemVer = SemVer {
    major :: !Int,
    minor :: !Int,
    patch :: !Int
} deriving (Eq, Show)

s2n :: BS.ByteString -> Int -> Int -> Int
s2n s i j = f i 0 where
    f k n = if k >= j then n else f (k + 1) (n * 10 + (fromIntegral (BS.index s k) - 48))


#53 "haskell/submatch/01_stags_fill.hs"
yy0 :: State -> [SemVer] -> IO [SemVer]
yy0 State{..} _vers = do
    yych <- return $ BS.index _str _cur
    case yych of
        _c | 0x30 <= _c && _c <= 0x39 -> do
            let _yyt1 = _cur
            _cur <- return $ _cur + 1
            yy3 State{..} _vers
        _c | True -> do
            if _cur >= _lim then do
                (State{..}, yyfill) <- fill State{..}
                if yyfill then yy0 State{..} _vers
                else yy11 State{..} _vers
            else do
                _cur <- return $ _cur + 1
                yy1 State{..} _vers

yy1 :: State -> [SemVer] -> IO [SemVer]
yy1 State{..} _vers = do
    yy2 State{..} _vers

yy2 :: State -> [SemVer] -> IO [SemVer]
yy2 State{..} _vers = do
#59 "haskell/submatch/01_stags_fill.re"
    error "lexer failed"
#79 "haskell/submatch/01_stags_fill.hs"

yy3 :: State -> [SemVer] -> IO [SemVer]
yy3 State{..} _vers = do
    let _mar = _cur
    yych <- return $ BS.index _str _cur
    case yych of
        _c | 0x2E == _c -> do
            _cur <- return $ _cur + 1
            yy4 State{..} _vers
        _c | 0x30 <= _c && _c <= 0x39 -> do
            _cur <- return $ _cur + 1
            yy6 State{..} _vers
        _c | True -> do
            if _cur >= _lim then do
                (State{..}, yyfill) <- fill State{..}
                if yyfill then yy3 State{..} _vers
                else yy2 State{..} _vers
            else do
                yy2 State{..} _vers

yy4 :: State -> [SemVer] -> IO [SemVer]
yy4 State{..} _vers = do
    yych <- return $ BS.index _str _cur
    case yych of
        _c | 0x30 <= _c && _c <= 0x39 -> do
            let _yyt2 = _cur
            _cur <- return $ _cur + 1
            yy7 State{..} _vers
        _c | True -> do
            if _cur >= _lim then do
                (State{..}, yyfill) <- fill State{..}
                if yyfill then yy4 State{..} _vers
                else yy5 State{..} _vers
            else do
                yy5 State{..} _vers

yy5 :: State -> [SemVer] -> IO [SemVer]
yy5 State{..} _vers = do
    let _cur = _mar
    yy2 State{..} _vers

yy6 :: State -> [SemVer] -> IO [SemVer]
yy6 State{..} _vers = do
    yych <- return $ BS.index _str _cur
    case yych of
        _c | 0x2E == _c -> do
            _cur <- return $ _cur + 1
            yy4 State{..} _vers
        _c | 0x30 <= _c && _c <= 0x39 -> do
            _cur <- return $ _cur + 1
            yy6 State{..} _vers
        _c | True -> do
            if _cur >= _lim then do
                (State{..}, yyfill) <- fill State{..}
                if yyfill then yy6 State{..} _vers
                else yy5 State{..} _vers
            else do
                yy5 State{..} _vers

yy7 :: State -> [SemVer] -> IO [SemVer]
yy7 State{..} _vers = do
    yych <- return $ BS.index _str _cur
    case yych of
        _c | 0x0A == _c -> do
            let _yyt3 = _cur
            let _yyt4 = (-1)
            _cur <- return $ _cur + 1
            yy8 State{..} _vers
        _c | 0x2E == _c -> do
            let _yyt3 = _cur
            _cur <- return $ _cur + 1
            yy9 State{..} _vers
        _c | 0x30 <= _c && _c <= 0x39 -> do
            _cur <- return $ _cur + 1
            yy7 State{..} _vers
        _c | True -> do
            if _cur >= _lim then do
                (State{..}, yyfill) <- fill State{..}
                if yyfill then yy7 State{..} _vers
                else yy5 State{..} _vers
            else do
                yy5 State{..} _vers

yy8 :: State -> [SemVer] -> IO [SemVer]
yy8 State{..} _vers = do
    let _1 = _yyt1
    let _3 = _yyt2
    let _4 = _yyt3
    let _5 = _yyt4
    let _2 = _yyt2
    _2 <- return $ if _2 == (-1) then (-1) else _2 - 1
#50 "haskell/submatch/01_stags_fill.re"
    let ver = SemVer {
        major = s2n _str _1 _2,
        minor = s2n _str _3 _4,
        patch = if _5 == (-1) then 0 else s2n _str _5 (_cur - 1)
    }
    lexer State{..} (ver: _vers)
#178 "haskell/submatch/01_stags_fill.hs"

yy9 :: State -> [SemVer] -> IO [SemVer]
yy9 State{..} _vers = do
    yych <- return $ BS.index _str _cur
    case yych of
        _c | 0x30 <= _c && _c <= 0x39 -> do
            let _yyt4 = _cur
            _cur <- return $ _cur + 1
            yy10 State{..} _vers
        _c | True -> do
            if _cur >= _lim then do
                (State{..}, yyfill) <- fill State{..}
                if yyfill then yy9 State{..} _vers
                else yy5 State{..} _vers
            else do
                yy5 State{..} _vers

yy10 :: State -> [SemVer] -> IO [SemVer]
yy10 State{..} _vers = do
    yych <- return $ BS.index _str _cur
    case yych of
        _c | 0x0A == _c -> do
            _cur <- return $ _cur + 1
            yy8 State{..} _vers
        _c | 0x30 <= _c && _c <= 0x39 -> do
            _cur <- return $ _cur + 1
            yy10 State{..} _vers
        _c | True -> do
            if _cur >= _lim then do
                (State{..}, yyfill) <- fill State{..}
                if yyfill then yy10 State{..} _vers
                else yy5 State{..} _vers
            else do
                yy5 State{..} _vers

yy11 :: State -> [SemVer] -> IO [SemVer]
yy11 State{..} _vers = do
#58 "haskell/submatch/01_stags_fill.re"
    return _vers
#218 "haskell/submatch/01_stags_fill.hs"

lexer :: State -> [SemVer] -> IO [SemVer]
lexer State{..} _vers = do
    yy0 State{..} _vers

#60 "haskell/submatch/01_stags_fill.re"


fill :: State -> IO (State, Bool)
fill State{..} = do
    case _eof of
        True -> return (State{..}, False)
        False -> do
            -- Discard everything up to the current token, cut off terminating null,
            -- read new chunk from file and reappend terminating null at the end.
            chunk <- BS.hGet _file chunk_size
            return (State{
                _str = BS.concat [(BS.init . BS.drop _tok) _str, chunk, "\0"],
                _cur = _cur - _tok,
                _mar = _mar - _tok,
                _lim = _lim - _tok + BS.length chunk, -- exclude terminating null
                _tok = 0,
                _eof = BS.null chunk, -- end of file?
                ..}, True)

main :: IO ()
main = do
    let fname = "input"

    -- Prepare input file.
    BS.writeFile fname $ BS.concat ["1.22.333\n" | _ <- [1..chunk_size]]
    let expect = [SemVer {major = 1, minor = 22, patch = 333} | _ <- [1..chunk_size]]

    -- Run lexer on the prepared file.
    fh <- openFile fname ReadMode
    let st = State {
        _file = fh,
        _str = BS.singleton 0,
        _cur = 0,
        _mar = 0,
        _tok = 0,
        _lim = 0,
        _eof = False,
        
#263 "haskell/submatch/01_stags_fill.hs"

_yyt1 = (-1),
_yyt2 = (-1),
_yyt3 = (-1),
_yyt4 = (-1),
#97 "haskell/submatch/01_stags_fill.re"

        _1 = (-1),
        _2 = (-1),
        _3 = (-1),
        _4 = (-1),
        _5 = (-1)
    }
    result <- lexer st []
    hClose fh

    -- Cleanup.
    removeFile fname

    -- Check result.
    when (result /= expect) $ error $ "expected " ++ show expect ++ ", got " ++ show result
    return ()
