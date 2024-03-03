#pragma once
#include "CoreMinimal.h"
#include "AICharacterPartsPreloadData.generated.h"

class UCustomCharacterPart;

USTRUCT(BlueprintType)
struct FAICharacterPartsPreloadData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCustomCharacterPart* CharacterPart;
    
    FORTNITEGAME_API FAICharacterPartsPreloadData();
};

