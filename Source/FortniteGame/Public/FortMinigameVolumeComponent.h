#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "OnMinigameSetupDelegate.h"
#include "Templates/SubclassOf.h"
#include "FortMinigameVolumeComponent.generated.h"

class AFortMinigame;
class AFortMinigameSettingsBuilding;
class AFortVolume;
class APlayerState;

UCLASS(Blueprintable, ClassGroup=Custom, Config=Creative, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UFortMinigameVolumeComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortMinigameSettingsBuilding* CurrentMinigameSettingsMachine;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMinigameSetup OnMinigameSetup;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFortMinigame> MinigameClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CurrentMinigame, meta=(AllowPrivateAccess=true))
    AFortMinigame* CurrentMinigame;
    
public:
    UFortMinigameVolumeComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentMinigame();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnClientExitVolume(APlayerState* InPlayerState, AFortVolume* InVolume);
    
    UFUNCTION(BlueprintCallable)
    void OnClientEnterVolume(APlayerState* InPlayerState, AFortVolume* InVolume);
    
};

