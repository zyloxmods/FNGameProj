#pragma once
#include "CoreMinimal.h"
#include "EIndicatorStateImage.h"
#include "FortControllerComponent.h"
#include "AttributeSet.h"
#include "ENitrogenGamePhase.h"
#include "NitrogenClientBeginFareDelegate.h"
#include "NitrogenClientEndFareDelegate.h"
#include "NitrogenFareInteractionData.h"
#include "NitrogenPlayerComponent.generated.h"

class AActor;
class ABuildingActor;
class AFortAthenaMutator_Nitrogen;
class AFortAthenaVehicle;
class AFortPlayerControllerAthena;
class AFortPlayerPawnAthena;
class AFortSquadStart;
class ANitrogenFare;
class ANitrogenFareDataRepActor;
class USoundMix;

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNitrogenPlayerComponent : public UFortControllerComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* CurrentFareWidgetActor;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNitrogenClientBeginFare OnClientBeginFare;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNitrogenClientEndFare OnClientEndFare;
    
protected:
    UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_CachedMutator, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AFortAthenaMutator_Nitrogen> CachedMutator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat NearbyVehicleUpdateRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MinimumVehicleAirTimeBeforeStatTracking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundMix* LoadingScreenSoundSuppressionSoundMix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat bAllowHighlightNearbyLeadingPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat bHighlightLeadingPlayers_UseStencilHighlight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat HighlightLeadingPlayers_UpdateRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat HighlightLeadingPlayers_MinTeamScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat HighlightLeadingPlayers_MaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat HighlightLeadingPlayers_HighlightDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat bHighlightLeadingPlayers_IndicatorClampToScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat HighlightLeadingPlayers_IndicatorZOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIndicatorStateImage OverrideIndicatorImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HighlightLeadingPlayers_StencilName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFortPlayerPawnAthena*> CurrentlyHighlightedLeadingPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_FareInteractionData, meta=(AllowPrivateAccess=true))
    FNitrogenFareInteractionData FareInteractionData;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ABuildingActor*> DestroyedBuildingActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* NearestVehicleWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortSquadStart* CurrentRespawnSquadStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ANitrogenFare* PreviousFare;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_FareDataRepActor, meta=(AllowPrivateAccess=true))
    ANitrogenFareDataRepActor* FareDataRepActor;
    
public:
    UNitrogenPlayerComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_FareInteractionData();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_FareDataRepActor();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CachedMutator();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnNitrogenGamePhaseChanged(ENitrogenGamePhase NewGamePhase);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGameStarted();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnExitVehicle();
    
    UFUNCTION(BlueprintCallable)
    void OnEnterVehiclePassenger();
    
    UFUNCTION(BlueprintCallable)
    void OnEnterVehicleDriver();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void HandleVehicleDestroyedBuildingActor(AFortAthenaVehicle* Vehicle, ABuildingActor* BuildingActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDistanceFromDropOff() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDistanceFromClosestPassenger() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void ClientHandleLoadingScreenStateChanged(AFortPlayerControllerAthena* PlayerController, bool bEnableLoadScreen, FText HUDReasonText);
    
};

