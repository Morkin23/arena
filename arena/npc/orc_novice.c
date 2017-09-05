#include <lib.h>

inherit LIB_SENTIENT;

int CheckHuman(mixed val){
    string *allowed_races = ({ "human" });
    if(!val) return 0;
    if(!objectp(val)) return 0;
    if(member_array(val->GetRace(), allowed_races) != -1) return 1;
    return 0;
}

static void create() {
       mapping ars;
    int rand;
    rand = random(3);
    sentient::create();
    SetKeyName("Novice orc");
    SetId(({"orc"}));
    SetAdjectives(({"dirty"}));
    SetShort("a novice dirty orc");
    SetLong("This orc is typical of its breed: nasty, brutish, and short. It appears "
            "to be a juvenile or adolescent, making it somewhat less "
            "dangerous but more hostile. ");
    SetLevel(2);
    SetRace("orc");
    SetGender("male");
    SetClass("fighter");
    SetWanderSpeed(3);
    SetEncounter( (: CheckHuman :) );
 ars = ([ ]);
    switch (rand) {
		case 0: ars["/domains/arena/weap/axe"]="wield axe"; write(rand); break;
		case 1: ars["/domains/arena/weap/axe_poor"]="wield axe"; write(rand); break;
		case 2: ars["/domains/arena/weap/axe_good"]="wield axe"; write(rand); break;
        default : write(rand);
	}
	SetInventory( ars );

}
void init(){
    ::init();
}
