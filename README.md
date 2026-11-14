# GOOC

A fork of ManDude's [GOOC](https://github.com/ManDude/gooc) compiler with various qol fixes, more instructions, and Crash 3 support.

Vanilla GOOL scripts from Crash 2/3, translated into GOOC format for PAL, along with a precompiled compiler binary, can be found [here](link). 

## Crash 3 support

- Added Crash 3 compilation support.
- Added animation/model declaration pairing support.
- Added automatic Crash 3 spawn constant generation. Generated headers reatain the Crash 2 format.

## Instructions

- Added `getrank`, `setrank`, `setevent`, `setval`, `misc5`, and `print` support.
- Added `miscfunc` and the function context aliases: `getfunc`, `setfunc`, and `pushfunc`.
- Added `ins74`–`ins77` and `ins79`–`ins81`, including expression results for `ins74`, `ins76`, and `ins79`.
- Extended C3 `movetolist` and `getvert` params, with optional operands for `startgame`, `entitysetspawn`, and `atan2`.
- Added `pointclip` support, nested `getvert` expressions, and embedded instruction operands for `miscfunc` and function context ops.

## Control flow

- Added `goto`, with scope, stack, and jump range checks.
- Added writable and linked field aliases via `expr`.
- Added array pointers with element offsets.
- Improved inline routines, including writable arguments, nested scopes, local variable handling, and loop/return behavior.

## Events

- Added `accepteventif` / `accevif` and `rejecteventif` / `rejevif`.
- Added `#interruptcount` directive for Crash 2/3, with defaults of 80 and 81 respectively.
- Added interrupt table bounds and event context validation.

## Graphics

- Added explicit texture UV corners for Crash 2/3.
- Corrected C3 fragmented animation frame counts.
- Added animation declaration, frame count, and duplicate name validation.

## Fixes

- Fixed local variable stack addressing inside `save` blocks.
- Fixed array pool addressing, `getval` expressions, and external module EID insertion.
- Fixed `getglobal` expression construction and external module version handling.
- Fixed inline statement expansion for `ins74`, `ins76`, and `ins79`.
- Fixed entry header storage and several compiler declaration issues.


