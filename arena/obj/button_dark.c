/*    /domains/campus/etc/chuch_button.c
 *    From the Dead Souls Object Library
 *    An example dummy item that allows pressing
 *    Created by Descartes of Borg 961222
 */

#include <lib.h>

inherit LIB_ITEM; // These do not show up in desc, but you can look at them
inherit LIB_PRESS; // Makes the item pressable

int PushButton(object who) {
    
    object *objects;
    int rand;
    rand = random(3);
    write(rand);
    switch(rand){
    case 0 : objects=({ load_object("/domains/arena/npc/DS_fighter_novice") });break;
    case 1 : objects=({ load_object("/domains/arena/npc/DS_fighter") });break;
    case 2 : objects=({ load_object("/domains/arena/npc/DS_fighter_veteran") });break;
    default : write(rand);
    }
    send_messages("press", "$agent_name $agent_verb the button, "
            "resetting the experiment.",
            who, 0, environment(who));

    foreach(object ob in objects){
    //    ob->ButtonPush();
        write(ob->GetShort());
        // this_player()->eventMoveLiving("/domains/campus/room/tunnel"); 
        //new("/domains/arena/npc/fighter_veteran")->eventMoveLiving("/domains/arena/1n1e"); 
        new(file_name(ob))->eventMoveLiving("/domains/arena/2n"); 
        }
        }

static void create() {
    ::create();
    SetKeyName("button");
    SetId(({"button","button on the pedestal" }));
    SetAdjectives("pedestal", "red","shiny","candylike","candy-like","big");
    SetShort("a big DARK SIDE button");
    SetLong("It is a red, shiny, candy-like button.");
    SetPress((: PushButton :));
    //SetPress(tell_object(this_player(),"hi!"));
}
