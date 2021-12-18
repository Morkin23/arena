#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("Arena -1W");
    SetLong("Western part of the Arena.");
    SetExits( ([ "north" : "/domains/arena/1n1w.c", 
        	"south" : "/domains/arena/1s1w.c",
          "east" : "/domains/arena/center.c"
      ]) );
}

void init(){
    ::init();
} 