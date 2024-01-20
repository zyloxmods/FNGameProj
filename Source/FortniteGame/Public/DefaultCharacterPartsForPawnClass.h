#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DefaultCharacterPartsForPawnClass.generated.h"

class UCustomCharacterPart;

USTRUCT(BlueprintType)
struct FDefaultCharacterPartsForPawnClass {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ClassTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UCustomCharacterPart>> CharacterParts;
    
    FORTNITEGAME_API FDefaultCharacterPartsForPawnClass();
};

