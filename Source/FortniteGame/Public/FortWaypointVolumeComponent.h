#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FortWaypointVolumeComponent.generated.h"

class AFortVolume;
class AFortWaypointInfo;
class APlayerState;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortWaypointVolumeComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFortWaypointInfo*> WaypointGroups;
    
    UFortWaypointVolumeComponent();
    UFUNCTION(BlueprintCallable)
    void OnClientExitVolume(APlayerState* InPlayerState, AFortVolume* InVolume);
    
    UFUNCTION(BlueprintCallable)
    void OnClientEnterVolume(APlayerState* InPlayerState, AFortVolume* InVolume);
    
};

