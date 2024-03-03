#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "Engine/DataTable.h"
#include "EChallengeInfoPage.h"
#include "AthenaChallengeInfoPanel.generated.h"

class UCommonTextBlock;
class UDynamicEntryBox;
class UFortPartyMember;
class UFortQuestItem;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaChallengeInfoPanel : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EChallengeInfoPage CurrentPage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle CyclePagesInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxSuggestedEntries;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UFortPartyMember>> PartyMembersWithAssistedChallenges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_DisplayedChallengeTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicEntryBox* EntryBox_Challenges;
    
public:
    UAthenaChallengeInfoPanel();
private:
    UFUNCTION(BlueprintCallable)
    void HandleQuestsUpdatedInGame();
    
    UFUNCTION(BlueprintCallable)
    void HandleNewContextualObjectives(const TArray<UFortQuestItem*>& Objectives);
    
    UFUNCTION(BlueprintCallable)
    void HandleCycleQuestsInputAction(bool& bPassThrough);
    
};

