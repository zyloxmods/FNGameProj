#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EColorSwatchType.h"
#include "EFortCustomGender.h"
#include "CustomColorSwatch.generated.h"

UCLASS(Abstract, Blueprintable)
class FORTNITEGAME_API UCustomColorSwatch : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UCustomColorSwatch();
    //For which gender(s) is this color swatch intended?
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Color Swatch")
    EFortCustomGender GenderPermitted;
protected:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, meta=(AllowPrivateAccess=true), Category = "Color Swatch")
    EColorSwatchType ColorSwatchType;
};

