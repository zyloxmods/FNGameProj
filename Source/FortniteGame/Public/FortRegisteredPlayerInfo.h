#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "Engine/EngineTypes.h"
#include "GameFramework/OnlineReplStructs.h"
#include "AbilitySystemActorChangedDelegate.h"
#include "ERegisteredPlayerUnregistrationStatus.h"
#include "ESubGame.h"
#include "EndZoneScoreAndAwards.h"
#include "FortRegisteredPlayerInfo.generated.h"

class UAbilitySystemComponent;
class UFortAwardManager;
class UFortCollectionBookManager;
class UFortCustomizationAssetLoader;
class UFortExpeditionManager;
class UFortHero;
class UFortLinkedAccountManager;
class UFortMcpProfileAthena;
class UFortMcpProfileCampaign;
class UFortMcpProfileCollections;
class UFortMcpProfileCommonCore;
class UFortMcpProfileCommonPublic;
class UFortMcpProfileCreative;
class UFortMcpProfileMetadata;
class UFortMcpProfileWorld;
class UFortMinigameManager;
class UFortQuestManager;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortRegisteredPlayerInfo : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAbilitySystemActorChanged OnAbilitySystemActorChangedChangedDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUniqueNetIdRepl PlayerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUniqueNetIdRepl PartyLeaderId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Platform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 TeamAssignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInitialPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldLockProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFailedToLockProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid UnregistrationSaveGUID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERegisteredPlayerUnregistrationStatus UnregistrationStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle UnregisterFailsafeTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle PollForDedicatedServerReadyToShutdownTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortMcpProfileCommonPublic* CommonPublicProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortMcpProfileCommonCore* CommonCoreProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortMcpProfileCampaign* AccountProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortMcpProfileWorld* WorldProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortMcpProfileWorld* OutpostProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortMcpProfileMetadata* MetadataProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortMcpProfileCreative* CreativeModeProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortMcpProfileCollections* CollectionsProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortMcpProfileAthena* AthenaProfile;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortQuestManager* QuestManagers[2];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESubGame, UFortAwardManager*> AwardManagers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESubGame, UFortMinigameManager*> MinigameManagers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortCollectionBookManager* CollectionBookManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortExpeditionManager* ExpeditionManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortLinkedAccountManager* LinkedAccountManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortHero* TempAthenaMenuHeroInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bAthenaMenuHeroDirty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortCustomizationAssetLoader* CustomizationAssetLoader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FEndZoneScoreAndAwards EndZoneScoreAndAwards;
    
public:
    UFortRegisteredPlayerInfo();
private:
    UFUNCTION(BlueprintCallable)
    void HandleDifferentHeroLoadoutActivated(const UFortMcpProfileCampaign* Profile);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetPlayerName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAbilitySystemComponent* GetAbilitySystemComponent() const;
    
};

