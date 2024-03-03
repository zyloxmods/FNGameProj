#pragma once
#include "CoreMinimal.h"
#include "GameStateComponent.h"
#include "FortGameStateComponent_Telemetry.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UFortGameStateComponent_Telemetry : public UGameStateComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<int32> MatchCounts;
    
public:
    UFortGameStateComponent_Telemetry();
};

