#pragma once
#include "CoreMinimal.h"
#include "AthenaCharacterTaggedPartsList.generated.h"

class UCustomCharacterPart;

USTRUCT(BlueprintType)
struct FAthenaCharacterTaggedPartsList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UCustomCharacterPart>> Parts;
    
    FORTNITEGAME_API FAthenaCharacterTaggedPartsList();
};

