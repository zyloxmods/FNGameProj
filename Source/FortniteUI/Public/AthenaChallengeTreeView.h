#pragma once
#include "CoreMinimal.h"
#include "AthenaChallengeListViewBase.h"
#include "Templates/SubclassOf.h"
#include "AthenaChallengeTreeView.generated.h"

class UAthenaChallengeTreeEntry_ChallengeSet;

UCLASS(Blueprintable)
class UAthenaChallengeTreeView : public UAthenaChallengeListViewBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAthenaChallengeTreeEntry_ChallengeSet> SetHeaderEntryClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReturnFocusToSelection;
    
public:
    UAthenaChallengeTreeView();
private:
    UFUNCTION(BlueprintCallable)
    void HandleQuestsUpdated();
    
};

