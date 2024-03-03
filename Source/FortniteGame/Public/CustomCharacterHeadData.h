#pragma once
#include "CoreMinimal.h"
#include "CustomCharacterBodyPartData.h"
#include "CustomCharacterHeadData.generated.h"

class UCustomHairColorSwatch;
class UCustomSkinColorSwatch;
class UFortMontageLookupTable;

UCLASS(Blueprintable, EditInlineNew)
class UCustomCharacterHeadData : public UCustomCharacterBodyPartData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Animation")
    TSoftObjectPtr<UFortMontageLookupTable> RootSkeletonDefaultMontageLookupTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Animation")
    TSoftObjectPtr<UFortMontageLookupTable> RootSkeletonOverrideMontageLookupTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Material Tweaks")
    TSoftObjectPtr<UCustomSkinColorSwatch> SkinColorSwatch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Material Tweaks")
    TSoftObjectPtr<UCustomHairColorSwatch> HairColorSwatch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Hat Morphs")
    TArray<FName> CapMorphTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Hat Morphs")
    TArray<FName> HelmetMorphTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Hat Morphs")
    TArray<FName> MaskMorphTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Hat Morphs")
    TArray<FName> HatMorphTargets;
    
public:
    UCustomCharacterHeadData();
};

