#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("Arena - 1N1W");
    SetLong("NorthWest corner of the Arena.");
    SetInventory(([
                "/domains/arena/obj/button_human" : 1,
                "/domains/arena/npc/rat" : 1
                ])); 
    SetExits( ([ "east" : "/domains/arena/1n.c",
        "southeast" : "/domains/arena/1s1e.c",
          "south" : "/domains/arena/1w.c"
      ]) );
}

void init(){
    ::init();
} 