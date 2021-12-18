#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("Arena - 1N");
    SetLong("North part of the Arena.");
    SetExits( ([ "west" : "/domains/arena/1n1w.c", 
        	"east" : "/domains/arena/1n1e.c",
          "south" : "/domains/arena/center.c"
      ]) );
}

void init(){
    ::init();
} 