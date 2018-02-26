
  
int speaker = 2;

// We'll set up an array with the notes we want to play
// change these values to make different songs!

// Length must equal the total number of notes and spaces 


void song1(){
   const int songLength = 18;
   String notes[] = {"C4", "D4", "F4", "D4", "A4", " ",  "A4", "G4", " ",  "C4", "D4", "F4", "D4", "G4", " ", "G4", "F4"}; 
   //a space represents a rest

   // Beats is an array of values for each note and rest.
   // A "1" represents a quarter-note, 2 a half-note, etc.
   // Don't forget that the rests (spaces) need a length as well.
   int beats[] = {1,1,1,1,1,1,4,4,2,1,1,1,1,1,1,4,4,2};
   int tempo = 150;
   
   int i, duration;
  
   for (i = 0; i < songLength; i++) // step through the song arrays
   {
      duration = beats[i] * tempo;  // length of note/rest in ms
    
      if (notes[i] == " ")          // is this a rest? 
      {
        delay(duration);            // then pause for a moment
      }
      else                          // otherwise, play the note
      {
        tone(speaker, frequency(notes[i]), duration);
        delay(duration);            // wait for tone to finish
      }
      delay(tempo/10);              // brief pause between notes
   } 
}


void setup() 
{
  pinMode(speaker, OUTPUT);
    song1();
}


void loop() 
{
    song1();
}


int frequency(String note) 
{
  // This function takes a note string (for example C4), and returns the
  // corresponding frequency in Hz for the tone() function.
  
  int i;
  int numNotes = 8;  // number of notes we're storing
  
  String names[] = { "C4", "D4", "E4", "F4", "G4", "A4", "B4", "C5" };
  int frequencies[] = {262, 294, 330, 349, 392, 440, 494, 523};
  
  
  for (i = 0; i < numNotes; i++) 
  {
    if (names[i] == note)         // Is this the one?
    {
      return(frequencies[i]);     // Yes! Return the frequency
    }
  }
  return(0);  
}
