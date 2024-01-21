#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Styling/SlateColor.h"
#include "FortHUDElementWidget.h"
#include "FortResurrectionUIData.h"
#include "AthenaPlayerInfoBase.generated.h"

class AFortPlayerStateAthena;
class AFortPlayerStateZone;
class UCommonTextBlock;
class UFortVoiceChatStatusIcon;
class UImage;
class UTexture2D;
class UUserWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaPlayerInfoBase : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPlayerStateAthena* PlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor Color_PlayerNameAlive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor Color_PlayerNameDead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor Color_PlayerNameDisconnected;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_HealthBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_ShieldBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_DBNOBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_PlatformIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_PlayerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_Marker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* DBNOStateWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_DeadIndicator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_DisconnectedIndicator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_ResurrectChip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_ResurrectionChipExpirationBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortVoiceChatStatusIcon* SpeakerWidget;
    
public:
    UAthenaPlayerInfoBase();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateResurrectionExpirationWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TalkingStateChanged(AFortPlayerStateAthena* PS, bool bTalking);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetPlayerState(AFortPlayerStateAthena* InPlayerState);
    
    UFUNCTION(BlueprintCallable)
    void SendEpicFriendInvite();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnResurrectionStateChanged(const FFortResurrectionUIData& ResurrectionStateData);
    
    UFUNCTION(BlueprintCallable)
    void OnPlaylistLoaded(FName PlaylistName, const FGameplayTagContainer& PlaylistContextTags);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlaylistExtensionWidgetCreated(UUserWidget* Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGameModeIconChange(AFortPlayerStateAthena* PS, UTexture2D* NewGameModeIcon);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDisplayAddFriend(bool bShowAnimation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MutedStateChanged(AFortPlayerStateAthena* PS, bool Muted);
    
    UFUNCTION(BlueprintCallable)
    void HandleSpectatingChanged(AFortPlayerStateZone* NewSpectatingTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DBNOStateChanged(AFortPlayerStateAthena* PS, bool bDBNO);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BeingRevivedStateChanged(AFortPlayerStateAthena* PS, bool bReviving);
    
};

