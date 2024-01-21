#pragma once
#include "CoreMinimal.h"
#include "CustomCharacterPartData.h"
#include "CustomCharacterBodyPartData.generated.h"

class UAnimInstance;
class UCustomAccessoryColorSwatch;

UCLASS(Blueprintable, EditInlineNew)
class FORTNITEGAME_API UCustomCharacterBodyPartData : public UCustomCharacterPartData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UAnimInstance> AnimClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UAnimInstance> FrontEndAnimClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UAnimInstance> MannequinAnimClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UCustomAccessoryColorSwatch> AccessoryColors;
    
public:
    UCustomCharacterBodyPartData();
};

