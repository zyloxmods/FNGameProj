#pragma once
#include "CoreMinimal.h"
#include "EFortMinigameStatOperation.h"
#include "EFortMinigameStatScope.h"
#include "Templates/SubclassOf.h"
#include "FortMinigameStatQuery.generated.h"

class UFortMinigameStatFilter;

USTRUCT(BlueprintType)
struct FFortMinigameStatQuery {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortMinigameStatFilter> Stat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortMinigameStatScope Scope;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAnyMatch: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortMinigameStatOperation Operation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bStaticCount: 1;
    
    FORTNITEGAME_API FFortMinigameStatQuery();
};

