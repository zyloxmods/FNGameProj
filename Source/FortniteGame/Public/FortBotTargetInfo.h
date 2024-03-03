#pragma once
#include "CoreMinimal.h"
#include "FortBotTargetInfo.generated.h"

class AActor;
class ABuildingActor;

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FFortBotTargetInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* SourceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* SupportingActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABuildingActor* AlternateTargetingActor;
    
    FFortBotTargetInfo();
};

