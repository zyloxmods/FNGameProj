#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortLeaderboardEntryDetails.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortLeaderboardEntryDetails : public UCommonUserWidget {
    GENERATED_BODY()
public:
    UFortLeaderboardEntryDetails();
protected:
    UFUNCTION(BlueprintCallable)
    void WatchLiveMatch(const FString& SessionId);
    
};

