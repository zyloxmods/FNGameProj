#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "EAthenaGamePhase.h"
#include "FortMatchQualitySubsystem.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortMatchQualitySubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UFortMatchQualitySubsystem();
private:
    UFUNCTION(BlueprintCallable)
    void HandleGamePhaseChanged(EAthenaGamePhase GamePhase);
    
};

