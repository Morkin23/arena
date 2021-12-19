#include <lib.h>
inherit LIB_SENTIENT;
int i;
mixed arr,ident;

int Skenuj(mixed val){
    if(!val) return 0;
    if(!objectp(val)) return 0;
    if(val->GetRace() == "android") return 0;
    eventForce("say Name: "+val->GetName());
    eventForce("say KeyName: "+val->GetKeyName());
//   eventForce("say Race: "+val->GetRace());
//    eventForce("say Class: "+val->GetClass());
    eventForce("say Level: "+val->GetLevel());
    eventForce("say HP/MAX: "+val->GetHealthPoints()+"/"+val->GetMaxHealthPoints());
 //   eventForce("say ID Size: "+sizeof(val->GetUserId()));
 //   eventForce("say UserID: "+val->GetUserId());
    //eventForce("say ID Size: "+sizeof(val->GetId()));
 //   eventForce("say ID: "+val->GetId());
    arr = val->GetId();
 //   for (i = 10; i < sizeof(val->GetId()[i]); i++) {
 //   eventForce("say I: "+arr[i]);
 //       }
 //   foreach(mixed ident in arr){
 //         eventForce("say ID: "+ident);  
 //       }

    return 0;
}

static void create(){
    sentient::create();
    SetKeyName("scanner");
    SetId( ({"android","npc","scanner"}) );
    SetShort("a scanner");
    SetLong("This is a large scanner.");
    SetRace("android");
    SetEncounter( (: Skenuj :) );
    }

void init(){
    ::init();
}
