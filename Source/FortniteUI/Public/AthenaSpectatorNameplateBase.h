#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EAthenaSpectatorNameplateDetailState.h"
#include "EAthenaSpectatorNameplateDistanceState.h"
#include "FortActorIndicatorWidget.h"
#include "AthenaSpectatorNameplateBase.generated.h"

class AActor;
class AFortPlayerPawn;
class UAthenaRemotePlayerViewData;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaSpectatorNameplateBase : public UFortActorIndicatorWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceToCameraOffsetScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinZOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxZOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideNameplateScaleToMax;
    
private:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UAthenaRemotePlayerViewData> PlayerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EAthenaSpectatorNameplateDistanceState CurrentDistanceState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EAthenaSpectatorNameplateDetailState CurrentDetailState;
    
public:
    UAthenaSpectatorNameplateBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTeamColorVisible(bool bTeamColorVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSquadIdVisibility(bool bSquadIdVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetArrowTeamColorVisible(bool bArrowTeamColorVisible);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVehicleStateChanged(AActor* NewVehicle, AActor* OldVehicle);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTeamColorChanged(UAthenaRemotePlayerViewData* InPlayerData, FLinearColor InTeamColor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSquadIDsDisplayModeHoldUpdate();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSquadIdChanged(UAthenaRemotePlayerViewData* InPlayerData, uint8 InSquadId);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPlayerPawnChanged(UAthenaRemotePlayerViewData* InPlayerData, AFortPlayerPawn* InPlayerPawn);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerNameChanged(UAthenaRemotePlayerViewData* InPlayerData, const FString& InPlayerName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerDataSet(UAthenaRemotePlayerViewData* InPlayerData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDistanceStateChanged(EAthenaSpectatorNameplateDistanceState NewDistanceState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDetailStateChanged(EAthenaSpectatorNameplateDetailState NewDetailState);
    
};

