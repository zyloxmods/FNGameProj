#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "Engine/DataTable.h"
#include "EFortCollectedState.h"
#include "AthenaCollectionScreenInfoOverlay.generated.h"

class UAthenaCollectionLeaderboard;
class UCommonButton;
class UCommonRichTextBlock;
class UCommonTextBlock;
class UFortDynamicEntryBox;
class UImage;
class UObject;
class UPanelWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaCollectionScreenInfoOverlay : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* RichText_AdditionalInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_ItemImage;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText NumCollectedTextFormat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText EmptyDisplayNameText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ToggleLeaderboardRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_ItemType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_ItemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* RichText_Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* RichText_AdditionalDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* Panel_FriendScores;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* RichText_NumCollected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_ItemNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Close;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortDynamicEntryBox* EntryBox_FriendScores;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaCollectionLeaderboard* FriendLeaderboard;
    
public:
    UAthenaCollectionScreenInfoOverlay();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnShowLeaderboard();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnItemIconLoaded(UObject* ItemIcon);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnInfoOverlayReset();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnHideLeaderboard();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnHasAdditionalInfoSet(bool bHasAdditionalInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnFriendScoresUpdated(int32 NumFriendScores);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnFriendLeaderboardDeactivated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnFriendLeaderboardActivated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnCollectedStateSet(EFortCollectedState CollectedState);
    
};

