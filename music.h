#ifndef MUSIC_INCLUDE
#define MUSIC_INCLUDE

// INCLUDES
#include "global.h"

// DEFINES

// Enum notes makes writing music more user friendly
const enum notes {
    C0, Cd0, D0, Dd0, E0, F0, Fd0, G0, Gd0, A0, Ad0, B0,
    C1, Cd1, D1, Dd1, E1, F1, Fd1, G1, Gd1, A1, Ad1, B1,
    C2, Cd2, D2, Dd2, E2, F2, Fd2, G2, Gd2, A2, Ad2, B2,
    C3, Cd3, D3, Dd3, E3, F3, Fd3, G3, Gd3, A3, Ad3, B3,
    C4, Cd4, D4, Dd4, E4, F4, Fd4, G4, Gd4, A4, Ad4, B4,
    C5, Cd5, D5, Dd5, E5, F5, Fd5, G5, Gd5, A5, Ad5, B5,
    SILENCE, END
};

// Array of frequencies to match up to notes
const UWORD frequencies[] = {
    44, 156, 262, 363, 457, 547, 631, 710, 786, 854, 923, 986,
    1046, 1102, 1155, 1205, 1253, 1297, 1339, 1379, 1417, 1452, 1486, 1517,
    1546, 1575, 1602, 1627, 1650, 1673, 1694, 1714, 1732, 1750, 1767, 1783,
    1798, 1812, 1825, 1837, 1849, 1860, 1871, 1881, 1890, 1899, 1907, 1915,
    1923, 1930, 1936, 1943, 1949, 1954, 1959, 1964, 1969, 1974, 1978, 1982,
    1985, 1988, 1992, 1995, 1998, 2001, 2004, 2006, 2009, 2011, 2013, 2015
};

// Array of notes to be played as a song
const UBYTE music[] = {
    E4, E4, E4,
    C4, E4, G4, G3,

    C4, G3, E3,
    A3, B3, B3, A3,
    G3, E4, G4, A4,
    F4, G4, E4, C4, D4, B3,

    C4, G3, E3,
    A3, B3, B3, A3,
    G3, E4, G4, A4,
    F4, G4, E4, C4, D4, B3,

    G4, Fd4, F4, D4, E4,
    G3, A3, C4,
    A3, C4, D4,
    G4, Fd4, F4, D4, E4,
    C5, C5, C5,

    G4, Fd4, F4, D4, E4,
    G3, A3, C4,
    A3, C4, D4,
    Dd4, D4, C4,

    C4, C4, C4,
    C4, D4, E4, C4, A3, G3,
    C4, C4, C4,
    C4, D4, E4,

    C4, C4, C4,
    C4, D4, E4, C4, A3, G3,
    E4, E4, E4,
    C4, E4, G4,
    G3,

    C4, G3, E3,
    A3, B3, B3, A3,
    G3, E4, G4, A4,
    F4, G4, E4, C4, D4, B3,

    C4, G3, E3,
    A3, B3, B3, A3,
    G3, E4, G4, A4,
    F4, G4, E4, C4, D4, B3,

    E4, C4, G3,
    G3, A3, F4, F4, A3,
    B3, A4, A4, A4, G4, F4,
    E4, C4, A3, G3,

    E4, C4, G3,
    G3, A3, F4, F4, A3,
    B3, F4, F4, F4, E4, D4, C4,
    G3, E3, C3,

    C4, G3, E3,
    A3, B3, A3,
    Gd3, B3, Gd3,
    G3, Fd3, G3,

    END
};

// pointer to current note
UBYTE musicPointer = 0;

// Used to divide the clock by 2
UBYTE DIVIDER = 0;

// PROTOTYPES

#endif