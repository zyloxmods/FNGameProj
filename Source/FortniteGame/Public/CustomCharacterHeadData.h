#pragma once
#include "CoreMinimal.h"
#include "CustomCharacterBodyPartData.h"
#include "CustomCharacterHeadData.generated.h"

class UCustomHairColorSwatch;
class UCustomSkinColorSwatch;
class UFortMontageLookupTable;

UCLASS(Blueprintable, EditInlineNew)
class FORTNITEGAME_API UCustomCharacterHeadData : public UCustomCharacterBodyPartData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortMontageLookupTable> RootSkeletonDefaultMontageLookupTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortMontageLookupTable> RootSkeletonOverrideMontageLookupTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UCustomSkinColorSwatch> SkinColorSwatch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UCustomHairColorSwatch> HairColorSwatch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> CapMorphTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> HelmetMorphTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> MaskMorphTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> HatMorphTargets;
    
public:
    UCustomCharacterHeadData();
};

