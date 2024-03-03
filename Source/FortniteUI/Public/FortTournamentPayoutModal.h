#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "TournamentPayoutThresholdData.h"
#include "FortTournamentPayoutModal.generated.h"

class UCommonTextBlock;
class UDynamicEntryBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortTournamentPayoutModal : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_TournamentName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_SessionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_ThresholdTypeLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicEntryBox* DynamicEntryBox_PayoutThresholds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FTournamentPayoutThresholdData> TournamentPayoutData;
    
public:
    UFortTournamentPayoutModal();
protected:
    UFUNCTION(BlueprintCallable)
    void SetEventWindowId(const FString& EventId, const FString& EventWindowId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NotifyNoPayouts();
    
};

