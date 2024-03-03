#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "CharacterPartsExtraSpecial.generated.h"

class UCustomCharacterPart;

USTRUCT(BlueprintType)
struct FCharacterPartsExtraSpecial {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCustomCharacterPart*> CharacterPartsForExtraSpecial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer SkinMetaTagsForExtraSpecial;
    
    FORTNITEGAME_API FCharacterPartsExtraSpecial();
};

