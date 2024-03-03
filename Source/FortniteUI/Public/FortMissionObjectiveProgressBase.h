#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortMissionObjectiveProgressBase.generated.h"

class AFortObjectiveBase;
class UCommonTextBlock;
class UProgressBar;

UCLASS(Blueprintable, EditInlineNew)
class UFortMissionObjectiveProgressBase : public UCommonUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProgressBar* ObjectiveProgressBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* ProgressBarText;
    
    UFortMissionObjectiveProgressBase();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Update(AFortObjectiveBase* Objective, int32 BarIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    float GetHeightEstimate() const;
    
};

