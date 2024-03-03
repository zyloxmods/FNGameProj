#pragma once
#include "CoreMinimal.h"
#include "EAthenaGamePhase.h"
#include "GameplayTagContainer.h"
#include "Styling/SlateColor.h"
#include "FortHUDElementWidget.h"
#include "FortResurrectionUIData.h"
#include "AthenaPlayerInfoBase.generated.h"

class AFortPlayerStateAthena;
class UAthenaLevelEffects;
class UAthenaTeamMemberDBNOState;
class UCommonTextBlock;
class UCommonWidgetSwitcher;
class UContentWidget;
class UFortSocialAvatarIcon;
class UFortVoiceChatStatusIconProxyAnim;
class UImage;
class UTexture2D;
class UUserWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaPlayerInfoBase : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLocalPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor Color_PlayerNameAlive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor Color_PlayerNameDead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor Color_PlayerNameDisconnected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_HealthBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_ShieldBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UContentWidget* Content_StormCN;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_StormCN;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_DBNOBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_PlatformIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_PlayerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_Marker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaTeamMemberDBNOState* DBNOStateWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_DeadIndicator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_DisconnectedIndicator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_ResurrectChip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_ResurrectionChipExpirationBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonWidgetSwitcher* WidgetSwitcher_Avatar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortSocialAvatarIcon* Icon_AvatarSocial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_AvatarOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortVoiceChatStatusIconProxyAnim* SpeakerWidgetAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaLevelEffects* LevelEffects;
    
public:
    UAthenaPlayerInfoBase();
    UFUNCTION(BlueprintCallable)
    void SetPlayerState(AFortPlayerStateAthena* InPlayerState);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandlePlaylistLoaded(FName PlaylistName, const FGameplayTagContainer& PlaylistContextTags);
    
    UFUNCTION(BlueprintCallable)
    void HandlePlayerMutatorDataChanged();
    
    UFUNCTION(BlueprintCallable)
    void HandleGamePhaseChanged(EAthenaGamePhase NewPhase);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_HandleTalkingVisualDisplayChanged(bool bTalkingVisualsActive);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_HandleTalkingStateChanged(bool bIsTalking);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_HandleSeasonLevelUIDisplayChanged(int32 Level);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_HandleResurrectionStateChanged(const FFortResurrectionUIData& ResurrectionStateData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_HandlePlaylistLoaded(FName PlaylistName, const FGameplayTagContainer& PlaylistContextTags);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_HandlePlaylistExtensionWidgetCreated(UUserWidget* Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_HandlePlayerNameReplicated(const FString& PlayerName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_HandleMutedStateChanged(bool bIsMuted);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_HandleIsBeingRevivedStateChanged(bool bIsTalking);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_HandleGameModeIconChanged(UTexture2D* GameModeIcon);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_HandleDBNOStateChanged(bool bDBNO);
    
};

