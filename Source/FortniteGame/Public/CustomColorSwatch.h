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
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortCustomGender GenderPermitted;
    
protected:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EColorSwatchType> ColorSwatchType;
    
public:
    UCustomColorSwatch();
};

