#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "BattlePassRewardChallenges.generated.h"

class UCommonTextBlock;
class UDynamicEntryBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UBattlePassRewardChallenges : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText BuyBattlePassText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DefaultChallengesTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText UnlocksInXDaysTextFormat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText UnlocksInXHoursTextFormat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText UnlocksSoonText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText HiddenChallengeText;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_PrerequisitesTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_ChallengesTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicEntryBox* EntryBox_Prerequisites;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicEntryBox* EntryBox_Challenges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_UnlocksIn;
    
public:
    UBattlePassRewardChallenges();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetChallengesSwitcher(bool bShowChallenges);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitPrerequisites();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitChallenges(const FText& ChallengesTitle);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnClearEntries();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAllChalengesCompleted();
    
};

