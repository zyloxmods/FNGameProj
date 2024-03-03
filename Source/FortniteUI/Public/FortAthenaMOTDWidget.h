#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "Engine/DataTable.h"
#include "EFrontEndCamera.h"
#include "GameplayTagContainer.h"
#include "AthenaNewsEntry.h"
#include "EAthenaNewsStyle.h"
#include "FortPrimaryContentInterface.h"
#include "PrimaryContentSetup.h"
#include "Templates/SubclassOf.h"
#include "FortAthenaMOTDWidget.generated.h"

class UBattlePassPurchaseScreen;
class UCommonButton;
class UCommonButtonGroup;
class UEpicCMSImage;
class UFortActivatableMovieWidget_Monolithic;
class UFortAthenaMOTDTile;
class UFortDirectAcquisitionOfferDetailsWidget;
class UFortDynamicEntryBox;
class UFortRealMoneyOfferDetails;
class UFortStoreFrontOfferInfo;
class URichTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortAthenaMOTDWidget : public UCommonActivatableWidget, public IFortPrimaryContentInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCommonButtonGroup* MOTDButtonGroup;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortAthenaMOTDTile> MOTDTileClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortActivatableMovieWidget_Monolithic> NewVideoPlayerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortDirectAcquisitionOfferDetailsWidget> ItemViewClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortRealMoneyOfferDetails> RMTItemViewClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBattlePassPurchaseScreen> BattlePassPurchaseScreenClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFrontEndCamera ActivationFrontendCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPrimaryContentSetup PrimaryContentSetup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag BattlepassScreenTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle NavigateLeftInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle NavigateRightInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortStoreFrontOfferInfo*> OfferInfoOwnershipArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowMOTDAfterInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_SpecialAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_NormalAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEpicCMSImage* CMSImage_SelectedNewsImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEpicCMSImage* CMSImage_SelectedNewsImage_Blurred;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* RichTextBlock_SelectedNewsTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* RichTextBlock_SelectedNewsBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Close;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortDynamicEntryBox* EntryBox_MOTDEntries;
    
public:
    UFortAthenaMOTDWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartSTWUpsell();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSpecialButtonText(const FText& InText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetNormalButtonText(const FText& InText);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDefaultImage();
    
    UFUNCTION(BlueprintCallable)
    void SelectNewsByIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetViewConfiguration();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayIntroAnimation();
    
    UFUNCTION(BlueprintCallable)
    bool PlayFirstAutoPlayVideo();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSelectedNews(const FAthenaNewsEntry& NewsEntry);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayIntroAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNewsPopulated();
    
    UFUNCTION(BlueprintCallable)
    void NavigateToRightNews();
    
    UFUNCTION(BlueprintCallable)
    void NavigateToLeftNews();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleSelectedButtonChanged(UCommonButton* SelectedButton, int32 ButtonIndex);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleNewsStyle(EAthenaNewsStyle NewsStyle);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleImageLoaded();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNewsCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FAthenaNewsEntry GetNewsByIndex(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FAthenaNewsEntry BP_GetSelectedNews() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AutoPlayedVideo() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

