#pragma once
#include "CoreMinimal.h"
#include "CreativeItemGranterItemEntry.generated.h"

class UFortWorldItemDefinition;

USTRUCT(BlueprintType)
struct FCreativeItemGranterItemEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortWorldItemDefinition> ItemDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    FORTNITEGAME_API FCreativeItemGranterItemEntry();
};

