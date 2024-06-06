#pragma once
#include "CoreMinimal.h"
#include "CustomDynamicColorSwatch.h"
#include "CustomSkinColorSwatch.generated.h"

// Class holding information about customizable colors (name, value pairs) that can be assigned to the character for
// defining skin (and makeup, tattoo, etc.) color.
UCLASS(Blueprintable)
class UCustomSkinColorSwatch : public UCustomDynamicColorSwatch {
    GENERATED_BODY()
public:
    UCustomSkinColorSwatch();
};

