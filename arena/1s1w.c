#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("Arena - 1S1W");
    SetLong("SouthWest corner of the Arena.");
    SetInventory(([
                "/domains/arena/obj/button_orc" : 1,
                "/domains/arena/npc/rat" : 1
                ])); 
    SetExits( ([ "north" : "/domains/arena/1w.c",
            "northeast" : "/domains/arena/1n1e.c", 
        	"east" : "/domains/arena/1s.c"
          ]) );
}

void init(){
    ::init();
} 