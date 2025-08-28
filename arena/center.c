#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("Arena - center");
    SetLong("Central part of the Arena.");
    SetExits( ([ "west" : "/domains/arena/1w.c", 
        	"east" : "/domains/arena/1e.c",
          "north" : "/domains/arena/1n.c",
          "south" : "/domains/arena/1s.c",
          "northeast" : "/domains/arena/1n1e.c",
          "northwest" : "/domains/arena/1n1w.c",
          "southeast" : "/domains/arena/1s1e.c",
          "southwest" : "/domains/arena/1s1w.c",
        	"down" : "/realms/morkin/workroom.c"
      ]) );
      SetInventory( ([
//                "/domains/arena/npc/red_dragon" : 1,
//                "/domains/arena/npc/dummy" : 1,
		            "/domains/arena/npc/scanner" : 1,
                "/domains/arena/obj/cedule" : 1,
                ]) ); 
}

void init(){
    ::init();
} 