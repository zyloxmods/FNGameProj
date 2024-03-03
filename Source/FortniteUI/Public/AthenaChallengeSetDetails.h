#pragma once
#include "CoreMinimal.h"
#include "FortChallengeSetStyle.h"
#include "AthenaChallengeSetBaseDetails.h"
#include "AthenaChallengeSetDetails.generated.h"

class UAthenaChallengeCountdownDisplay;
class UAthenaChallengeDetailBase;
class UAthenaChallengeProgressBar;
class UCommonButton;
class UCommonTextBlock;
class UFortItemBaseWidget;
class UFortSwipePanel;
class USizeBox;
class UVerticalBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaChallengeSetDetails : public UAthenaChallengeSetBaseDetails {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_ChallengeContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_ChallengeSetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaChallengeProgressBar* ChallengeProgress_Completion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaChallengeCountdownDisplay* Countdown_TimeRemaining;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortSwipePanel* SwipePanel_ChangeSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* VB_ChallengeExtensions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaChallengeDetailBase* ChallengeDetail_ListPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* SB_MainContent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortItemBaseWidget* ItemInfo_PreviewedItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_PreviousSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_NextSet;
    
public:
    UAthenaChallengeSetDetails();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChallengeSetEstablished(const FFortChallengeSetStyle& DisplayStyle, bool bIsComplete);
    
};

