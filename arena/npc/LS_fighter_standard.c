#include <lib.h>
inherit LIB_SENTIENT;

int CheckOrc(mixed val){
    string *allowed_races = ({ "dark_side" });
    if(!val) return 0;
    if(!objectp(val)) return 0;
    if(member_array(val->GetId(), allowed_races) != -1) return 1;
    return 0;
}

static void create(){
      mapping ars;
    int rand;
    rand = random(3);
    sentient::create();
    SetKeyName("Light side fighter");
    SetId( ({"human","npc","warrior","fighter"}) );
    SetShort("a fighter");
    SetLong("This is a large human warrior. His pectoral muscles "+
            "are clearly visible even through his armor. His face is covered in "+
            "bold blue tattoos.");
    SetLevel(5;
    SetRace("human");
    SetGender("male");
    SetClass("fighter");
    SetWanderSpeed(3);
    SetEncounter( (: CheckOrc :) );
    ars = ([ ]);
    switch (rand) {
		case 0: ars["/domains/arena/weap/sharpsword"]="wield sword"; write(rand); break;
		case 1: ars["/domains/arena/weap/sharpsword_poor"]="wield sword"; write(rand); break;
		case 2: ars["/domains/arena/weap/sharpsword_good"]="wield sword"; write(rand); break;
        default : write(rand);
	}
	SetInventory( ars );
}
void init(){
    ::init();
}
