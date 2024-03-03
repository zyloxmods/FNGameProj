#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "DonutChallengeEntryHeader.generated.h"

class UAthenaChallengeCountdownDisplay;
class UCommonTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UDonutChallengeEntryHeader : public UCommonButton {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaChallengeCountdownDisplay* Timer_UnlockTimer;
    
public:
    UDonutChallengeEntryHeader();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPUpdateTitle(int32 InWeek);
    
};

