#include <lib.h>
inherit LIB_SENTIENT;

int Pozdrav(mixed val){
    if(!val) return 0;
    if(!objectp(val)) return 0;
    eventForce("say Name: "+val->GetKeyname());
    eventForce("say Race: "+val->GetRace());
    eventForce("say Class: "+val->GetClass());
    eventForce("say Level: "+val->GetLevel());
    eventForce("say HP: "+val->GetHealthPoint());
    foreach(mixed ident in GetId()){
          eventForce("say ID: "+ident);  
        }
    return 0;
}

static void create(){
    sentient::create();
    SetKeyName("scanner");
    SetId( ({"android","npc","scanner"}) );
    SetShort("a TALK");
    SetLong("This is a large scanner.");
    SetRace("android");
    SetEncounter( (: Skenuj :) );
    }

void init(){
    ::init();
}
