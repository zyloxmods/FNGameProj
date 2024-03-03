#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BuildingProp.h"
#include "CaptureAreaTeamInfo.h"
#include "CaptureHandle.h"
#include "BuildingProp_CaptureArea.generated.h"

class AActor;
class AController;
class AFortPickup;
class AFortPlayerController;
class AFortPlayerState;
class UCaptureComponent;
class UFortWorldItemDefinition;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class ABuildingProp_CaptureArea : public ABuildingProp {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCaptureAreaTeamInfo> CaptureAreaTeamsInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCaptureComponent* CaptureComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<AFortPlayerController*, FCaptureHandle> InventoryChangedHandlesMap;
    
public:
    ABuildingProp_CaptureArea();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void UnregisterPlayerInsideArea(AFortPlayerController* OldPlayerInside);
    
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void UnregisterAllRegisteredPlayerInsideArea();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void UnbindToControllerInventoryChangedEvent(AFortPlayerController* PlayerController);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void UnbindAllControllersToInventoryChangedEvent();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RemoveItemsFromPlayer(const TArray<UFortWorldItemDefinition*>& ItemsToCapture, AFortPlayerController* PlayerController);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RegisterPlayerInsideArea(AFortPlayerController* PlayerInside);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTeamsInfoChanged();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void OnPlayerChangedTeam(AFortPlayerState* PlayerState, uint8 NewTeam, uint8 OldTeam, bool bTeamChangedWithoutRespawn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOverlappedPlayerInventoryValidated(AFortPlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOverlappedPlayerInventoryChanged();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnFortPawnRegisteredInsideAreaDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCaptureAreaOwnerChanged(AFortPlayerController* NewOwner);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    int32 CaptureItemsFromPlayer(bool bRemoveOnFound, const TArray<UFortWorldItemDefinition*>& ItemsToCapture, AFortPlayerController* PlayerController, int32 AmountToRemove, int32& AddedScore);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    int32 CaptureItemsFromPickup(const TArray<UFortWorldItemDefinition*>& ItemsToCapture, AFortPickup* Pickup, int32& AddedScore);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnPlayerTeamReplicated();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void BindToControllerInventoryChangedEvent(AFortPlayerController* PlayerController);
    
protected:
    UFUNCTION(BlueprintCallable)
    void BindOrUnbindOnPlayerTeamReplicated(AFortPlayerState* PlayerState, bool bBind);
    
};

