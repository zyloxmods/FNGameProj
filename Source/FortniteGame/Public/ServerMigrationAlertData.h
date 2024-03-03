#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "ServerMigrationAlertData.generated.h"

USTRUCT(BlueprintType)
struct FServerMigrationAlertData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SecondsRemainingStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SecondsRemainingEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle TimerHandle;
    
    FORTNITEGAME_API FServerMigrationAlertData();
};

