#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("Arena - 2S");
    SetLong("LIGHT SIDE part of the Arena.");
    SetInventory(([
                "/domains/arena/obj/button_light" : 1,
                "/domains/arena/npc/rat" : 1
                ])); 
    
SetExits( ([ "north" : "/domains/arena/1s.c"
      ]) );
}

void init(){
    ::init();
} 