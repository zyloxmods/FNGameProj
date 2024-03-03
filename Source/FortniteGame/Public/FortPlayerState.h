#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/PlayerState.h"
#include "GameFramework/OnlineReplStructs.h"
#include "VisualLogger/VisualLoggerDebugSnapshotInterface.h"
#include "GameplayTagContainer.h"
#include "CustomCharacterData.h"
#include "EFortCustomBodyType.h"
#include "EFortCustomGender.h"
#include "EFortPlayerRole.h"
#include "EReadyCheckState.h"
#include "ETrustedPlatformType.h"
#include "FortAbilitySystemInterface.h"
#include "FortAppliedSwapItemAndVariantData.h"
#include "FortExperienceDelta.h"
#include "FortPlayerAttributeSets.h"
#include "FortTeamActorInterface.h"
#include "McpVariantChannelInfo.h"
#include "PlayerBannerInfo.h"
#include "ReplicatedStatValues.h"
#include "FortPlayerState.generated.h"

class AActor;
class AFortPickup;
class AFortPlayerPawn;
class AFortTeamInfo;
class AFortTeamPrivateInfo;
class UAthenaCharmItemDefinition;
class UCustomCharacterPart;
class UCustomColorSwatch;
class UCustomPlayerComponent;
class UFortAbilitySystemComponent;
class UFortAwardItemDefinition;
class UFortHeroType;

UCLASS(Blueprintable, MinimalAPI)
class AFortPlayerState : public APlayerState, public IFortTeamActorInterface/*, public IFortAbilitySystemInterface*/, public IVisualLoggerDebugSnapshotInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsWorldDataOwner: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_SessionOwner, meta=(AllowPrivateAccess=true))
    uint8 bIsGameSessionOwner: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsGameSessionAdmin: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsReadyToContinue: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bHasFinishedLoading: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_bHasStartedPlaying, meta=(AllowPrivateAccess=true))
    uint8 bHasStartedPlaying: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bMeshNetPlayer: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bRepFlag1: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    EFortPlayerRole PlayerRole;
    
    UPROPERTY(EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int16 WorldPlayerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PartyOwner, meta=(AllowPrivateAccess=true))
    FUniqueNetIdRepl PartyOwnerUniqueId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HeroId, meta=(AllowPrivateAccess=true))
    FString HeroId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HeroType, meta=(AllowPrivateAccess=true))
    UFortHeroType* HeroType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentCharXP, meta=(AllowPrivateAccess=true))
    int32 CurrentCharXP;
    
    UPROPERTY(EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AFortPickup> MyBackpackPickup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ScoreStatChanged, meta=(AllowPrivateAccess=true))
    int32 InitialExperienceLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ScoreStatChanged, meta=(AllowPrivateAccess=true))
    int32 InitialExperienceAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ScoreStatChanged, meta=(AllowPrivateAccess=true))
    TArray<FFortExperienceDelta> ExperienceDeltas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Platform, meta=(AllowPrivateAccess=true))
    FString Platform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BannerInfo, meta=(AllowPrivateAccess=true))
    FPlayerBannerInfo Banner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bIsSimulatingDamage;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortAwardItemDefinition*> Awards;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CharacterGender, meta=(AllowPrivateAccess=true))
    EFortCustomGender CharacterGender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CharacterBodyType, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortCustomBodyType::Type> CharacterBodyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CharacterData, meta=(AllowPrivateAccess=true))
    FCustomCharacterData CharacterData;
    
    UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_CharacterColorSwatches, meta=(AllowPrivateAccess=true))
    UCustomColorSwatch* CharacterColorSwatches[2];
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EFortCustomGender LocalCharacterGender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortCustomBodyType::Type> LocalCharacterBodyType;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCustomCharacterPart* LocalCharacterParts[6];
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAthenaCharmItemDefinition* LocalCharacterCharms[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UCustomCharacterPart*> LocalVariantPartsToLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMcpVariantChannelInfo> ActiveVariantOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFortAppliedSwapItemAndVariantData> ActiveCosmeticItemSwaps;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCustomColorSwatch* LocalCharacterColorSwatches[2];
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCustomPlayerComponent* CustomPRIComponent;
    
    UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_AccessoryColorSwatches, meta=(AllowPrivateAccess=true))
    UCustomColorSwatch* CharacterPartColorSwatches[6];
    
protected:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCustomColorSwatch* LocalCharacterPartColorSwatches[6];
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PlayerTeam, meta=(AllowPrivateAccess=true))
    AFortTeamInfo* PlayerTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PlayerTeamPrivate, meta=(AllowPrivateAccess=true))
    AFortTeamPrivateInfo* PlayerTeamPrivate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSkipReplicatedStats;
    
private:
    UPROPERTY(EditAnywhere, Transient, ReplicatedUsing=OnRep_ScoreStatChanged, meta=(AllowPrivateAccess=true))
    FReplicatedStatValues ReplicatedStats_Campaign[35];
    
    UPROPERTY(EditAnywhere, Transient, ReplicatedUsing=OnRep_ScoreStatChanged, meta=(AllowPrivateAccess=true))
    FReplicatedStatValues ReplicatedStats_Zone[35];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bAreZoneStatsFinalized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EReadyCheckState ReadyCheckState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HomeActor, meta=(AllowPrivateAccess=true))
    AActor* HomeActor;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortPlayerAttributeSets AttributeSets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortAbilitySystemComponent* AbilitySystemComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PlayerOSSName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETrustedPlatformType TrustedPlatformType;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PlatformUniqueNetId, meta=(AllowPrivateAccess=true))
    FUniqueNetIdRepl PlatformUniqueNetId;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bInvitedToConsoleSession;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bInitializedPlayerCustomizationOptionsFromClientSettings;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector PawnDeathLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CachedPreviousWorldPlayerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_InGhostMode, meta=(AllowPrivateAccess=true))
    bool bInGhostMode;
    
public:
    AFortPlayerState();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateScoreStatChanged();
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerChangeActiveVariantForCosmeticItem(FName ItemTemplateToChange, FGameplayTag VariantChannelToChange, FGameplayTag DesiredActiveVariant, AFortPlayerPawn* PreviewPawn);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_SessionOwner();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ScoreStatChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PlayerTeamPrivate();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PlayerTeam();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PlatformUniqueNetId();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Platform();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PartyOwner();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_InGhostMode();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_HomeActor(AActor* OldHomeActor);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HeroType();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HeroId();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentCharXP();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CharacterGender();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CharacterData();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CharacterColorSwatches();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CharacterBodyType();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bHasStartedPlaying();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_BannerInfo();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_AccessoryColorSwatches();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMeshNetPlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasStartedPlaying() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FUniqueNetIdRepl GetUniqueID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FUniqueNetIdRepl GetPlayerUniqueNetID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortPlayerPawn* GetPlayerPawnOrVehicleDriver() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetPlayerOSSName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FUniqueNetIdRepl GetPlatformUniqueNetId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetPlatform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortPlayerPawn* GetCurrentPawn() const;
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientNotifyAwardGranted(UFortAwardItemDefinition* AwardDefinition);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ChangeActiveVariantForCosmeticItem(FName ItemTemplateToChange, FGameplayTag VariantChannelToChange, FGameplayTag DesiredActiveVariant, AFortPlayerPawn* PreviewPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool AreUniqueIDsIdentical(const FUniqueNetIdRepl& A, const FUniqueNetIdRepl& B);
    
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    uint8 GetTeam() const override PURE_VIRTUAL(GetTeam, return 0;);
    
};

