#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("Arena - 2S");
    SetLong("LIGHT SIDE part of the Arena.");
    SetExits( ([ "north" : "/domains/arena/1s.c"
      ]) );
}

void init(){
    ::init();
} 