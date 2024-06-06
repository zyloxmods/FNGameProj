#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CustomDynamicColorSwatch.h"
#include "EAccessoryColorName.h"
#include "CustomAccessoryColorSwatch.generated.h"

// Class holding information about customizable colors (name, value pairs) that can be assigned to the character.
UCLASS(Blueprintable)
class UCustomAccessoryColorSwatch : public UCustomDynamicColorSwatch {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true, ArraySizeEnum="EAccessoryColorName"), Category = "Color Swatch")
    FLinearColor AccessoryColors[EAccessoryColorName::EAccessoryColorName_NumTypes];
public:
    UCustomAccessoryColorSwatch();
};

