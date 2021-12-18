#include <lib.h>

inherit LIB_ROOM;

static void create() {
    room::create();
    SetClimate("indoors");
    SetAmbientLight(30);
    SetShort("Arena - 2N");
    SetLong("DARK SIDE part of the Arena.");
    SetInventory(([
                "/domains/arena/obj/button_dark" : 1,
                "/domains/arena/npc/DS_lord" : 1
                ])); 
    
	SetExits( ([ "south" : "/domains/arena/1n.c"
      ]) );
}

void init(){
    ::init();
} 