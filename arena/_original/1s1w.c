#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("Arena - 1S1W");
    SetLong("SouthWest corner of the Arena.");
    SetExits( ([ "north" : "/domains/arena/1w.c",
            "northeast" : "/domains/arena/center.c", 
        	"east" : "/domains/arena/1s.c"
          ]) );
}

void init(){
    ::init();
} 