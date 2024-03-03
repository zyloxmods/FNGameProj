#pragma once
#include "CoreMinimal.h"
#include "FortAlwaysRelevantActorInfo.generated.h"

class AActor;
class UNetConnection;

USTRUCT(BlueprintType)
struct FFortAlwaysRelevantActorInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNetConnection* Connection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* LastPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* LastTetherPawn;
    
    FORTNITEGAME_API FFortAlwaysRelevantActorInfo();
};

