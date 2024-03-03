#pragma once
#include "CoreMinimal.h"
#include "CommonRotator.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "AthenaMapChallengeCategoryRotator.generated.h"

class UCommonButton;
class UFortQuestItem;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaMapChallengeCategoryRotator : public UCommonRotator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Next;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Previous;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle NextInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle PreviousInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowTabsWithCompletedChallenges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxSuggestedEntries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag BangTrackerTag;
    
public:
    UAthenaMapChallengeCategoryRotator();
private:
    UFUNCTION(BlueprintCallable)
    void HandleNewContextualObjectives(const TArray<UFortQuestItem*>& ContextualQuests);
    
};

