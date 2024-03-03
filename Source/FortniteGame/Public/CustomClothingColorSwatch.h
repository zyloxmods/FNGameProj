#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CustomColorSwatch.h"
#include "CustomClothingColorSwatch.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCustomClothingColorSwatch : public UCustomColorSwatch {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor AccessoryColors[2];
    
public:
    UCustomClothingColorSwatch();
};

