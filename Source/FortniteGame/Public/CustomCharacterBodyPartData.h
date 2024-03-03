#pragma once
#include "CoreMinimal.h"
#include "CustomCharacterPartData.h"
#include "CustomCharacterBodyPartData.generated.h"

class UAnimInstance;
class UCustomAccessoryColorSwatch;

UCLASS(Blueprintable, EditInlineNew)
class UCustomCharacterBodyPartData : public UCustomCharacterPartData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Body")
    TSoftClassPtr<UAnimInstance> AnimClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Body")
    TSoftClassPtr<UAnimInstance> FrontEndAnimClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Body")
    TSoftClassPtr<UAnimInstance> MannequinAnimClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Body")
    TSoftObjectPtr<UCustomAccessoryColorSwatch> AccessoryColors;
    
public:
    UCustomCharacterBodyPartData();
};

