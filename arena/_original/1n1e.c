#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
   SetShort("Arena - 1N1E");
    SetLong("NorthEast corner of the Arena.");
    SetExits( ([ "west" : "/domains/arena/1n.c",
            "southwest" : "/domains/arena/center.c",
          "south" : "/domains/arena/1e.c"
      ]) );
}

void init(){
    ::init();
} 