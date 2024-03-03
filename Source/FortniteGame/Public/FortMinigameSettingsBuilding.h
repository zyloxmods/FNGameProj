#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Info.h"
#include "CreativeIslandMatchmakingSettings.h"
#include "EMMSPlayersPerTeamPreset.h"
#include "EMMSRulePreset.h"
#include "FortVolumeAccessor.h"
#include "GameDescriptionDataChangedDelegateDelegate.h"
#include "GameNameChangedDelegateDelegate.h"
#include "LevelSaveSpawnable.h"
#include "OnShowPublishWatermarkChangedDelegateDelegate.h"
#include "VolumeMachineSetDelegateDelegate.h"
#include "FortMinigameSettingsBuilding.generated.h"

class AFortMinigameSettingsBuilding;
class AFortVolume;
class UFortCreativeVolumeLinkComponent;

UCLASS(Blueprintable, MinimalAPI)
class AFortMinigameSettingsBuilding : public AInfo, public ILevelSaveSpawnable, public IFortVolumeAccessor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortCreativeVolumeLinkComponent* CreativeLinkComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_GameDescriptionData, meta=(AllowPrivateAccess=true))
    TArray<FText> GameDescriptionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_GameNameData, meta=(AllowPrivateAccess=true))
    FText GameNameData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bShowPublishWatermark;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameDescriptionDataChangedDelegate OnGameDescriptionDataChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameNameChangedDelegate OnGameNameDataChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVolumeMachineSetDelegate OnVolumeMachineSet;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnShowPublishWatermarkChangedDelegate OnShowPublishWatermarkChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowOutOfBounds;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDeferDeletePlayerBuiltBuildingActorsForRollback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FCreativeIslandMatchmakingSettings MatchmakingSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 MinimumNumberOfPlayersUserSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 MaximumNumberOfPlayersUserSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EMMSRulePreset MmsType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bPrefersRespectingPartiesFromMMS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 MmsPlayerCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EMMSPlayersPerTeamPreset MmsPlayersPerTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 JoinInProgress;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ShowResourceFeedOnElimination;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_SettingsVolume, meta=(AllowPrivateAccess=true))
    AFortVolume* SettingsVolume;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid SavedActorGuid;
    
public:
    AFortMinigameSettingsBuilding();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateMatchmakingSettings();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetGameDescription(const FText& GameName, const TArray<FText>& GameDescriptionText);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_SettingsVolume();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_GameNameData();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_GameDescriptionData();
    
    UFUNCTION(BlueprintCallable)
    void OnMinigameStarted();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnMinigameSettingsBuildingShowPublishWatermarkChanged(AFortMinigameSettingsBuilding* MinigameSettingsBuilding, bool bNewShowPublishWatermark);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnMinigameEnded();
    
    UFUNCTION(BlueprintCallable)
    void OnLinkedVolumeSet(AFortVolume* PreviousVolume, AFortVolume* NewVolume);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetTeamSetting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetGameName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FText> GetGameDescription();
    
private:
    UFUNCTION(BlueprintCallable)
    void CheckShowPublishWatermarkChanged();
    
    
    // Fix for true pure virtual functions not being implemented
};

