#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("Arena - 1S");
    SetLong("South part of the Arena.");
    SetExits( ([ "west" : "/domains/arena/1s1w.c", 
        	"east" : "/domains/arena/1s1e.c",
		"south" : "/domains/arena/2s.c",
          "north" : "/domains/arena/center.c"
      ]) );
}

void init(){
    ::init();
} 