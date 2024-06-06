#pragma once
#include "CoreMinimal.h"
#include "CustomCharacterPartData.h"
#include "CustomCharacterAccessoryData.generated.h"

class UAnimInstance;
class UCustomAccessoryAttachmentData;
class UCustomAccessoryColorSwatch;

UCLASS(Blueprintable, EditInlineNew)
class UCustomCharacterAccessoryData : public UCustomCharacterPartData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Accessory")
    FName AttachSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Accessory")
    UCustomAccessoryAttachmentData* AttachmentOverrideData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Accessory")
    bool bUseClothCollisionFromOtherParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Accessory")
    bool bCollideWithOtherPartsCloth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Accessory")
    TSoftClassPtr<UAnimInstance> AnimClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Accessory")
    TSoftClassPtr<UAnimInstance> FrontEndAnimClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Accessory")
    TSoftClassPtr<UAnimInstance> MannequinAnimClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Accessory")
    TSoftObjectPtr<UCustomAccessoryColorSwatch> AccessoryColors;
    
public:
    UCustomCharacterAccessoryData();
    friend class UAthenaCharacterItemDefinition;
    friend class UFortHeroType;
};

