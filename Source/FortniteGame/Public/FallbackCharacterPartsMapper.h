#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FallbackCharacterPartsMapper.generated.h"

class UCustomCharacterPart;

USTRUCT(BlueprintType)
struct FFallbackCharacterPartsMapper {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RequiredTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UCustomCharacterPart>> CharacterParts;
    
    FORTNITEGAME_API FFallbackCharacterPartsMapper();
};

