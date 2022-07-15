#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates camelCase

//  1)
//  Noun: mouse
//  action 1: the mouse crawls
mouse.craws();
//  action 2: the mouse eats
mouse.eats();
//  action 3: the mouse sleeps
mouse.sleeps();

//  2)
//  Noun:fan
//  ation 1: the fan cools the room
fan.coolsRoom();
// Eaction 2: the fan consumes electricity
fan.consumesRlectricity();
//  action 3: the fan oscillates
fan.oscillates();

//  3)
//  Noun: phone
//  action 1: the phone rings
phone.rings();
//  action 2: the phone vibrates
phone.vibrates();
//  action 3: the phone is charging
phone.charging();

//  4) 
//  Noun: washing machine
//  action 1: the washing machine makes beeping noise
washingmachine.makesBeepingNoise();
//  action 2: the washing machine wash clothes
washingmachine.washClothes();
//  action 3: the washing machine uses water
washingmachine.usesWater();

//  5)
//  Noun:speaker
//  action 1: the speaker emits sound waves
speaker.emitsSoundSaves();
//  action 2: the speaker increases SPL of room
speaker.increaseRoomSPL();
//  action 3: the speaker vibrates
speaker.vibrates();

//  6)
//  Noun: doctor
//  action 1: the doctor cure patients
doctor.curePatients();
//  action 2: the doctor drinks coffee
doctor.drinksCoffee();
//  action 3: the doctor sits
doctor.sits();

//  7)
//  Noun: bicycle
//  action 1: the bicycle fell
bicycle.fell();
//  action 2: the bicycle rings the bell
bicycle.ringsBell();
//  action 3: the bicycle skid
bicycle.skid();

//  8)
//  Noun: leg
//  action 1: the leg broke
leg.broke();
//  action 2: the leg cramp
leg.cramp();
//  action 3: the leg extends
leg.extends();

//  9) 
//  Noun: teacher
//  action 1: the teacher marks the exam 
teacher.marksExam();
//  action 2: the teach scolds the studs on the bher.
teacher.writesOnBoard();s
//  10) 
//  Noun: Junk Food
//  action 1: the junk food gave diarrhea
junkFood.gaveDiarrhea();
//  action 2: the junk food produces an odour
junkFood.producesAnOdour();
//  action 3: the junk food expires tomorrow
junkFood.expiresTomorrow();

orrow();
: the microphone helps amplify the voice
microphone.amplifyVoice();


#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
