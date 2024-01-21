#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CustomDynamicColorSwatch.h"
#include "CustomAccessoryColorSwatch.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UCustomAccessoryColorSwatch : public UCustomDynamicColorSwatch {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor AccessoryColors[3];
    
public:
    UCustomAccessoryColorSwatch();
};

