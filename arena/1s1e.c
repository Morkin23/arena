#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("Arena - 1S1E");
    SetLong("SouthEast corner of the Arena.");
     SetExits( ([ "north" : "/domains/arena/1e.c",
        "northwest" : "/domains/arena/center.c", 
        	"west" : "/domains/arena/1s.c"
          ]) );
}

void init(){
    ::init();
} 