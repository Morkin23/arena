#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("Arena - 1N1W");
    SetLong("NorthWest corner of the Arena.");
    SetExits( ([ "east" : "/domains/arena/1n.c",
        "southeast" : "/domains/arena/center.c",
          "south" : "/domains/arena/1w.c"
      ]) );
}

void init(){
    ::init();
} 