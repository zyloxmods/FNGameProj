#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "ArsenicCoreRespawnDrone.generated.h"

class ACameraActor;
class AFortPlayerPawnAthena;
class UArsenicCorePlayerComponent;

UCLASS(Blueprintable)
class AArsenicCoreRespawnDrone : public AActor {
    GENERATED_BODY()
public:
    AArsenicCoreRespawnDrone();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    ACameraActor* GetCamera() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BeginGhostTransitionSequence(AFortPlayerPawnAthena* PlayerPawn, UArsenicCorePlayerComponent* ArsenicCorePlayerComponent, FVector RespawnLocation);
    
};

