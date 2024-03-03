#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "EDeathCause.h"
#include "PlayerBannerInfo.h"
#include "EliminatedOverlay.generated.h"

class AFortPlayerStateAthena;
class UAthenaPlayerKillsBase;
class UAthenaWinnersList;
class UCommonTextBlock;
class UCommonWidgetSwitcher;
class UFortRichTextBlockLegacy;
class UHorizontalBox;
class UOverlay;
class UTextBlock;
class UVerticalBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UEliminatedOverlay : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsWaitingForTeamEliminationForPlacement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> WinnerNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* Overlay_PlayerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Text_EliminatedBy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Text_UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Text_SpectatorName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* VBox_PlacementText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* VBox_Winner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Text_WinnerPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortRichTextBlockLegacy* Text_Winner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Text_MultiWinner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Text_Placement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_PlaceNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Text_PlacePoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonWidgetSwitcher* Switcher_MultiWinners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_MultiWinner1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_MultiWinner2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* HBox_LoadingBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaWinnersList* AthenaWinnersList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaPlayerKillsBase* Widget_KillCounter;
    
public:
    UEliminatedOverlay();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateMultiwinner();
    
    UFUNCTION(BlueprintCallable)
    void StreamingLoadingChanged(bool bLoading);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPlaceTextFont();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetBannerInfo(const FPlayerBannerInfo& BannerInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWinnerDetermined();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateMultiwinner();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShowPlacementBox();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnResetSpectatingForCreative();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEliminatedByIntro();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsEliminatedByIntroAnimFinished();
    
    UFUNCTION(BlueprintCallable)
    AFortPlayerStateAthena* GetPlayerState();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FText DeathCauseToText(EDeathCause DeathCause);
    
};

