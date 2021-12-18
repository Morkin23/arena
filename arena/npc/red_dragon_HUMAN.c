#include <lib.h>

inherit LIB_SENTIENT;

int CheckOrc(mixed val){
    string *allowed_races = ({ "orc" });
    if(!val) return 0;
    if(!objectp(val)) return 0;
    if(member_array(val->GetRace(), allowed_races) != -1) return 1;
    return 0;
}

static void create() {
    sentient::create();
    SetKeyName("dragon");
    SetAdjectives( ({"huge", "red", "dangerous"}) );
    SetId(({"npc","mob","character","mobile"}));
    SetShort("a red dragon");
    SetLong("Ancient villain of legend and fable, the red dragon is among the most vicious, cruel, and dangerous beasts around. This one is easily fifteen feet tall and could probably crush you without even noticing.");
    SetClass("fighter");
    SetLevel(30);
    SetMelee(1);
    SetRace("dragon");
    SetGender("male");
    SetEncounter( (: CheckOrc :) );
}
void init(){
    ::init();
}
