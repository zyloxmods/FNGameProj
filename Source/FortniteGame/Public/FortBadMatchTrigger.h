#pragma once
#include "CoreMinimal.h"
#include "EFortBadMatchTriggerOperation.h"
#include "EFortBadMatchTriggerType.h"
#include "FortBadMatchTrigger.generated.h"

USTRUCT(BlueprintType)
struct FFortBadMatchTrigger {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortBadMatchTriggerOperation Operation;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    double Value;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Playlists;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortBadMatchTriggerType Type;
    
    FORTNITEGAME_API FFortBadMatchTrigger();
};

