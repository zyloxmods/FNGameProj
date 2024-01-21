#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/PlayerState.h"
#include "GameFramework/OnlineReplStructs.h"
#include "VisualLogger/VisualLoggerDebugSnapshotInterface.h"
#include "AbilitySystemInterface.h"
#include "CustomCharacterParts.h"
#include "EFortCustomBodyType.h"
#include "EFortCustomGender.h"
#include "EFortPlayerRole.h"
#include "EReadyCheckState.h"
#include "ETrustedPlatformType.h"
#include "FortExperienceDelta.h"
#include "FortPlayerAttributeSets.h"
#include "FortTeamActorInterface.h"
#include "ReplicatedStatValues.h"
#include "FortPlayerState.generated.h"

class AActor;
class AFortPickup;
class AFortPlayerPawn;
class AFortTeamInfo;
class AFortTeamPrivateInfo;
class UCustomCharacterPart;
class UCustomColorSwatch;
class UCustomPlayerComponent;
class UFortAbilitySystemComponent;
class UFortAwardItemDefinition;
class UFortHeroType;

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortPlayerState : public APlayerState, public IFortTeamActorInterface/*, public IAbilitySystemInterface*/, public IVisualLoggerDebugSnapshotInterface {
    GENERATED_BODY()
public:
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ShowHeroBackpack, meta=(AllowPrivateAccess=true))
    uint8 bShowHeroBackpack: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ShowHeroHeadAccessories, meta=(AllowPrivateAccess=true))
    uint8 bShowHeroHeadAccessories: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bRepFlag1: 1;
    
    UPROPERTY(EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    EFortPlayerRole PlayerRole;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PartyOwner, meta=(AllowPrivateAccess=true))
    FUniqueNetIdRepl PartyOwnerUniqueId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 WorldPlayerId;
    
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortAwardItemDefinition*> Awards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Platform, meta=(AllowPrivateAccess=true))
    FString Platform;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CharacterGender, meta=(AllowPrivateAccess=true))
   EFortCustomGender CharacterGender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CharacterBodyType, meta=(AllowPrivateAccess=true))
    EFortCustomBodyType CharacterBodyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CharacterParts, meta=(AllowPrivateAccess=true))
    FCustomCharacterParts CharacterParts;
    
    UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_CharacterColorSwatches, meta=(AllowPrivateAccess=true))
    UCustomColorSwatch* CharacterColorSwatches[2];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EFortCustomGender LocalCharacterGender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EFortCustomBodyType LocalCharacterBodyType;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCustomCharacterPart* LocalCharacterParts[6];
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCustomColorSwatch* LocalCharacterColorSwatches[2];
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCustomPlayerComponent* CustomPRIComponent;
    
protected:
    UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_AccessoryColorSwatches, meta=(AllowPrivateAccess=true))
    UCustomColorSwatch* CharacterPartColorSwatches[6];
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCustomColorSwatch* LocalCharacterPartColorSwatches[6];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PlayerTeam, meta=(AllowPrivateAccess=true))
    AFortTeamInfo* PlayerTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PlayerTeamPrivate, meta=(AllowPrivateAccess=true))
    AFortTeamPrivateInfo* PlayerTeamPrivate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSkipReplicatedStats;
    
    UPROPERTY(EditAnywhere, Transient, ReplicatedUsing=OnRep_ScoreStatChanged, meta=(AllowPrivateAccess=true))
    FReplicatedStatValues ReplicatedStats_Campaign[34];
    
    UPROPERTY(EditAnywhere, Transient, ReplicatedUsing=OnRep_ScoreStatChanged, meta=(AllowPrivateAccess=true))
    FReplicatedStatValues ReplicatedStats_Zone[34];
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bAreZoneStatsFinalized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EReadyCheckState ReadyCheckState;
    
protected:
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PlatformUniqueNetId, meta=(AllowPrivateAccess=true))
    FUniqueNetIdRepl PlatformUniqueNetId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bInvitedToConsoleSession;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bInitializedPlayerCustomizationOptionsFromClientSettings;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector PawnDeathLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CachedPreviousWorldPlayerId;
    
public:
    AFortPlayerState();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateScoreStatChanged();
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetShowHeroHeadAccessories(bool bShow);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetShowHeroBackpack(bool bShow);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ShowHeroHeadAccessories();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ShowHeroBackpack();
    
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
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HomeActor(AActor* OldHomeActor);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HeroType();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HeroId();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentCharXP();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CharacterParts();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CharacterGender();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CharacterColorSwatches();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CharacterBodyType();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bHasStartedPlaying();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AccessoryColorSwatches();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsConsolePlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FUniqueNetIdRepl GetUniqueID() const;
    
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
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool AreUniqueIDsIdentical(const FUniqueNetIdRepl& A, const FUniqueNetIdRepl& B);
    
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    uint8 GetTeam() const override PURE_VIRTUAL(GetTeam, return 0;);
    
};

