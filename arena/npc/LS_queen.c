#include <lib.h>

inherit LIB_SENTIENT;

static void create() {
    sentient::create();
    SetKeyName("rat");
    SetMaxHealthPoints(10);
    SetAdjectives( ({"mangy", "little", "dirty"}) );
    SetId( ({"rat"}) );
    SetShort("*LIGHT SIDE* queen");
    SetLong("A scruffy little dirty rat. Beware, creature randomly pushing button.");
    SetLevel(1);
    SetRace("rodent");
    SetGender("male");
    SetClass("fighter");
    SetAction(10, ("!push button"));
}
void init(){
    ::init();
}
