#include <lib.h>

inherit LIB_SENTIENT;

static void create() {
    sentient::create();
    SetKeyName("Dark side lord");
    SetId( ({"lord"}) );
    SetShort("*DARK SIDE* lord");
    SetLong("Dark side lord. Beware, creature randomly pushing button.");
    SetLevel(20);
     SetTown("darkside");
    SetRace("human");
    SetGender("male");
    SetClass("fighter");
    SetAction(10, ("!push button"));
}
void init(){
    ::init();
}
