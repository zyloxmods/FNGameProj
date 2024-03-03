#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/OnlineReplStructs.h"
#include "AttributeSet.h"
#include "AsyncTaskResult.h"
#include "BuildingGameplayActor.h"
#include "CreativeIslandDescriptionTag.h"
#include "CreativeLoadedLinkData.h"
#include "VehicleTeleportPortal.h"
#include "FortAthenaCreativePortal.generated.h"

class AActor;
class AFortAthenaVehicle;
class AFortPlayerPawn;
class AFortPlayerStateAthena;
class AFortVolume;
class UCapsuleComponent;
class UPrimitiveComponent;
class UTexture2DDynamic;
class UUserWidget;

UCLASS(Blueprintable, MinimalAPI)
class AFortAthenaCreativePortal : public ABuildingGameplayActor, public IVehicleTeleportPortal {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PortalIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* DestinationActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OverrideImageURL;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MarkerDetailsPointerOrigin;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxInstantTeleportDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText LoadingText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SavingText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TeleportingPlayersText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TeleportingVehiclesText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortVolume* LinkedVolume;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bReturnToCreativeHub;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ErrorState, meta=(AllowPrivateAccess=true))
    bool bInErrorState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bUserInitiatedLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IslandInfo, meta=(AllowPrivateAccess=true))
    FCreativeLoadedLinkData IslandInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_VolumeStatus, meta=(AllowPrivateAccess=true))
    FText VolumeStatus;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText SanitizedTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText SanitizedTagline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText SanitizedCreatorName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* InteractComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_PopulationChanged, meta=(AllowPrivateAccess=true))
    uint8 CurrentPopulation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_OwningPlayer, meta=(AllowPrivateAccess=true))
    FUniqueNetIdRepl OwningPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_PlayersReady, meta=(AllowPrivateAccess=true))
    TArray<FUniqueNetIdRepl> PlayersReady;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_PublishedPortal, meta=(AllowPrivateAccess=true))
    bool bIsPublishedPortal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVector TeleportLocation;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat TeleportExitDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bTeleportLocationIsIslandStart: 1;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisallowPortalInteract;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_PortalOpen, meta=(AllowPrivateAccess=true))
    bool bPortalOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPlayerStateAthena* CachedOwningPlayerState;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture2DDynamic* ThumbnailTexture;
    
    UPROPERTY(EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UCapsuleComponent> InteractIconPlacementCapsule;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bForceUpdateInteraction: 1;
    
    AFortAthenaCreativePortal();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void UpdateThumbnail();
    
public:
    UFUNCTION(BlueprintCallable)
    void TeleportVehicle(AFortAthenaVehicle* Vehicle);
    
    UFUNCTION(BlueprintCallable)
    void TeleportPlayerToLinkedVolume(AFortPlayerPawn* PlayerPawn, bool bUseSpawnTags);
    
private:
    UFUNCTION(BlueprintCallable)
    void TeleportPlayerForPlotLoadComplete(AFortPlayerPawn* PlayerPawn);
    
public:
    UFUNCTION(BlueprintCallable)
    void TeleportPlayer(AFortPlayerPawn* PlayerPawn, const FRotator& TeleportRotation);
    
protected:
    UFUNCTION(BlueprintCallable)
    void StartedPlotLoadForUser(const FAsyncTaskResult& Result);
    
    UFUNCTION(BlueprintCallable)
    void SetInteractionInteractComponent(UPrimitiveComponent* PrimitiveComponent);
    
    UFUNCTION(BlueprintCallable)
    void SetInteractionDisplayWidget(UUserWidget* DisplayWidget);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetHUDPointerOrigin(FVector NewPointerOrigin);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ServerOnInteractWithIslandPortal(const AFortPlayerPawn* InteractingPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PortalOpenChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PopulationChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OwningPlayerChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OverlappingOnBeginPlay(AActor* Actor);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnVolumeManagerUserGeneratedContentRestrictionsChanged(AFortVolume* Volume, bool bRestrictionEnabled);
    
    UFUNCTION(BlueprintCallable)
    void OnUserGeneratedContentRestrictionsChanged(bool bRestrictionEnabled);
    
    UFUNCTION(BlueprintCallable)
    void OnUnloadPlotComplete(const FAsyncTaskResult& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnThumbnailTextureReady();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_VolumeStatus();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PublishedPortal();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PortalOpen();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PopulationChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PlayersReady();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_OwningPlayer();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IslandInfo();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ErrorState();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReceivedNewIslandInfo();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerPawnTeleported(AFortPlayerPawn* PlayerPawn, bool bTeleportedToIslandStart);
    
    UFUNCTION(BlueprintCallable)
    void OnClientLoadedStateChanged();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NotifyTeleportedVehicle(AActor* VehicleActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NotifyTeleportedPlayerPawn(AFortPlayerPawn* PlayerPawn, bool bTeleportedToIslandStart);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPortalOpen() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPortalInteractable() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetVolumeDisplayName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetVideoID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetThumbnailWidth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetThumbnailHeight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetTagline() const;
    
public:
    UFUNCTION(BlueprintCallable)
    uint8 GetPopulation() const;
    
    UFUNCTION(BlueprintCallable)
    AFortPlayerStateAthena* GetPlayerState();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetMnemonic() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortVolume* GetLinkedVolume() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsPublishedPortal() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetIslandID() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FCreativeIslandDescriptionTag> GetIslandDescriptionTags() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetImageURL() const;
    
public:
    UFUNCTION(BlueprintCallable)
    FVector GetHUDPointerOrigin();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> GetDescriptionTags() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetCreatorName() const;
    
    UFUNCTION(BlueprintCallable)
    void FinishedReadingCloudFiles(const FAsyncTaskResult& Result);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ErrorStateChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DisplayNameChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CuratedPortalChanged();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ClientSaveStateChanged(bool bSaving);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClientSaveDisplayChanged(bool bSaving);
    
protected:
    UFUNCTION(BlueprintCallable)
    void CheckMinigameOnTeleportComplete(AFortPlayerPawn* PlayerPawn, bool bTeleportedToIslandStart);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BlueprintUseMobileHighlight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BlueprintDisplayMobileInteractPrompt() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

