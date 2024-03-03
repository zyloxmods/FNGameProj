#pragma once
#include "CoreMinimal.h"
#include "FortHUDElementWidget.h"
#include "AthenaBroadcastFollowedPlayerInfoBase.generated.h"

class AActor;
class AFortPlayerControllerSpectating;
class AFortPlayerState;
class UAthenaRemotePlayerViewData;
class UAthenaSpectatorHitPointBarBase;
class UAthenaSpectatorPlayerWidgetBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaBroadcastFollowedPlayerInfoBase : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaSpectatorPlayerWidgetBase* PlayerWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaSpectatorHitPointBarBase* HitPointBar_Health;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaSpectatorHitPointBarBase* HitPointBar_Shield;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaSpectatorHitPointBarBase* HitPointBar_Vehicle;
    
public:
    UAthenaBroadcastFollowedPlayerInfoBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVehicleStateChanged(AActor* NewVehicle, AActor* OldVehicle);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPipModeChanged(bool bPipModeEnabled);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnFollowedPlayerChanged(AFortPlayerControllerSpectating* SpectatingPC, AFortPlayerState* FollowedPlayerState);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEliminatedStateChanged(UAthenaRemotePlayerViewData* PlayerData, bool bIsEliminated);
    
};

