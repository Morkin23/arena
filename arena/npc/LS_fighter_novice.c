#include <lib.h>
inherit LIB_SENTIENT;
string jmeno;

int CheckOrc(mixed val){
    if(!val) return 0;
    if(!objectp(val)) return 0;
    jmeno = (val->GetTown());
    if(strsrch( jmeno, "darkside" ) != -1) return 1;
    return 0;
}

static void create(){
      mapping ars;
    int rand;
    rand = random(3);
    sentient::create();
    SetKeyName("Light side novice fighter");
    SetId( ({"human","npc","warrior","fighter","light_side"}) );
    SetShort("a light side fighter (novice)");
    SetLong("This is a large human warrior. His pectoral muscles "+
            "are clearly visible even through his armor. His face is covered in "+
            "bold blue tattoos.");
    SetTown("lightside");
    SetLevel(2);
    SetRace("human");
    SetClass("fighter");
    SetGender("male");
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
