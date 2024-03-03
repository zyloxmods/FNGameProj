#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "EAthenaChallengePageState.h"
#include "Templates/SubclassOf.h"
#include "AthenaChallengePageView.generated.h"

class UAthenaChallengePage;
class UCommonRichTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaChallengePageView : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bInGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAthenaChallengePage> PageEntryClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxNumEntriesPerPage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText PageNumberTextFormat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaChallengePage* ChallengePage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* RichText_PageNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAthenaChallengePageState PageState;
    
public:
    UAthenaChallengePageView();
protected:
    UFUNCTION(BlueprintCallable)
    void OnPageCycledOut();
    
    UFUNCTION(BlueprintCallable)
    void OnPageCycledIn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnNumPagesSet(int32 NumPages);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnIsInGameSet(bool bIsInGame);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnCyclePageOut(bool bForward);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnCyclePageIn(bool bForward);
    
};

