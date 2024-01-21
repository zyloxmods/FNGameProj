#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortTournamentPayoutThresholdEntry.generated.h"

class UCommonTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortTournamentPayoutThresholdEntry : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Threshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Rewards;
    
public:
    UFortTournamentPayoutThresholdEntry();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPayoutDataSet(int32 EntryIndex);
    
};

