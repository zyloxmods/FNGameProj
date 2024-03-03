#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "Templates/SubclassOf.h"
#include "FortDailyChallengeStickyNoteWidget.generated.h"

class UAthenaConfirmationWindow;
class UCommonButton;
class UCommonRichTextBlock;
class UFortQuestItem;
class USizeBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortDailyChallengeStickyNoteWidget : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MyDailyChallengeIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_RerollChallenge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* RichText_ChallengeDesc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* RichText_Progress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* SizeBox_ContentEnforcedSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* RichText_NextChallengeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAthenaConfirmationWindow> ConfirmationWindowClass;
    
public:
    UFortDailyChallengeStickyNoteWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReplaceConfirmationClosed(bool bAcceptedReroll);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHasChallengeUpdated(bool bHasAssignedChallenge);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleDailyQuestRerolled(const UFortQuestItem* NewQuest);
    
};

