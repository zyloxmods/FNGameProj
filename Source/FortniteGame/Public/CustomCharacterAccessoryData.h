#pragma once
#include "CoreMinimal.h"
#include "CustomCharacterPartData.h"
#include "CustomCharacterAccessoryData.generated.h"

class UAnimInstance;
class UCustomAccessoryAttachmentData;
class UCustomAccessoryColorSwatch;

UCLASS(Blueprintable, EditInlineNew)
class FORTNITEGAME_API UCustomCharacterAccessoryData : public UCustomCharacterPartData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCustomAccessoryAttachmentData* AttachmentOverrideData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseClothCollisionFromOtherParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCollideWithOtherPartsCloth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UAnimInstance> AnimClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UAnimInstance> FrontEndAnimClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UAnimInstance> MannequinAnimClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UCustomAccessoryColorSwatch> AccessoryColors;
    
public:
    UCustomCharacterAccessoryData();
};

