#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "PlayerStartInfo.generated.h"

class AFortPlayerStart;

USTRUCT(BlueprintType)
struct FPlayerStartInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 TeamNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer RequiredTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AFortPlayerStart*> PlayerStartActors;
    
    FORTNITEGAME_API FPlayerStartInfo();
};

