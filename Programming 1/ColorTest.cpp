using namespace System;

void main()
{
   // Get a string array with the names of ConsoleColor enumeration members. 
   array<String^>^ colorNames = Enum::GetNames(ConsoleColor::typeid);

   // Display each foreground color except black on a constant black background.
   Console::WriteLine("All the foreground colors (except Black) on a constant black background:");

   for each (String^ colorName in colorNames)
   {
      // Convert the string representing the enum name to the enum value.
      ConsoleColor color = (ConsoleColor) Enum::Parse(ConsoleColor::typeid, colorName);

      if (color == ConsoleColor::Black) continue;

      Console::Write("{0,11}: ", colorName);
      Console::BackgroundColor = ConsoleColor::Black;
      Console::ForegroundColor = color;
      Console::WriteLine("This is foreground color {0}.", colorName);
      // Restore the original foreground and background colors.
      Console::ResetColor();
   }
   Console::WriteLine();

   // Display each background color except white with a constant white foreground.
   Console::WriteLine("All the background colors (except White) with a constant white foreground:");

   for each (String^ colorName in colorNames)
   {
      // Convert the string representing the enum name to the enum value.
      ConsoleColor color = (ConsoleColor) Enum::Parse(ConsoleColor::typeid, colorName);

      if (color == ConsoleColor::White) continue;

      Console::Write("{0,11}: ", colorName);
      Console::ForegroundColor = ConsoleColor::White;
      Console::BackgroundColor = (ConsoleColor) Enum::Parse(ConsoleColor::typeid, colorName);
      Console::WriteLine("This is background color {0}.", colorName);
      Console::ResetColor();
      
      cout<<"hello world";
   }
}
// The example displays the following output: 
//    All the foreground colors (except Black) on a constant black background: 
//       DarkBlue: This is foreground color DarkBlue. 
//      DarkGreen: This is foreground color DarkGreen. 
//       DarkCyan: This is foreground color DarkCyan. 
//        DarkRed: This is foreground color DarkRed. 
//    DarkMagenta: This is foreground color DarkMagenta. 
//     DarkYellow: This is foreground color DarkYellow. 
//           Gray: This is foreground color Gray. 
//       DarkGray: This is foreground color DarkGray. 
//           Blue: This is foreground color Blue. 
//          Green: This is foreground color Green. 
//           Cyan: This is foreground color Cyan. 
//            Red: This is foreground color Red. 
//        Magenta: This is foreground color Magenta. 
//         Yellow: This is foreground color Yellow. 
//          White: This is foreground color White. 
//     
//    All the background colors (except White) with a constant white foreground: 
//          Black: This is background color Black. 
//       DarkBlue: This is background color DarkBlue. 
//      DarkGreen: This is background color DarkGreen. 
//       DarkCyan: This is background color DarkCyan. 
//        DarkRed: This is background color DarkRed. 
//    DarkMagenta: This is background color DarkMagenta. 
//     DarkYellow: This is background color DarkYellow. 
//           Gray: This is background color Gray. 
//       DarkGray: This is background color DarkGray. 
//           Blue: This is background color Blue. 
//          Green: This is background color Green. 
//           Cyan: This is background color Cyan. 
//            Red: This is background color Red. 
//        Magenta: This is background color Magenta. 
//         Yellow: This is background color Yellow.}
