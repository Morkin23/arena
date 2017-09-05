#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
   SetShort("Arena - 1N1E");
    SetLong("NorthEast corner of the Arena.");
    SetInventory(([
                "/domains/arena/obj/button_human" : 1,
                "/domains/arena/npc/rat" : 1
                ])); 
    SetExits( ([ "west" : "/domains/arena/1n.c",
            "southwest" : "/domains/arena/1s1w.c",
          "south" : "/domains/arena/1e.c"
      ]) );
}

void init(){
    ::init();
} 