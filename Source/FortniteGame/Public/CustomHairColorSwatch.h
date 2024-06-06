#pragma once
#include "CoreMinimal.h"
#include "CustomDynamicColorSwatch.h"
#include "CustomHairColorSwatch.generated.h"

// Class holding information about customizable colors (name, value pairs) that can be assigned to the character for
// defining hair color.  I'm torn about whether this class should exist; normally I wouldn't create it, but at the
// start of swatch creation I had an idea that had greater differences in swatches.  Now it seems unnecessary, but I'll
// just have to decide before I check in.  The biggest advantage may be Editor UI only allowing the correct type.  Which
// is pretty pitiful.
UCLASS(Blueprintable)
class UCustomHairColorSwatch : public UCustomDynamicColorSwatch {
    GENERATED_BODY()
public:
    UCustomHairColorSwatch();
};

