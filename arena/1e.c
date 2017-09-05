#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("Arena - 1E");
    SetLong("East part of the Arena.");
    SetExits( ([ "north" : "/domains/arena/1n1e.c", 
        	"south" : "/domains/arena/1s1e.c",
          "west" : "/domains/arena/center.c"
      ]) );
}

void init(){
    ::init();
} 