#include <lib.h>

inherit LIB_SENTIENT;

static void create() {
    sentient::create();
    SetKeyName("Light side queen");
    SetId( ({"queen"}) );
    SetShort("*LIGHT SIDE* queen");
    SetLong("Light side queen. Beware, creature randomly pushing button.");
    SetLevel(20);
     SetTown("lightside");
    SetRace("human");
    SetGender("female");
    SetClass("fighter");
    SetAction(10, ("!push button"));
}
void init(){
    ::init();
}
