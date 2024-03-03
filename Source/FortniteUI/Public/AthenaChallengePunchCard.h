#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "UObject/NoExportTypes.h"
#include "FortChallengePunchCardStyles.h"
#include "AthenaChallengePunchCard.generated.h"

class UCommonTextBlock;
class UDynamicEntryBox;
class UFortChallengeBundleItem;
class UFortChallengeBundleItemDefinition;
class UFortQuestItem;

UCLASS(Blueprintable, EditInlineNew)
class UAthenaChallengePunchCard : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxPunchesAllowed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicEntryBox* Box_PunchSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Description;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bInitializedWidgetPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bBundleIsKnown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bBangShown;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UFortChallengeBundleItemDefinition> WeakBundleDef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FDateTime MostRecentPunch;
    
public:
    UAthenaChallengePunchCard();
    UFUNCTION(BlueprintCallable)
    void UpdateChallengePunchCard(const UFortChallengeBundleItem* Bundle, const UFortQuestItem* CopmpletedQuest);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UnfocusPunchCard();
    
    UFUNCTION(BlueprintCallable)
    void TryToClearBangState();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowWidget();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetUpEncodedName(const FString& Name, int32 Count);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetUnkownState(bool bKnown);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetStyle(const FFortChallengePunchCardStyles& PunchStyle);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetProgressCount(int32 AchivedCount, int32 GoalCount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetBangState(bool bShowBang);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideProgressCount(bool bBundleCompleted);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FocusPunchCard();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FinishedPunchingCard(bool bPlayOutro);
    
};

