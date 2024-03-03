#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SpecialGameplayAreaOverrideBodyPartsExtraSpecial.generated.h"

class UCustomCharacterPart;

USTRUCT(BlueprintType)
struct FSpecialGameplayAreaOverrideBodyPartsExtraSpecial {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCustomCharacterPart*> OverrideBodyPartsForExtraSpecial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer SkinMetaTagsForExtraSpecial;
    
    FORTNITEGAME_API FSpecialGameplayAreaOverrideBodyPartsExtraSpecial();
};

