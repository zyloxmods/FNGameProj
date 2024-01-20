#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Info.h"
#include "CreativeIslandMatchmakingSettings.h"
#include "GameDescriptionDataChangedDelegateDelegate.h"
#include "GameNameChangedDelegateDelegate.h"
#include "LevelSaveSpawnable.h"
#include "VolumeMachineSetDelegateDelegate.h"
#include "FortMinigameSettingsBuilding.generated.h"

class AFortVolume;
class ASolarisPrototype;
class UFortCreativeVolumeLinkComponent;

UCLASS(Blueprintable, MinimalAPI)
class AFortMinigameSettingsBuilding : public AInfo, public ILevelSaveSpawnable {
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowOutOfBounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FCreativeIslandMatchmakingSettings MatchmakingSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 MinimumNumberOfPlayersUserSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 MaximumNumberOfPlayersUserSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 JoinInProgress;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASolarisPrototype* PlayerScript;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_SettingsVolume, meta=(AllowPrivateAccess=true))
    AFortVolume* SettingsVolume;
    
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
    
    UFUNCTION(BlueprintCallable)
    void OnMinigameEnded();
    
    UFUNCTION(BlueprintCallable)
    void OnLinkedVolumeSet(AFortVolume* PreviousVolume, AFortVolume* NewVolume);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetGameName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FText> GetGameDescription();
    
    
    // Fix for true pure virtual functions not being implemented
};

