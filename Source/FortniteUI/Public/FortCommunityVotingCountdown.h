#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Blueprint/UserWidget.h"
#include "FortCommunityVotingCountdown.generated.h"

class UCommonTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortCommunityVotingCountdown : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_TimeRemaining;
    
public:
    UFortCommunityVotingCountdown();
    UFUNCTION(BlueprintCallable)
    void SetDateTimeValue(const FDateTime& InDateTime, float InRefreshDelay);
    
};

