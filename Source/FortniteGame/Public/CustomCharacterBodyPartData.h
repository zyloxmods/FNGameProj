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
    //If null, this character part will use the character's animation as a master.  Otherwise, it presumes you will combine with the base pose manually.
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Body")
    TSoftClassPtr<UAnimInstance> AnimClass;

    //The Anim class to use when in the game's front-end.  If null, this character part will fall back to using AnimClass instead.
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Body")
    TSoftClassPtr<UAnimInstance> FrontEndAnimClass;

    //The Anim class to use when in a Player Mannequin (rather than a Player Pawn).  If null, this character part will fall back to using AnimClass instead.
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Body")
    TSoftClassPtr<UAnimInstance> MannequinAnimClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category = "Body")
    TSoftObjectPtr<UCustomAccessoryColorSwatch> AccessoryColors;
    
public:
    UCustomCharacterBodyPartData();
    friend class UAthenaCharacterItemDefinition;
    friend class UFortHeroType;
};

